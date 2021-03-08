// ----------------------------------------------------------------------- //
//
// MODULE  : Behemoth.cpp
//
// PURPOSE : Behemoth - Definition
//
// CREATED : 10/07/97
//
// ----------------------------------------------------------------------- //

#include <stdio.h>
#include "Behemoth.h"
#include "cpp_server_de.h"
#ifdef _ADD_ON
#include "BloodServerShell.h"
#endif


BEGIN_CLASS(Behemoth)
    ADD_REALPROP(RandomHitPoints, 0.0f) \
	ADD_STRINGPROP(AIState, "IDLE")     \
	ADD_VECTORPROP_VAL_FLAG(Dims, 37.0f, 52.0f, 31.0f, PF_DIMS | PF_LOCALDIMS | PF_HIDDEN)
END_CLASS_DEFAULT(Behemoth, AI_Mgr, NULL, NULL)

//static data member initialization
DBOOL		Behemoth::m_bLoadAnims = DTRUE;
CAnim_Sound	Behemoth::m_Anim_Sound;

#ifdef _ADD_ON
extern CBloodServerShell* g_pBloodServerShell;
#endif

// ----------------------------------------------------------------------- //
//
//	ROUTINE:	
//
//	PURPOSE:	Constructor
//
// ----------------------------------------------------------------------- //

Behemoth::Behemoth() : AI_Mgr()
{
	m_fHearingDist	= 2000.0f;
	m_fSensingDist	= 200.0f;
	m_fSmellingDist	= 2000.0f;
	m_fSeeingDist	= 1000.0f;

	m_fWalkSpeed	= 100.0f;
	m_fRunSpeed		= 320.0f;
	m_fRollSpeed	= 3.5f;

	m_fAIMass		= AI_DEFAULT_MASS;

	m_nAIStrength	= 5;

	_mbscpy((unsigned char*)m_szAIWeapon[0], (const unsigned char*)"BEHEMOTH_CLAW" );
	_mbscpy((unsigned char*)m_szAIWeapon[1], (const unsigned char*)"BEHEMOTH_SHOCKWAVE" );

	m_nState = STATE_Idle; 
	m_nLastState = STATE_Idle; 
	m_dwFlags = 0;

	m_bCabal = DFALSE;

	// [blg]
#ifdef _ADD_ON
	if (g_pBloodServerShell->IsAddon()) {
		m_fAIHitPoints = 1000;
	} else
#endif
	m_fAIHitPoints   = 5000;

	m_fAIRandomHP    = 0;
	m_fAIArmorPoints = 1000;

	m_damage.SetApplyDamagePhysics(DFALSE);

	_mbscpy((unsigned char*)m_szAIState, (const unsigned char*)"IDLE");
}


// ----------------------------------------------------------------------- //
//
//	ROUTINE:	EngineMessageFn
//
//	PURPOSE:	Handle engine messages
//
// ----------------------------------------------------------------------- //

DDWORD Behemoth::EngineMessageFn(DDWORD messageID, void *pData, DFLOAT fData)
{
	switch(messageID)
	{
		case MID_PRECREATE:
		{
			// Need to call base class to have the object name read in before
			// we call PostPropRead()

			DDWORD dwRet = AI_Mgr::EngineMessageFn(messageID, pData, fData);

			if(fData != PRECREATE_SAVEGAME)
				PostPropRead((ObjectCreateStruct*)pData);

			return dwRet;
		}
		break;
        
		case MID_INITIALUPDATE:
		{
			InitialUpdate((DVector *)pData);
			CacheFiles();
			break;
		}

		default : break;
	}


	return AI_Mgr::EngineMessageFn(messageID, pData, fData);
}

// ----------------------------------------------------------------------- //
//
//	ROUTINE:	PostPropRead()
//
//	PURPOSE:	Update properties
//
// ----------------------------------------------------------------------- //

void Behemoth::PostPropRead(ObjectCreateStruct *pStruct)
{
	if (!pStruct) return;

	char* pFilename = "Models\\Enemies\\behemoth.abc";
	char* pSkin = "Skins\\Enemies\\behemoth.dtx";
	_mbscpy((unsigned char*)pStruct->m_Filename, (const unsigned char*)pFilename);
	_mbscpy((unsigned char*)pStruct->m_SkinName, (const unsigned char*)pSkin);
}


