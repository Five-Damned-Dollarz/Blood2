// ----------------------------------------------------------------------- //
//
// MODULE  : SFXMsgIDs.h
//
// PURPOSE : Special FX message ids
//
// CREATED : 10/28/97
//
// ----------------------------------------------------------------------- //

#ifndef __SFX_MSG_IDS_H__
#define __SFX_MSG_IDS_H__


// MID_SPECIAL_FX is the server->client message id used with special fx.
//
// NOTE:  If you use sfx you CAN NOT use the value of MID_SPECIAL_FX as any
// other server->client message id.  

#define	MID_SPECIAL_FX			16


// SpecialFX types...
//
// The first DBYTE in the message associated with the HMESSAGEREAD parameter 
// passed to CSFXMgr::HandleSFXMsg() must be one of the following values:

#define SFX_POLYGRID_ID			1
#define SFX_SMOKETRAIL_ID		2
#define	SFX_PARTICLESYSTEM_ID	3
#define SFX_REMOVE_ID			4
#define SFX_MARK_ID				5
#define SFX_ROCKETFLARE_ID		6
#define SFX_RAIN_ID				7
#define SFX_TRACER_ID			8
#define SFX_LASER_ID			9
#define SFX_WEAPON_ID			10
#define SFX_SHELLIMPACT_ID		11
#define SFX_SPARKS_ID			12
#define SFX_LINESYSTEM_ID		13
#define SFX_CASTLINE_ID			14
#define	SFX_SINGULARITY_ID		15
#define SFX_FIRE_ID				16
#define SFX_GRENADEEXPLOSION_ID	17
#define SFX_SMOKETRAILSEG_ID	18
#define SFX_VOLUMEBRUSH_ID		19
#define SFX_TRIPLASER_ID		20
#define SFX_BLOODTRAIL_ID		21
#define SFX_BLOODTRAILSEG_ID	22
#define SFX_SMOKE_ID			23
#define SFX_SMOKEPUFF_ID		24
#define SFX_SMOKEIMPACT_ID		25
#define SFX_LIQUIDSTREAM_ID		26
#define SFX_FRAGMENTS_ID		27
#define SFX_SPLASH_ID			28
#define SFX_RIPPLE_ID			29
#define SFX_CAMERA_ID			30
#define SFX_EXPLOSION_ID		31
#define SFX_EXPLOSIONSPRITE_ID	32
#define SFX_EXPLOSIONRING_ID	33
#define SFX_EXPLOSIONWAVE_ID	34
#define SFX_EXPLOSIONLIGHT_ID	35
#define SFX_EXPLOSIONFRAG_ID	36
#define SFX_EXPLOSIONFX_ID		37
#define SFX_LIGHT_ID			38
#define SFX_BLOODSPLAT_ID		39
#define SFX_PARTICLEEXPLOSION_ID 40
#define SFX_WEAPONPOWERUP_ID	41
#define SFX_GIB_ID				42
#define SFX_EXPLOSIONFLAME_ID	43
#define SFX_PARTICLESTREAM_ID	44
#define SFX_DEBUGLINE_ID		45
#define SFX_LIGHTNING_ID		46
#define SFX_LIGHTNINGSEG_ID		47
#define SFX_LASERBEAM_ID		48
#define SFX_WARPGATESPRITE_ID	49
#define SFX_WARPGATEPARTICLE_ID	50
#define SFX_OBJECTFX_ID			51
#define SFX_OBJECTPARTICLES_ID	52
#define SFX_SHELLCASING_ID		53
#define SFX_POWERUP_ID			54
#define SFX_FLASHLIGHT_ID		55
#define SFX_WEAPONSOUND_ID		56
#define SFX_WEAPONHANDMODEL_ID	57
#define SFX_ORBCAM_ID			58
#define SFX_DESTRUCTABLEMODEL	59

#ifdef _ADD_ON

#define SFX_FLAYER_CHAIN_ID		60

#endif