// ----------------------------------------------------------------------- //
//
//	ROUTINE:	InitialUpdate()
//
//	PURPOSE:	Handle initial update
//
// ----------------------------------------------------------------------- //

DBOOL Behemoth::InitialUpdate(DVector *pMovement)
{
	m_pServerDE = BaseClass::GetServerDE();
	if (!m_pServerDE) return DFALSE;

	//Load up animation indexes if first model instance
    if(m_bLoadAnims)
	{
	    m_Anim_Sound.SetAnimationIndexes(m_hObject);
		m_Anim_Sound.GenerateHitSpheres(m_hObject);
	    m_Anim_Sound.SetSoundRoot("sounds\\enemies\\Behemoth");
		m_bLoadAnims = DFALSE;
	}

	m_damage.SetApplyDamagePhysics(DFALSE);

	AI_Mgr::InitStatics(&m_Anim_Sound);
	
	return DTRUE;
}

// ----------------------------------------------------------------------- //
// ROUTINE		: Behemoth::ComputeState
// DESCRIPTION	: Compute actual substate
// RETURN TYPE	: void 
// ----------------------------------------------------------------------- //

void Behemoth::ComputeState(int nStimType)
{
	int nStim = nStimType;

	if(nStimType == -1)
		nStim = ComputeStimuli();

	if(nStim == 0)
	{
		switch(m_nState)
		{
			case STATE_Idle:				SetNewState(STATE_Idle);			break;
			case STATE_SearchVisualTarget:	SetNewState(STATE_Idle);			break;
			case STATE_SearchSmellTarget:	SetNewState(STATE_Idle);			break;
			default:						SetNewState(STATE_SearchSmellTarget);	break;
		}
	}
	else
	{
		//if health is low or threat is high, attack close
		if(m_fStimuli[HEALTH] < 0.25f)
		{
			SetNewState(STATE_AttackFar);
			return;
		}

		if(nStimType == STIM_SMELL)
			SetNewState(STATE_SearchSmellTarget);
		else if(m_fStimuli[SIGHT] > 0.70f)
			SetNewState(STATE_AttackClose);
		else
			SetNewState(STATE_AttackFar);
	}

	return;
}

// ----------------------------------------------------------------------- //
// ROUTINE		: Behemoth::MC_Fire_Stand
// DESCRIPTION	: Run the fire_stand animation
// RETURN TYPE	: void 
// ----------------------------------------------------------------------- //

void Behemoth::MC_Fire_Stand()
{
    if (m_bAnimating == DFALSE || m_nCurMetacmd != MC_FIRE_STAND)
    {
		DBOOL bRet = DFALSE;

		if(m_nState == STATE_AttackClose)
		{
			m_InventoryMgr.ChangeWeapon(WEAP_BEHEMOTH_CLAW);
	        bRet = SetAnimation( m_pAnim_Sound->m_nAnim_FIRE_STAND[4]);
		}
		else
		{
			m_InventoryMgr.ChangeWeapon(WEAP_BEHEMOTH_SHOCKWAVE);

			if(m_fStimuli[HEALTH] <= 0.33f)
		        bRet = SetAnimation( m_pAnim_Sound->m_nAnim_FIRE_STAND[6]);
			else
		        bRet = SetAnimation( m_pAnim_Sound->m_nAnim_FIRE_STAND[5]);
		}

		//SCHLEGZ 4/22/98 3:27:12 PM: if we can't stand up, crawl out from underneath
		if(!bRet)
		{
			SetNewState(STATE_CrawlUnderObj);
			return;
		}

        m_pServerDE->SetModelLooping(m_hObject, DFALSE);
        
		m_bAnimating = DTRUE; 
		m_nCurMetacmd = MC_FIRE_STAND;
    }
    else
	{
		if(m_pServerDE->GetModelPlaybackState(m_hObject) & MS_PLAYDONE)		
		{
			m_InventoryMgr.ChangeWeapon(WEAP_BEHEMOTH_CLAW);
			m_bAnimating = DFALSE;
			Metacmd++;
			return;
		}
    }      
	
    return;
}