// Weapon special effect IDs
// ---- Firing source effects or travel effects
#define WFX_MUZZLESMOKE			0x00000001
#define WFX_MUZZLELIGHT			0x00000002
#define WFX_EJECTSHELL			0x00000004
#define WFX_LEFTHANDED			0x00000008
#define WFX_TRACER				0x00000010
#define WFX_PARTICLETRAIL		0x00000020

// ---- Firing dest effects
#define WFX_MARK				0x00010000
#define WFX_FLASH				0x00020000
#define WFX_SPARKS				0x00040000
#define WFX_SPLASH				0x00080000
#define WFX_SMOKE				0x00100000
#define WFX_SOUND				0x00200000
#define WFX_BLOODSPLAT			0x00400000
#define WFX_BLOODSPURT			0x00800000
#define WFX_EXPLOSION			0x01000000
#define	WFX_FRAGMENTS			0x02000000
#define WFX_IMPACTLIGHT			0x04000000
#define WFX_SCREENSHAKE			0x08000000

// ---- Extra data flags
#define WFX_EXTRA_AMMOTYPE		0x00000001
#define	WFX_EXTRA_SURFACETYPE	0x00000002
#define WFX_EXTRA_EXPTYPE		0x00000004
#define WFX_EXTRA_DAMAGE		0x00000008
#define WFX_EXTRA_DENSITY		0x00000010
#define WFX_EXTRA_COLOR1		0x00000020
#define WFX_EXTRA_COLOR2		0x00000040
#define WFX_EXTRA_LIGHTCOLOR1	0x00000080
#define WFX_EXTRA_LIGHTCOLOR2	0x00000100

// Explosion types
#define EXP_DEFAULT_SMALL		0
#define EXP_DEFAULT_MEDIUM		1
#define EXP_DEFAULT_LARGE		2
#define EXP_GRENADE				3
#define EXP_NAPALM_PRIMARY		4
#define EXP_NAPALM_ALT			5
#define EXP_NAPALM_FIREBALL		6
#define EXP_TESLA_PRIMARY		7
#define EXP_TESLA_ALT			8
#define EXP_HOWITZER_PRIMARY	9
#define EXP_HOWITZER_ALT		10
#define EXP_HOWITZER_MINI		11
#define EXP_FLAME_SMALL			12
#define EXP_FLARE_FIZZLE		13
#define EXP_FLARE_BURST			14
#define EXP_FLARE_FRAG			15
#define EXP_LIFELEECH_PRIMARY	16
#define EXP_LIFELEECH_ALT		17
#define EXP_SINGULARITY_PRIMARY	18
#define EXP_SHOCKBALL			19
#define EXP_SHOCKBALL_LARGE		20
#define EXP_ORB_BREAK			21
#define EXP_DIVINE_SHOCKBALL	22
#define EXP_RIFT_1				23
#define EXP_RIFT_2				24
#define EXP_DEATHRAY_PRIMARY	25
#define EXP_BUGSPRAY_PRIMARY	26
#define EXP_BUGSPRAY_ALT		27
#define EXP_NAGA_EYE_BEAM		28
#define EXP_NAGA_SPIKE			29
#define EXP_NAGA_STONE_CHUNK	30
#define EXP_NAGA_POUND_GROUND	31

#ifdef _ADD_ON

#define EXP_GAS_GRENADE			32
#define EXP_FLAYER_PRIMARY		33
#define EXP_FLAYER_ALT			34
#define EXP_FLAYER_RETRACT		35
#define EXP_FLAYER_SHATTER		36

#endif

// Object FX types
#define OBJFX_NONE				0
#define OBJFX_SMOKETRAIL_1		1
#define OBJFX_SMOKETRAIL_2		2
#define OBJFX_FIRETRAIL_1		3
#define OBJFX_FIRETRAIL_2		4
#define OBJFX_FIRETRAIL_3		5
#define OBJFX_SPARKS_1			6
#define OBJFX_SPARKS_2			7
#define OBJFX_SPARKS_3			8
#define OBJFX_SINGULARITY_1		9
#define OBJFX_SINGULARITY_2		10
#define OBJFX_SINGULARITY_3		11
#define OBJFX_VOODOO_1			12
#define OBJFX_VOODOO_2			13
#define OBJFX_VOODOO_3			14
#define OBJFX_VOODOO_4			15
#define OBJFX_VOODOO_5			16
#define OBJFX_VOODOO_6			17
#define OBJFX_HEAL_1			18
#define OBJFX_SHIELD_1			19
#define OBJFX_SMOKING_1			20
#define OBJFX_SMOKING_2			21
#define OBJFX_SMOKING_3			22
#define OBJFX_FLAMING_1			23
#define OBJFX_FLAMING_2			24
#define OBJFX_FLAMING_3			25
#define OBJFX_GROUNDFLAME_1		26
#define OBJFX_GROUNDFLAME_2		27
#define OBJFX_STAFFTRAIL_1		28
#define OBJFX_STAFFTRAIL_2		29
#define OBJFX_STAFFTRAIL_3		30
#define OBJFX_BUGSPRAY_1		31
#define OBJFX_BUGSPRAY_2		32
#define OBJFX_ORBTRAIL_1		33
#define OBJFX_ORBTRAIL_2		34
#define OBJFX_ENERGYWALL_1		35
#define OBJFX_POWERUP_1			36
#define OBJFX_DEATHRAY_RING_1	37
#define OBJFX_DEATHRAY_RING_2	38
#define OBJFX_ELECTRIC_1		39

#ifdef _ADD_ON

#define OBJFX_GREEN_SMOKE		40
#define OBJFX_BLOOD_TRAIL_1		41

#endif

// Object FX scale defines
#define OBJFX_SCALERADIUS			0x0001
#define OBJFX_SCALEPOSRADIUS		0x0002
#define OBJFX_SCALEOFFSET			0x0004
#define OBJFX_SCALERAMPTIMES		0x0008
#define OBJFX_SCALEDURATION			0x0010
#define OBJFX_SCALENUMPARTICLES		0x0020
#define OBJFX_SCALEDENSITY			0x0040
#define OBJFX_SCALEVELOCITY			0x0080
#define OBJFX_SCALELIFETIME			0x0100
#define OBJFX_SCALEROTATIONS		0x0200
#define OBJFX_SCALEGRAVITY			0x0400
#define OBJFX_SCALEADDDELAY			0x0800

// Laser types
#define LASER_RED_SMALL				0
#define LASER_RED_LARGE				1
#define LASER_GREEN_SMALL			2
#define LASER_GREEN_LARGE			3
#define LASER_BLUE_SMALL			4
#define LASER_BLUE_LARGE			5
#define LASER_WHITE_SMALL			6
#define LASER_WHITE_LARGE			7
#define LASER_YELLOW_SMALL			8
#define LASER_YELLOW_LARGE			9
#define LASER_ORANGE_SMALL			10
#define LASER_ORANGE_LARGE			11
#define LASER_PURPLE_SMALL			12
#define LASER_PURPLE_LARGE			13

// Lightning types
#define LIGHTNING_SHAPE_RANDOM		0
#define LIGHTNING_SHAPE_MIN			1
#define LIGHTNING_SHAPE_FLAT		1
#define LIGHTNING_SHAPE_BOXED		2
#define LIGHTNING_SHAPE_SPIRAL		3
#define LIGHTNING_SHAPE_STAR		4
#define LIGHTNING_SHAPE_MAX			4

#define LIGHTNING_FORM_RANDOM		0
#define LIGHTNING_FORM_MIN			1
#define LIGHTNING_FORM_WIDE2THIN	1
#define LIGHTNING_FORM_THIN2WIDE	2
#define LIGHTNING_FORM_THIN2THIN	3
#define LIGHTNING_FORM_WIDE2WIDE	4
#define LIGHTNING_FORM_MAX			4

#define LIGHTNING_TYPE_LOWSEG		0
#define LIGHTNING_TYPE_MEDSEG		1
#define LIGHTNING_TYPE_HIGHSEG		2

#endif // __SFX_MSG_IDS_H__