// ----------------------------------------------------------------------- //
// ROUTINE		: Behemoth::AI_STATE_AttackClose
// DESCRIPTION	: 
// RETURN TYPE	: void 
// ----------------------------------------------------------------------- //

void Behemoth::AI_STATE_AttackClose()
{
	//SCHLEGZ 4/22/98 4:51:21 PM: sanity check
	if(m_hTarget == DNULL)
	{
		SetNewState(STATE_SearchVisualTarget);
		return;
	}

	m_fStimuli[SIGHT] = VEC_DIST(m_MoveObj.GetPos(),m_vTargetPos);

	switch(Metacmd)
	{
		case 1:		MC_FaceTarget();	break;
		case 2:		if(m_fStimuli[SIGHT] <= 100.0f || m_nCurMetacmd == MC_FIRE_STAND)
						MC_Fire_Stand();
					else
					{
						MC_FaceTarget();
						Metacmd--;

						if(m_fStimuli[SIGHT] >= (m_fSeeingDist * 0.30))
							ComputeState();
						else
						{	
							MC_Run();		
						}
					}
					
					break;
		case 3:		ComputeState();									break;
	}

	return;
}

// ----------------------------------------------------------------------- //
// ROUTINE		: Behemoth::AI_STATE_AttackFar
// DESCRIPTION	: 
// RETURN TYPE	: void 
// ----------------------------------------------------------------------- //

void Behemoth::AI_STATE_AttackFar()
{
	//SCHLEGZ 4/22/98 4:51:21 PM: sanity check
	if(m_hTarget == DNULL)
	{
		SetNewState(STATE_SearchVisualTarget);
		return;
	}

	m_fStimuli[SIGHT] = VEC_DIST(m_MoveObj.GetPos(),m_vTargetPos);

	switch(Metacmd)
	{
		case 1:		MC_FaceTarget();	break;
		case 2:		if(m_fStimuli[SIGHT] <= (m_fSeeingDist * 0.70) || m_nCurMetacmd == MC_FIRE_STAND)
						MC_Fire_Stand();
					else
					{
						MC_FaceTarget();
						Metacmd--;

						if(m_fStimuli[SIGHT] < (m_fSeeingDist * 0.30))
							ComputeState();
						else
						{
							MC_Walk();
						}
					}
					
					break;
		case 3:		MC_FaceTarget();
					Metacmd--;

					if(m_fStimuli[SIGHT] < (m_fSeeingDist * 0.30))
						ComputeState();
					else
					{
						MC_Walk();
					}

					break;
		case 4:		ComputeState();		break;
	}

	return;
}


// ----------------------------------------------------------------------- //
//
//	ROUTINE:	CacheFiles
//
//	PURPOSE:	Cache resources used by the object
//
// ----------------------------------------------------------------------- //

void Behemoth::CacheFiles()
{
	// Sanity checks...

	CServerDE* pServerDE = GetServerDE();
	if (!pServerDE) return;

	if(!(pServerDE->GetServerFlags() & SS_CACHING))
	{
		return;
	}

	if (!m_hObject) return;


	// Get the model filenames...

	char sModel[256] = { "" };
	char sSkin[256]  = { "" };

	pServerDE->GetModelFilenames(m_hObject, sModel, 255, sSkin, 255);


	// Cache models...

	pServerDE->CacheFile(FT_MODEL, sModel);


	// Cache textures...

	pServerDE->CacheFile(FT_TEXTURE, sSkin);


	// Cache sounds...

	SetCacheDirectory("sounds\\enemies\\behemoth");

	CacheSoundFileRange("be-angry", 1, 3);
	CacheSoundFileRange("be-attackvox", 1, 3);
	CacheSoundFileRange("be-death", 1, 3);
	CacheSoundFileRange("befall_", 1, 3);
	CacheSoundFileRange("be-growl", 1, 3);
	CacheSoundFileRange("be-idle", 1, 3);
	CacheSoundFileRange("be-pain", 1, 3);
	CacheSoundFileRange("be-spot", 1, 3);
	CacheSoundFileRange("be-step", 1, 3);
	CacheSoundFileRange("bestomp", 1, 3);
}

