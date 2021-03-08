// ----------------------------------------------------------------------- //
//
// MODULE  : FileCaching.h
//
// PURPOSE : List of files to cache.  These are files created by 
//
// CREATED : 6/21/98
//
// ----------------------------------------------------------------------- //

#ifndef __FILECACHING_H__
#define __FILECACHING_H__


#include "SharedDefs.h"


char* g_pCachedModels[] = 
{
	// Beretta
	"Models\\Weapons\\Beretta_pv.abc",
	"Models\\Weapons\\lh_Beretta_pv.abc",
	"Models\\Powerups\\beretta_pu.abc",	// 3rd person model
	// Ingram Mac-10 Sub-machine Gun
	"Models\\Weapons\\Mac10_pv.abc",	// Model
	"Models\\Powerups\\Mac10_pu.abc",	// 3rd person model
	// Flare Pistol
	"Models\\Weapons\\Flarepistol_pv.abc",	// Model
	"Models\\Powerups\\Flarepistol_pu.abc",	// 3rd person model
	// Shotgun
	"Models\\Weapons\\Shotgun_pv.abc",	// Model
	"Models\\Powerups\\Shotgun_pu.abc",	// 3rd person model
	// Barrett .50 BMG Sniper Rifle
	"Models\\Weapons\\SniperRifle_pv.abc",	// Model
	"Models\\Powerups\\SniperRifle_pu.abc",	// 3rd person model
	// Howitzer
	"Models\\Weapons\\Howitzer_pv.abc",	// Model
	"Models\\Powerups\\Howitzer_pu.abc",	// 3rd person model
	// Napalm Cannon
	"Models\\Weapons\\NapalmCannon_pv.abc",	// Model
	"Models\\Powerups\\NapalmCannon_pu.abc",	// 3rd person model
	// Singularity
	"Models\\Weapons\\Singularity_pv.abc",	// Model
	"Models\\Powerups\\Singularity_pu.abc",	// 3rd person model
	// M16 Assault Rifle
	"Models\\Weapons\\M16_pv.abc",	// Model
	"Models\\Powerups\\M16_pu.abc",	// 3rd person model
	// Flamer
	"Models\\Weapons\\Flamerifle_pv.abc",	// Model
	"Models\\Powerups\\Flamerifle_pu.abc",	// 3rd person model
	// Minigun
	"Models\\Weapons\\Minigun_pv.abc",	// Model
	"Models\\Powerups\\Minigun_pu.abc",	// 3rd person model
    // Laserrifle
	"Models\\Weapons\\Laserrifle_pv.abc",	// Model
	"Models\\Powerups\\Laserrifle_pu.abc",	// 3rd person model
	// Tesla Cannon
	"Models\\Weapons\\TeslaRod_pv.abc",		// Model
	"Models\\Powerups\\TeslaRod_pu.abc",	// 3rd person model
	// Voodoo doll
	"Models\\Weapons\\Voodoo_pv.abc",	// Model
	"Models\\Powerups\\Voodoo_pu.abc",	// 3rd person model
	// Decapitator
	"Models\\Weapons\\Decapitator_pv.abc",	// Model
	"Models\\Powerups\\Decapitator_pu.abc",	// 3rd person model
	// Life Leech
	"Models\\Weapons\\Lifeleech_pv.abc",	// Model
	"Models\\Powerups\\Lifeleech_pu.abc",	// 3rd person model
#ifdef _ADD_ON
	// Flayer
	"Models_ao\\Weapons_ao\\Flayer_pv.abc",	// Model
	"Models_ao\\Powerups_ao\\Flayer_pu.abc",	// 3rd person model
#endif
	// Melee Hand Weapon
	"Models\\Weapons\\knifec_pv.abc",	// Model
	"Models\\Powerups\\knifec_pu.abc",	// Model
	// ProximityBomb
	"Models\\default.abc",	// Model
	"Models\\Powerups\\Jackhammer_pu.abc",	// 3rd person model
	// RemoteBomb
	// TimeBomb
	// Explosions
	"Models\\Explosions\\exp_sphere.abc",
	"Models\\Explosions\\exp_spehere_2.abc",
	// Gibs
	"Models\\gibs\\flesh\\gib1.abc",
	"Models\\gibs\\flesh\\gib2.abc",
	"Models\\gibs\\flesh\\gib3.abc",
	
	#ifndef B2_LITE
	"Models\\gibs\\flesh\\gib4.abc",
	"Models\\gibs\\flesh\\gib5.abc",
	"Models\\gibs\\flesh\\gib6.abc",
	"Models\\gibs\\flesh\\gib7.abc",
	"Models\\gibs\\flesh\\gib8.abc",
	#endif 
	
	"Models\\gibs\\wood\\gib1.abc",
	"Models\\gibs\\wood\\gib2.abc",
	"Models\\gibs\\wood\\gib3.abc",
	
	#ifndef B2_LITE
	"Models\\gibs\\wood\\gib4.abc",
	#endif
	
	"Models\\gibs\\glass\\gib1.abc",
	"Models\\gibs\\glass\\gib2.abc",
	"Models\\gibs\\glass\\gib3.abc",
	
	"Models\\gibs\\metal\\gib1.abc",
	"Models\\gibs\\metal\\gib2.abc",
	"Models\\gibs\\metal\\gib3.abc",
	#ifndef B2_LITE
	"Models\\gibs\\metal\\gib4.abc",
	"Models\\gibs\\metal\\gib5.abc",
	#endif
	
	"Models\\gibs\\plastic\\gib1.abc",
	"Models\\gibs\\plastic\\gib2.abc",
	"Models\\gibs\\plastic\\gib3.abc",
	#ifndef B2_LITE
	"Models\\gibs\\plastic\\gib4.abc",
	"Models\\gibs\\plastic\\gib5.abc",
	#endif

	"Models\\gibs\\stone\\gib1.abc",
	"Models\\gibs\\stone\\gib2.abc",
	"Models\\gibs\\stone\\gib3.abc",
	#ifndef B2_LITE
	"Models\\gibs\\stone\\gib4.abc",
	"Models\\gibs\\stone\\gib5.abc",
	"Models\\gibs\\stone\\gib6.abc",
	"Models\\gibs\\stone\\gib7.abc",
	"Models\\gibs\\stone\\gib8.abc",
	#endif

	"Models\\Gibs\\gibmetal2.abc",
	"MODELS\\AMMO\\BSHELL.ABC",
	"MODELS\\EXPLOSIONS\\EXP_SPHERE_2.ABC",
	"MODELS\\GIBS\\METAL\\GIB1.ABC",
	"MODELS\\GIBS\\METAL\\GIB2.ABC",
	"MODELS\\GIBS\\WOOD\\GIB1.ABC",
	"MODELS\\GIBS\\WOOD\\GIB2.ABC",
	"MODELS\\GIBS\\WOOD\\GIB3.ABC",
// BLB
	"MODELS\\POWERUPS\\HEALTH_PU.ABC",
	"MODELS\\AMMO\\ORB.ABC",
	"MODELS\\POWERUPS\\ORB_PU.ABC",
	"MODELS\\WEAPONS\\ORB_PV.ABC",
	"MODELS\\POWERUPS\\BUGSPRAY_PU.ABC",
	"MODELS\\WEAPONS\\BUGSPRAY_PV.ABC",
	"MODELS\\POWERUPS\\BULLETAMMO_PU.ABC",
	"MODELS\\AMMO\\LIGHTINING.ABC",
	"MODELS\\EXPLOSIONS\\BLACKHOLE.ABC",
	"MODELS\\AMMO\\BEAM.ABC",
	"MODELS\\POWERUPS\\SHELLAMMO_PU.ABC",
	"MODELS\\POWERUPS\\WARD_PU.ABC",
	"MODELS\\WEAPONS\\C_KNIFE_PV.ABC",
	"MODELS\\POWERUPS\\FIREAXE_PU.ABC",
	"MODELS\\POWERUPS\\CROWBAR_PU.ABC",
	"MODELS\\POWERUPS\\PIPE_PU.ABC",
	"MODELS\\POWERUPS\\NECROWARD_PU.ABC",
	"MODELS\\POWERUPS\\REMOTES_PU.ABC",
	"MODELS\\POWERUPS\\MEDKIT_PU.ABC",
	"MODELS\\POWERUPS\\NIGHTGOGGLES_PU.ABC",
	"MODELS\\GIBS\\STONE\\GIB9.ABC",
	"MODELS\\POWERUPS\\TESLACANNON_PU.ABC",
	"MODELS\\AMMO\\SSHELL.ABC",
	
	"MODELS\\GIBS\\TERRAIN\\GIB1.ABC",
	"MODELS\\GIBS\\TERRAIN\\GIB2.ABC",
	"MODELS\\GIBS\\TERRAIN\\GIB3.ABC",
	
	#ifndef B2_LITE
	"MODELS\\GIBS\\TERRAIN\\GIB4.ABC",
	"MODELS\\GIBS\\TERRAIN\\GIB5.ABC",
	#endif

	"MODELS\\WEAPONS\\LH_MAC10_PV.ABC",
	"Models\\Powerups\\Health_pu.abc",
};
	
#define NUM_CACHED_MODELS  (sizeof(g_pCachedModels) / sizeof(g_pCachedModels[0]))
	 


char* g_pCachedTextures[] =
{
	"Skins\\Weapons\\Beretta_pv.dtx"
	"Skins\\Powerups\\beretta_pu.dtx",	// 3rd person skin
	// Ingram Mac-10 Sub-machine Gun
	"Skins\\Weapons\\Mac10_pv_t.dtx",	// Skin
	"Skins\\Powerups\\Mac10_pu.dtx",	// 3rd person skin
	// Flare Pistol
	"Skins\\Weapons\\Flarepistol_pv_t.dtx",	// Skin
	"Skins\\Powerups\\Flarepistol_pu.dtx",	// 3rd person skin
	// Shotgun
	"Skins\\Weapons\\Shotgun_pv_t.dtx",	// Skin
	"Skins\\Powerups\\Shotgun_pu.dtx",	// 3rd person skin
	// Barrett .50 BMG Sniper Rifle
	"Skins\\Weapons\\SniperRifle_pv_t.dtx",	// Skin
	"Skins\\Powerups\\SniperRifle_pu.dtx",	// 3rd person skin
	// Howitzer
	"Skins\\Weapons\\Howitzer_pv_t.dtx",	// Skin
	"Skins\\Powerups\\Howitzer_pu.dtx",	// 3rd person skin
	"SKINS\\WEAPONS\\C_HOWITZER_PV_T.DTX",
	// Napalm Cannon
	"Skins\\Weapons\\NapalmCannon_pv_t.dtx",	// Skin
	"Skins\\Powerups\\NapalmCannon_pu.dtx",	// 3rd person skin
	"SKINS\\WEAPONS\\C_NAPALM_PV_T.DTX",
	// Singularity
	"Skins\\Weapons\\Singularity_pv_t.dtx",	// Skin
	"Skins\\Powerups\\Singularity_pu.dtx",	// 3rd person skin
	// M16 Assault Rifle
	"Skins\\Weapons\\M16_pv_t.dtx",	// Skin
	"Skins\\Powerups\\M16_pu.dtx",	// 3rd person skin
	// Flamer
	"Skins\\Weapons\\flamerifle_pv_t.dtx",	// Skin
	"Skins\\Powerups\\Flamerifle_pu.dtx",	// 3rd person skin
	// Minigun
	"Skins\\Weapons\\Minigun_pv_t.dtx",	// Skin
	"Skins\\Powerups\\Minigun_pu.dtx",	// 3rd person skin
	// Laserrifle
	"Skins\\Weapons\\Laserrifle_pv_t.dtx",	// Skin
	"Skins\\Powerups\\Laserrifle_pu.dtx",	// 3rd person skin
	// Tesla Cannon
	"Skins\\Weapons\\TeslaRod_pv_t.dtx",	// Skin
	"Skins\\Powerups\\TeslaRod_pu.dtx",		// 3rd person skin
	// Voodoo doll
	"Skins\\Weapons\\Voodoo_pv_t.dtx",	// Skin
	"Skins\\Powerups\\Voodoo_pu.dtx",	// 3rd person skin
	// Decapitator
	"Skins\\Weapons\\Decapitator_pv_t.dtx",	// Skin
	"Skins\\Powerups\\Decapitator_pu.dtx",	// 3rd person skin
	// Life Leech
	"Skins\\Weapons\\Lifeleech_pv_t.dtx",	// Skin
	"Skins\\Powerups\\Lifeleech_pu.dtx",	// 3rd person skin
#ifdef _ADD_ON
	// Flayer
	"Skins_ao\\Weapons_ao\\Flayer_pv_t.dtx",	// Skin
	"Skins_ao\\Powerups_ao\\Flayer_pu.dtx",	// 3rd person skin
#endif
	// Melee Hand Weapon
	"Skins\\Weapons\\knifec_pv_t.dtx",	// Skin
	"Skins\\Powerups\\knifec_pu.dtx",	// Skin
	// ProximityBomb
	"Skins\\default.dtx",	// Skin
	"Skins\\Powerups\\Jackhammer_pu.dtx",	// 3rd person skin
	// RemoteBomb
	// TimeBomb
	// Explosions
	"Skins\\Explosions\\Explosion_1.dtx",
	
	// {MD 9/23/98}
	"Skins\\Gibs\\Flesh\\Gib2.dtx",
	"SPRITETEXTURES\\BLOOD64_4.DTX",
	"SKINS\\GIBS\\FLESH\\GIB1.DTX",
	"SPRITETEXTURES\\BLOOD64_2.DTX",
	"SPRITETEXTURES\\BLOOD32_7.DTX",
	"SKINS\\GIBS\\FLESH\\GIB3.DTX",
	"SPRITETEXTURES\\BLOOD32_1.DTX",
	"SPRITETEXTURES\\BLOOD32_6.DTX",
	"SPRITETEXTURES\\BLOOD32_10.DTX",
	"SPRITETEXTURES\\BLOOD32_5.DTX",
	"SPRITETEXTURES\\BLOOD32_9.DTX",
	"SPRITETEXTURES\\BLOOD64_1.DTX",
	"SPRITETEXTURES\\BLOOD64_3.DTX",
	"SPRITETEXTURES\\BLOOD32_2.DTX",
	"SPRITETEXTURES\\BLOOD32_3.DTX",
	"SPRITETEXTURES\\PARTICLES\\PARTICLE2.DTX",

	"SPRITETEXTURES\\FIREBALL2_1.DTX",
	"SPRITETEXTURES\\FIREBALL2_2.DTX",
	"SPRITETEXTURES\\FIREBALL2_3.DTX",
	"SPRITETEXTURES\\FIREBALL2_4.DTX",
	"SPRITETEXTURES\\FIREBALL2_5.DTX",
	"SPRITETEXTURES\\FIREBALL2_6.DTX",
	"SPRITETEXTURES\\FIREBALL2_7.DTX",
	"SPRITETEXTURES\\FIREBALL2_8.DTX",
	"SPRITETEXTURES\\FIREBALL2_9.DTX",
	"SPRITETEXTURES\\FIREBALL2_10.DTX",
	"SPRITETEXTURES\\FIREBALL2_11.DTX",
	"SPRITETEXTURES\\FIREBALL2_12.DTX",
	"SPRITETEXTURES\\FIREBALL2_13.DTX",
	"SPRITETEXTURES\\FIREBALL2_14.DTX",
	"SPRITETEXTURES\\FIREBALL2_15.DTX",
	"SPRITETEXTURES\\FIREBALL2_16.DTX",
	"SPRITETEXTURES\\FIREBALL2_17.DTX",
	"SPRITETEXTURES\\FIREBALL2_18.DTX",
	"SPRITETEXTURES\\FIREBALL2_19.DTX",
	"SPRITETEXTURES\\FIREBALL2_20.DTX",
	"SPRITETEXTURES\\FIREBALL2_21.DTX",
	"SPRITETEXTURES\\FIREBALL2_22.DTX",
	"SPRITETEXTURES\\FIREBALL2_23.DTX",
	"SPRITETEXTURES\\FIREBALL2_24.DTX",
	"SPRITETEXTURES\\FIREBALL2_25.DTX",
	"SPRITETEXTURES\\FIREBALL2_26.DTX",
	"SPRITETEXTURES\\FIREBALL2_27.DTX",
	"SPRITETEXTURES\\FIREBALL2_28.DTX",
	"SPRITETEXTURES\\FIREBALL2_29.DTX",
	"SPRITETEXTURES\\FIREBALL2_30.DTX",
	"SPRITETEXTURES\\FIREPART64.DTX",

	"SPRITETEXTURES\\LENSFLARE_1.DTX",
	"SPRITETEXTURES\\LENSFLARE32_9.DTX",
	"SPRITETEXTURES\\LENSFLARE32_8.DTX",
	"SPRITETEXTURES\\LENSFLARE32_7.DTX",
	"SPRITETEXTURES\\LENSFLARE32_6.DTX",
	"SPRITETEXTURES\\LENSFLARE32_5.DTX",
	"SPRITETEXTURES\\LENSFLARE32_4.DTX",
	"SPRITETEXTURES\\LENSFLARE32_3.DTX",
	"SPRITETEXTURES\\LENSFLARE32_2.DTX",
	"SPRITETEXTURES\\LENSFLARE32_1.DTX",
	"SKINS\\WEAPONS\\C_FLARE_PV_T.DTX",
	"SPRITETEXTURES\\SMOKE64_3.DTX",
	"SPRITETEXTURES\\SMOKE64_6.DTX",
	"SPRITETEXTURES\\SMOKE64_1.DTX",
	"SPRITETEXTURES\\SMOKE64_5.DTX",
	"SKINS\\AMMO\\BSHELL.DTX",
	"SKINS\\WEAPONS\\C_MAC10_PV_T.DTX",
	"SPRITETEXTURES\\SMOKE32_1.DTX",
	"SPRITETEXTURES\\TESLAIMP_11.DTX",
	"SPRITETEXTURES\\TESLAIMP_10.DTX",
	"SPRITETEXTURES\\TESLAIMP_9.DTX",
	"SPRITETEXTURES\\TESLAIMP_8.DTX",
	"SPRITETEXTURES\\TESLAIMP_7.DTX",
	"SPRITETEXTURES\\TESLAIMP_6.DTX",
	"SPRITETEXTURES\\TESLAIMP_5.DTX",
	"SPRITETEXTURES\\TESLAIMP_4.DTX",
	"SPRITETEXTURES\\TESLAIMP_3.DTX",
	"SPRITETEXTURES\\TESLAIMP_2.DTX",
	"SPRITETEXTURES\\TESLAIMP_1.DTX",
	"SKINS\\EXPLOSIONS\\EBALLSMALL.DTX",
	"SPRITETEXTURES\\TESLAPRIME_8.DTX",
	"SPRITETEXTURES\\TESLAPRIME_7.DTX",
	"SPRITETEXTURES\\TESLAPRIME_6.DTX",
	"SPRITETEXTURES\\TESLAPRIME_5.DTX",
	"SPRITETEXTURES\\TESLAPRIME_4.DTX",
	"SPRITETEXTURES\\TESLAPRIME_3.DTX",
	"SPRITETEXTURES\\TESLAPRIME_2.DTX",
	"SPRITETEXTURES\\TESLAPRIME_1.DTX",
	"SKINS\\WEAPONS\\C_TESLA_PV_T.DTX",
	"SKINS\\WEAPONS\\C_SINGLE_PV_T.DTX",
	"SPRITETEXTURES\\DEBRISIMP_14.DTX",
	"SPRITETEXTURES\\DEBRISIMP_13.DTX",
	"SPRITETEXTURES\\DEBRISIMP_12.DTX",
	"SPRITETEXTURES\\DEBRISIMP_11.DTX",
	"SPRITETEXTURES\\DEBRISIMP_10.DTX",
	"SPRITETEXTURES\\DEBRISIMP_09.DTX",
	"SPRITETEXTURES\\DEBRISIMP_08.DTX",
	"SPRITETEXTURES\\DEBRISIMP_07.DTX",
	"SPRITETEXTURES\\DEBRISIMP_06.DTX",
	"SPRITETEXTURES\\DEBRISIMP_05.DTX",
	"SPRITETEXTURES\\DEBRISIMP_04.DTX",
	"SPRITETEXTURES\\DEBRISIMP_03.DTX",
	"SPRITETEXTURES\\DEBRISIMP_02.DTX",
	"SPRITETEXTURES\\DEBRISIMP_01.DTX",
	"SKINS\\EXPLOSIONS\\EXPLOSION.DTX",
	"SPRITETEXTURES\\SMOKE64_4.DTX",
	"SPRITETEXTURES\\SMOKE64_2.DTX",
	"SKINS\\GIBS\\GIBMETAL3.DTX",

	"Skins\\gibs\\flesh\\gib1.dtx",
	"Skins\\gibs\\flesh\\gib2.dtx",
	"Skins\\gibs\\flesh\\gib3.dtx",
	
	#ifndef B2_LITE
	"Skins\\gibs\\flesh\\gib4.dtx",
	"Skins\\gibs\\flesh\\gib5.dtx",
	"Skins\\gibs\\flesh\\gib6.dtx",
	"Skins\\gibs\\flesh\\gib7.dtx",
	"Skins\\gibs\\flesh\\gib8.dtx",
	#endif

	"Skins\\gibs\\wood\\gib1.dtx",
	"Skins\\gibs\\wood\\gib2.dtx",
	"Skins\\gibs\\wood\\gib3.dtx",

	#ifndef B2_LITE
	"Skins\\gibs\\wood\\gib4.dtx",
	#endif

	"Skins\\gibs\\glass\\gib1.dtx",
	"Skins\\gibs\\glass\\gib2.dtx",
	"Skins\\gibs\\glass\\gib3.dtx",
	
	"Skins\\gibs\\metal\\gib1.dtx",
	"Skins\\gibs\\metal\\gib2.dtx",
	"Skins\\gibs\\metal\\gib3.dtx",
	#ifndef B2_LITE
	"Skins\\gibs\\metal\\gib4.dtx",
	"Skins\\gibs\\metal\\gib5.dtx",
	#endif

	"Skins\\gibs\\plastic\\gib1.dtx",
	"Skins\\gibs\\plastic\\gib2.dtx",
	"Skins\\gibs\\plastic\\gib3.dtx",
	#ifndef B2_LITE
	"Skins\\gibs\\plastic\\gib4.dtx",
	"Skins\\gibs\\plastic\\gib5.dtx",
	#endif

	"Skins\\gibs\\stone\\gib1.dtx",
	"Skins\\gibs\\stone\\gib2.dtx",
	"Skins\\gibs\\stone\\gib3.dtx",
	#ifndef B2_LITE
	"Skins\\gibs\\stone\\gib4.dtx",
	"Skins\\gibs\\stone\\gib5.dtx",
	"Skins\\gibs\\stone\\gib6.dtx",
	"Skins\\gibs\\stone\\gib7.dtx",
	"Skins\\gibs\\stone\\gib8.dtx",
	#endif
// BLB

	"SPRITETEXTURES\\PARTICLES\\BLOODDROP_1.DTX",
	"SPRITETEXTURES\\PARTICLES\\BLOODDROP_2.DTX",
	"SPRITETEXTURES\\PARTICLES\\BLOODDROP_3.DTX",
	#ifndef B2_LITE
	"SPRITETEXTURES\\PARTICLES\\BLOODDROP_4.DTX",
	#endif

	#ifndef B2_LITE
	"SPRITETEXTURES\\BLA1_30.DTX",
	"SPRITETEXTURES\\BLA1_29.DTX",
	"SPRITETEXTURES\\BLA1_28.DTX",
	"SPRITETEXTURES\\BLA1_27.DTX",
	"SPRITETEXTURES\\BLA1_26.DTX",
	"SPRITETEXTURES\\BLA1_25.DTX",
	"SPRITETEXTURES\\BLA1_24.DTX",
	"SPRITETEXTURES\\BLA1_23.DTX",
	"SPRITETEXTURES\\BLA1_22.DTX",
	"SPRITETEXTURES\\BLA1_21.DTX",
	"SPRITETEXTURES\\BLA1_20.DTX",
	"SPRITETEXTURES\\BLA1_19.DTX",
	"SPRITETEXTURES\\BLA1_18.DTX",
	"SPRITETEXTURES\\BLA1_17.DTX",
	"SPRITETEXTURES\\BLA1_16.DTX",
	"SPRITETEXTURES\\BLA1_15.DTX",
	"SPRITETEXTURES\\BLA1_14.DTX",
	"SPRITETEXTURES\\BLA1_13.DTX",
	"SPRITETEXTURES\\BLA1_12.DTX",
	"SPRITETEXTURES\\BLA1_11.DTX",
	"SPRITETEXTURES\\BLA1_10.DTX",
	"SPRITETEXTURES\\BLA1_09.DTX",
	"SPRITETEXTURES\\BLA1_08.DTX",
	"SPRITETEXTURES\\BLA1_07.DTX",
	"SPRITETEXTURES\\BLA1_06.DTX",
	"SPRITETEXTURES\\BLA1_05.DTX",
	"SPRITETEXTURES\\BLA1_04.DTX",
	"SPRITETEXTURES\\BLA1_03.DTX",
	"SPRITETEXTURES\\BLA1_02.DTX",
	"SPRITETEXTURES\\BLA1_01.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_15.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_14.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_13.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_12.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_11.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_10.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_09.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_08.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_07.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_06.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_05.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_04.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_03.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_02.DTX",
	"SPRITETEXTURES\\EXPLODESMALL_01.DTX",
	"SPRITETEXTURES\\NAPALM_29.DTX",
	"SPRITETEXTURES\\NAPALM_28.DTX",
	"SPRITETEXTURES\\NAPALM_27.DTX",
	"SPRITETEXTURES\\NAPALM_26.DTX",
	"SPRITETEXTURES\\NAPALM_25.DTX",
	"SPRITETEXTURES\\NAPALM_24.DTX",
	"SPRITETEXTURES\\NAPALM_23.DTX",
	"SPRITETEXTURES\\NAPALM_22.DTX",
	"SPRITETEXTURES\\NAPALM_21.DTX",
	"SPRITETEXTURES\\NAPALM_20.DTX",
	"SPRITETEXTURES\\NAPALM_19.DTX",
	"SPRITETEXTURES\\NAPALM_18.DTX",
	"SPRITETEXTURES\\NAPALM_17.DTX",
	"SPRITETEXTURES\\NAPALM_16.DTX",
	"SPRITETEXTURES\\NAPALM_15.DTX",
	"SPRITETEXTURES\\NAPALM_14.DTX",
	"SPRITETEXTURES\\NAPALM_13.DTX",
	"SPRITETEXTURES\\NAPALM_12.DTX",
	"SPRITETEXTURES\\NAPALM_11.DTX",
	"SPRITETEXTURES\\NAPALM_10.DTX",
	"SPRITETEXTURES\\NAPALM_09.DTX",
	"SPRITETEXTURES\\NAPALM_08.DTX",
	"SPRITETEXTURES\\NAPALM_07.DTX",
	"SPRITETEXTURES\\NAPALM_06.DTX",
	"SPRITETEXTURES\\NAPALM_05.DTX",
	"SPRITETEXTURES\\NAPALM_04.DTX",
	"SPRITETEXTURES\\NAPALM_03.DTX",
	"SPRITETEXTURES\\NAPALM_02.DTX",
	"SPRITETEXTURES\\NAPALM_01.DTX",
	"SPRITETEXTURES\\BULLETHOLE5.DTX",
	"SPRITETEXTURES\\SPLINT32_3.DTX",
	"SPRITETEXTURES\\SPLINT32_1.DTX",
	"SPRITETEXTURES\\MINIGUN_16.DTX",
	"SPRITETEXTURES\\MINIGUN_15.DTX",
	"SPRITETEXTURES\\MINIGUN_14.DTX",
	"SPRITETEXTURES\\MINIGUN_13.DTX",
	"SPRITETEXTURES\\MINIGUN_12.DTX",
	"SPRITETEXTURES\\MINIGUN_11.DTX",
	"SPRITETEXTURES\\MINIGUN_10.DTX",
	"SPRITETEXTURES\\MINIGUN_09.DTX",
	"SPRITETEXTURES\\HOWITZER17.DTX",
	"SPRITETEXTURES\\HOWITZER16.DTX",
	"SPRITETEXTURES\\HOWITZER15.DTX",
	"SPRITETEXTURES\\HOWITZER14.DTX",
	"SPRITETEXTURES\\HOWITZER13.DTX",
	"SPRITETEXTURES\\HOWITZER12.DTX",
	"SPRITETEXTURES\\HOWITZER11.DTX",
	"SPRITETEXTURES\\HOWITZER10.DTX",
	"SPRITETEXTURES\\HOWITZER09.DTX",
	"SPRITETEXTURES\\HOWITZER08.DTX",
	"SPRITETEXTURES\\HOWITZER07.DTX",
	"SPRITETEXTURES\\HOWITZER06.DTX",
	"SPRITETEXTURES\\HOWITZER05.DTX",
	"SPRITETEXTURES\\HOWITZER04.DTX",
	"SPRITETEXTURES\\HOWITZER03.DTX",
	"SPRITETEXTURES\\HOWITZER02.DTX",
	"SPRITETEXTURES\\HOWITZER01.DTX",
	"SPRITETEXTURES\\SMOKE32_4.DTX",
	"SPRITETEXTURES\\BLOODSPLAT1.DTX",
	"SPRITETEXTURES\\BLOODSPLAT2.DTX",
	"SPRITETEXTURES\\BULLETGLASS2.DTX",
	"SPRITETEXTURES\\ROCK32_1.DTX",
	"SPRITETEXTURES\\BULLETHOLE3.DTX",
	"SPRITETEXTURES\\ROCK32_3.DTX",
	"SPRITETEXTURES\\ROCK32_2.DTX",
	"SPRITETEXTURES\\BULLETHOLE4.DTX",
	"SPRITETEXTURES\\BLOODSPLAT3.DTX",
	"SPRITETEXTURES\\LASER_8.DTX",
	"SPRITETEXTURES\\LASER_7.DTX",
	"SPRITETEXTURES\\LASER_6.DTX",
	"SPRITETEXTURES\\LASER_5.DTX",
	"SPRITETEXTURES\\LASER_4.DTX",
	"SPRITETEXTURES\\LASER_3.DTX",
	"SPRITETEXTURES\\LASER_2.DTX",
	"SPRITETEXTURES\\LASER_1.DTX",
	"SPRITETEXTURES\\TESLAMUZ_2.DTX",
	"SPRITETEXTURES\\TESLAMUZ_1.DTX",
	"SPRITETEXTURES\\BULLETHOLE1.DTX",
	"SPRITETEXTURES\\FLAMES1_09.DTX",
	"SPRITETEXTURES\\SPLINT32_2.DTX",
	"SPRITETEXTURES\\SMOKE32_2.DTX",
	"SPRITETEXTURES\\PARTICLES\\PARTICLEBUBBLE.DTX",
	"SPRITETEXTURES\\GIB_FLAME003.DTX",
	"SPRITETEXTURES\\PARTICLES\\PARTICLESMOKE.DTX",
	"SPRITETEXTURES\\BLOOD3.DTX",
	"SPRITETEXTURES\\BLOOD2.DTX",
	"SPRITETEXTURES\\BLOOD1.DTX",
	"SPRITETEXTURES\\TESLAALTM_35.DTX",
	"SPRITETEXTURES\\TESLAALTM_34.DTX",
	"SPRITETEXTURES\\TESLAALTM_33.DTX",
	"SPRITETEXTURES\\TESLAALTM_32.DTX",
	"SPRITETEXTURES\\TESLAALTM_31.DTX",
	"SPRITETEXTURES\\TESLAALTM_30.DTX",
	"SPRITETEXTURES\\TESLAALTM_29.DTX",
	"SPRITETEXTURES\\TESLAALTM_28.DTX",
	"SPRITETEXTURES\\TESLAALTM_27.DTX",
	"SPRITETEXTURES\\TESLAALTM_26.DTX",
	"SPRITETEXTURES\\TESLAALTM_25.DTX",
	"SPRITETEXTURES\\TESLAALTM_24.DTX",
	"SPRITETEXTURES\\TESLAALTM_23.DTX",
	"SPRITETEXTURES\\TESLAALTM_22.DTX",
	"SPRITETEXTURES\\TESLAALTM_21.DTX",
	"SPRITETEXTURES\\TESLAALTM_20.DTX",
	"SPRITETEXTURES\\TESLAALTM_19.DTX",
	"SPRITETEXTURES\\TESLAALTM_18.DTX",
	"SPRITETEXTURES\\TESLAALTM_17.DTX",
	"SPRITETEXTURES\\TESLAALTM_16.DTX",
	"SPRITETEXTURES\\TESLAALTM_15.DTX",
	"SPRITETEXTURES\\TESLAALTM_14.DTX",
	"SPRITETEXTURES\\TESLAALTM_13.DTX",
	"SPRITETEXTURES\\TESLAALTM_12.DTX",
	"SPRITETEXTURES\\TESLAALTM_11.DTX",
	"SPRITETEXTURES\\TESLAALTM_10.DTX",
	"SPRITETEXTURES\\TESLAALTM_09.DTX",
	"SPRITETEXTURES\\TESLAALTM_08.DTX",
	"SPRITETEXTURES\\TESLAALTM_07.DTX",
	"SPRITETEXTURES\\TESLAALTM_06.DTX",
	"SPRITETEXTURES\\TESLAALTM_05.DTX",
	"SPRITETEXTURES\\TESLAALTM_04.DTX",
	"SPRITETEXTURES\\TESLAALTM_03.DTX",
	"SPRITETEXTURES\\TESLAALTM_02.DTX",
	"SPRITETEXTURES\\TESLAALTM_01.DTX",
	"SPRITETEXTURES\\SHOCKRING005.DTX",
	"SPRITETEXTURES\\SHOCKRING004.DTX",
	"SPRITETEXTURES\\SHOCKRING003.DTX",
	"SPRITETEXTURES\\SHOCKRING002.DTX",
	"SPRITETEXTURES\\SHOCKRING001.DTX",
	"SPRITETEXTURES\\EXPLODE128_20.DTX",
	"SPRITETEXTURES\\EXPLODE128_19.DTX",
	"SPRITETEXTURES\\EXPLODE128_18.DTX",
	"SPRITETEXTURES\\EXPLODE128_17.DTX",
	"SPRITETEXTURES\\EXPLODE128_16.DTX",
	"SPRITETEXTURES\\EXPLODE128_15.DTX",
	"SPRITETEXTURES\\EXPLODE128_14.DTX",
	"SPRITETEXTURES\\EXPLODE128_13.DTX",
	"SPRITETEXTURES\\EXPLODE128_12.DTX",
	"SPRITETEXTURES\\EXPLODE128_11.DTX",
	"SPRITETEXTURES\\EXPLODE128_10.DTX",
	"SPRITETEXTURES\\EXPLODE128_9.DTX",
	"SPRITETEXTURES\\EXPLODE128_8.DTX",
	"SPRITETEXTURES\\EXPLODE128_7.DTX",
	"SPRITETEXTURES\\EXPLODE128_6.DTX",
	"SPRITETEXTURES\\EXPLODE128_5.DTX",
	"SPRITETEXTURES\\EXPLODE128_4.DTX",
	"SPRITETEXTURES\\EXPLODE128_3.DTX",
	"SPRITETEXTURES\\EXPLODE128_2.DTX",
	"SPRITETEXTURES\\EXPLODE128_1.DTX",
	"SPRITETEXTURES\\WHITELIGHT1.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_13.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_12.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_11.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_10.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_9.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_8.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_7.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_6.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_5.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_4.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_3.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_2.DTX",
	"SPRITETEXTURES\\NAPALMPRIME_1.DTX",
	"SPRITETEXTURES\\TESLAMUZZLE_6.DTX",
	"SPRITETEXTURES\\TESLAMUZZLE_5.DTX",
	"SPRITETEXTURES\\TESLAMUZZLE_4.DTX",
	"SPRITETEXTURES\\TESLAMUZZLE_3.DTX",
	"SPRITETEXTURES\\TESLAMUZZLE_2.DTX",
	"SPRITETEXTURES\\TESLAMUZZLE_1.DTX",
	"SPRITETEXTURES\\M16ALT_3.DTX",
	"SPRITETEXTURES\\M16ALT_2.DTX",
	"SPRITETEXTURES\\M16ALT_1.DTX",
	"SPRITETEXTURES\\M16_7.DTX",
	"SPRITETEXTURES\\M16_5.DTX",
	"SPRITETEXTURES\\M16_3.DTX",
	"SPRITETEXTURES\\M16_1.DTX",
	"SPRITETEXTURES\\SNIPER.DTX",
	"SPRITETEXTURES\\SHOTGUN2_3.DTX",
	"SPRITETEXTURES\\SHOTGUN2_2.DTX",
	"SPRITETEXTURES\\SHOTGUN2_1.DTX",
	"SPRITETEXTURES\\SHOTGUN1_3.DTX",
	"SPRITETEXTURES\\SHOTGUN1_2.DTX",
	"SPRITETEXTURES\\SHOTGUN1_1.DTX",
	"SPRITETEXTURES\\FLRGUN128_6.DTX",
	"SPRITETEXTURES\\FLRGUN128_5.DTX",
	"SPRITETEXTURES\\FLRGUN128_4.DTX",
	"SPRITETEXTURES\\FLRGUN128_3.DTX",
	"SPRITETEXTURES\\FLRGUN128_2.DTX",
	"SPRITETEXTURES\\FLRGUN128_1.DTX",
	"SPRITETEXTURES\\MINIGUN_08.DTX",
	"SPRITETEXTURES\\MINIGUN_07.DTX",
	"SPRITETEXTURES\\MINIGUN_06.DTX",
	"SPRITETEXTURES\\MINIGUN_05.DTX",
	"SPRITETEXTURES\\MINIGUN_04.DTX",
	"SPRITETEXTURES\\MINIGUN_03.DTX",
	"SPRITETEXTURES\\MINIGUN_02.DTX",
	"SPRITETEXTURES\\MINIGUN_01.DTX",
	"SPRITETEXTURES\\PISTOL_6.DTX",
	"SPRITETEXTURES\\PISTOL_5.DTX",
	"SPRITETEXTURES\\PISTOL_4.DTX",
	"SPRITETEXTURES\\PISTOL_3.DTX",
	"SPRITETEXTURES\\PISTOL_2.DTX",
	"SPRITETEXTURES\\PISTOL_1.DTX",
	"SPRITETEXTURES\\PROPELLER6.DTX",
	"SPRITETEXTURES\\PROPELLER5.DTX",
	"SPRITETEXTURES\\PROPELLER4.DTX",
	"SPRITETEXTURES\\PROPELLER3.DTX",
	"SPRITETEXTURES\\PROPELLER2.DTX",
	"SPRITETEXTURES\\PROPELLER1.DTX",
	"SPRITETEXTURES\\SMOKE32_6.DTX",
	"SPRITETEXTURES\\SMOKE32_5.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_15.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_14.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_13.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_12.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_11.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_10.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_09.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_08.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_07.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_06.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_05.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_04.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_03.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_02.DTX",
	"SPRITETEXTURES\\LLEECHPROJ_01.DTX",
	"SPRITETEXTURES\\WATERBLUE.DTX",
	#endif

	"SKINS\\WEAPONS\\C_MINIGUN_PV_T.DTX",
	"SKINS\\POWERUPS\\HEALTH_PU.DTX",
	"SKINS\\WEAPONS\\C_LIFELEECH_PV_T.DTX",
	"SKINS\\WEAPONS\\C_M16_PV_T.DTX",
	"SKINS\\WEAPONS\\C_SHOT_PV_T.DTX",
	"SKINS\\POWERUPS\\ORB_PU.DTX",
	"SKINS\\WEAPONS\\C_ORB_PV_T.DTX",
	"SKINS\\POWERUPS\\BUGSPRAY_PU.DTX",
	"SKINS\\WEAPONS\\C_BUGSPRAY_PV_T.DTX",
	"SKINS\\POWERUPS\\BULLETAMMO_PU.DTX",
	"SKINS\\POWERUPS\\SHELLAMMO_PU.DTX",
	"SKINS\\AMMO\\PULSEBEAM.DTX",
	"SKINS\\EXPLOSIONS\\BLACKHOLE.DTX",
	"SKINS\\AMMO\\BEAMBLUE.DTX",
	"SKINS\\POWERUPS\\WARD_PU.DTX",
	"SKINS\\POWERUPS\\FIREAXE_PU.DTX",
	"SKINS\\POWERUPS\\CROWBAR_PU.DTX",
	"SKINS\\WEAPONS\\C_KNIFE_PV_T.DTX",
	"SKINS\\POWERUPS\\PIPE_PU.DTX",
	"SKINS\\WEAPONS\\C_BERETTA_PV_T.DTX",
	"SKINS\\PATH1.DTX",
	"SKINS\\POWERUPS\\NIGHTGOGGLES_PU.DTX",
	"SKINS\\POWERUPS\\MEDKIT_PU.DTX",
	"SKINS\\POWERUPS\\REMOTES_PU.DTX",
	"SKINS\\POWERUPS\\NECROWARD_PU.DTX",

	"SKINS\\GIBS\\STONE\\GIB9.DTX",
	"SKINS\\WEAPONS\\C_VOODOO_PV_T.DTX",
	"SKINS\\POWERUPS\\TESLACANNON_PU.DTX",
	"SKINS\\AMMO\\SSHELL.DTX",
	"SKINS\\GIBS\\TERRAIN\\GIB2.DTX",
	"SKINS\\GIBS\\TERRAIN\\GIB4.DTX",
	"SKINS\\GIBS\\TERRAIN\\GIB5.DTX",
	"SKINS\\GIBS\\TERRAIN\\GIB3.DTX",
	"SKINS\\GIBS\\TERRAIN\\GIB1.DTX",

	"SPRITETEXTURES\\IMPACT64_1.DTX",
	"SPRITETEXTURES\\IMPACT64_2.DTX",
	"SPRITETEXTURES\\IMPACT64_3.DTX",
	"SPRITETEXTURES\\SMOKE32_1.DTX",
	"SPRITETEXTURES\\SMOKE32_2.DTX",
	"SPRITETEXTURES\\SMOKE32_3.DTX",
	"SPRITETEXTURES\\SMOKE32_4.DTX",
	"SPRITETEXTURES\\SMOKE32_5.DTX",
	"SPRITETEXTURES\\SMOKE32_6.DTX",
};

#define NUM_CACHED_TEXTURES  (sizeof(g_pCachedTextures) / sizeof(g_pCachedTextures[0]))



char* g_pCachedSprite[] =
{
	"SPRITES\\GLSHOLE2.SPR",
	"Sprites\\pistolflare.spr",	// flash sprite name
	"Sprites\\mac10flare.spr",	// flash sprite name
	"Sprites\\FlaregunFlare.spr",	// alt flash Sprite name
	"Sprites\\shotgun1.spr",	// flash sprite name
	"Sprites\\shotgun2.spr",	// alt flash Sprite name
	"Sprites\\sniperflare.spr",	// alt flash Sprite name
	"Sprites\\m16flare.spr",	// flash sprite name
	"Sprites\\m16altflare.spr",	// alt flash Sprite name
	"Sprites\\teslamuzzle.spr",	// flash sprite name
	// Explosions
	"Sprites\\napalmprime.spr",
	"Sprites\\flare1.spr",
	"Sprites\\Explode128.spr",
	"Sprites\\Shockring.spr",
	"Sprites\\teslaAltM.spr",
    "Sprites\\fireball2.spr",
	// SFX
	"sprites\\blood1.spr",
	"sprites\\blood2.spr",
	"sprites\\blood3.spr",

	"SPRITES\\LENSFLARE32.SPR",

	"SPRITES\\SMOKEPUFF1.SPR",
	"SPRITES\\SMOKEPUFF2.SPR",
	"SPRITES\\SMOKEPUFF3.SPR",
	#ifndef B2_LITE
	"SPRITES\\SMOKEPUFF4.SPR",
	"SPRITES\\SMOKEPUFF6.SPR",
	"SPRITES\\SMOKEPUFF5.SPR",
	#endif

	"SPRITES\\TESLAIMP.SPR",
	"SPRITES\\DEBRISIMP.SPR",
// blb
	"SPRITES\\BLOODSPLAT1.SPR",
	"SPRITES\\BLOODSPLAT2.SPR",
	"SPRITES\\BLOODSPLAT3.SPR",

	"SPRITES\\TESLAPRIME.SPR",
	"SPRITES\\GLSHOLE1.SPR",
	"SPRITES\\STONECHIP1.SPR",
	"SPRITES\\BLTHOLE3.SPR",
	"SPRITES\\STONECHIP3.SPR",
	"SPRITES\\STONECHIP2.SPR",
	"SPRITES\\BLTHOLE4.SPR",
	"SPRITES\\LASER.SPR",
	"SPRITES\\TESLAFLASH.SPR",
	"SPRITES\\BLTHOLE.SPR",
	"SPRITES\\BLA1.SPR",
	"SPRITES\\EXPLODESMALL.SPR",
	"SPRITES\\NAPALM.SPR",
	"SPRITES\\BLTHOLE5.SPR",

	"SPRITES\\WOODSPLINT1.SPR",
	"SPRITES\\WOODSPLINT2.SPR",
	"SPRITES\\WOODSPLINT3.SPR",

	"SPRITES\\MINIGUN.SPR",
	"SPRITES\\HOWITZERBALL.SPR",
	"SPRITES\\HOWITZEREXP.SPR",
	"SPRITES\\PROPELLER.SPR",
	"SPRITES\\WATERBROWN.SPR",

	"SPRITES\\LLEECHPROJ.SPR",
	"SPRITES\\WATERBLUE.SPR",

	"SPRITES\\IMPACT01.SPR",
	"SPRITES\\IMPACT02.SPR",
	"SPRITES\\IMPACT03.SPR",
};

#define NUM_CACHED_SPRITES (sizeof(g_pCachedSprite) / sizeof(g_pCachedSprite[0]))



char* g_pCachedSoundLocal[] =
{
	"dummy",
	"SOUNDS\\PLAYER\\FOOTSTEPS\\STONE\\LEFTM.WAV",
	"SOUNDS\\PLAYER\\FOOTSTEPS\\STONE\\RIGHTM.WAV",
	"SOUNDS\\PLAYER\\FOOTSTEPS\\STONE\\LANDM.WAV",

	"SOUNDS\\PLAYER\\FOOTSTEPS\\METAL\\LEFTM.WAV",
	"SOUNDS\\PLAYER\\FOOTSTEPS\\METAL\\RIGHTM.WAV",
	"SOUNDS\\PLAYER\\FOOTSTEPS\\METAL\\LANDM.WAV",

	"SOUNDS\\PLAYER\\FOOTSTEPS\\WOOD\\LEFTM.WAV",
	"SOUNDS\\PLAYER\\FOOTSTEPS\\WOOD\\RIGHTM.WAV",
	"SOUNDS\\PLAYER\\FOOTSTEPS\\WOOD\\LANDM.WAV",

	"SOUNDS\\PLAYER\\FOOTSTEPS\\TERRAIN\\LEFTM.WAV",
	"SOUNDS\\PLAYER\\FOOTSTEPS\\TERRAIN\\RIGHTM.WAV",
	"SOUNDS\\PLAYER\\FOOTSTEPS\\TERRAIN\\LANDM.WAV",

	"SOUNDS\\EVENTS\\BELLDING1.WAV",
};

#define NUM_CACHED_SOUNDS_LOCAL (sizeof(g_pCachedSoundLocal) / sizeof(g_pCachedSoundLocal[0]))



char* g_pCachedSoundAmbient[] =
{
	"dummy"
};

#define NUM_CACHED_SOUNDS_AMBIENT (sizeof(g_pCachedSoundAmbient) / sizeof(g_pCachedSoundAmbient[0]))


char* g_pCachedSound3D[] =
{
	// Beretta
	"Sounds\\weapons\\beretta\\fire.wav",	// Fire sound for alt fire
	// Ingram Mac-10 Sub-machine Gun
	"Sounds\\weapons\\mac10\\fire.wav",	// Fire sound
	"Sounds\\weapons\\mac10\\alt.wav",	// Alt Fire sound
	// Flare Pistol
	"Sounds\\Weapons\\flare\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\flare\\alt.wav",	// Alt Fire sound
	// Shotgun
	"Sounds\\Weapons\\shotgun\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\shotgun\\alt.wav",	// Alt Fire sound
	// Barrett .50 BMG Sniper Rifle
	"Sounds\\Weapons\\sniper\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\sniper\\zoom.wav",		// Alt Fire sound
	// Howitzer
	"Sounds\\Weapons\\howitzer\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\howitzer\\alt.wav",	// Alt Fire sound
	// Napalm Cannon
	"Sounds\\Weapons\\napalm\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\napalm\\alt.wav",	// Alt Fire sound
	// Singularity
	"Sounds\\Weapons\\singularity\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\singularity\\alt.wav",	// Alt Fire sound
	// M16 Assault Rifle
	"Sounds\\Weapons\\assault\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\assault\\alt.wav",	// Alt Fire sound
	// Flamer
	"Sounds\\Weapons\\flame\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\flame\\alt.wav",	// Alt Fire sound
	// Minigun
	"Sounds\\Weapons\\vulcan\\fireloop.wav",	// Fire sound
	"Sounds\\Weapons\\vulcan\\alt.wav",	// Fire sound
    // Laserrifle
	"Sounds\\Weapons\\laser\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\laser\\fire.wav",	// Alt Fire sound
	// Tesla Cannon
	"Sounds\\Weapons\\Tesla\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\Tesla\\alt.wav",	// Alt Fire sound
	// Voodoo doll
	"Sounds\\Weapons\\voodoo\\fire.wav",// Fire sound
	"Sounds\\Weapons\\voodoo\\alt.wav",	// Alt Fire sound
	// Decapitator
	"Sounds\\Weapons\\decapitator\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\decapitator\\alt.wav",	// Alt Fire sound
	// Life Leech
	"Sounds\\Weapons\\lifeleech\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\lifeleech\\alt.wav",	// Alt Fire sound
#ifdef _ADD_ON
	// Flayer
	"Sounds_ao\\Weapons_ao\\flayer\\fire.wav",	// Fire sound
	"Sounds_ao\\Weapons_ao\\flayer\\alt.wav",	// Alt Fire sound
#endif
	// Melee Hand Weapon
	"Sounds\\Weapons\\Knife\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\Knife\\alt.wav",	// Alt Fire sound
	// Shikari Hand Claw
	// ProximityBomb
	"Sounds\\Weapons\\proximities\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\proximities\\fire.wav",	// Alt Fire sound
	"Sounds\\Weapons\\assault\\altbounce.wav",
	"Sounds\\Weapons\\proximities\\stick.wav",
	// RemoteBomb
	"Sounds\\Weapons\\remotes\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\remotes\\fire.wav",	// Alt Fire sound
	"Sounds\\Weapons\\remotes\\stick.wav",
	// TimeBomb
	"Sounds\\Weapons\\time\\fire.wav",	// Fire sound
	"Sounds\\Weapons\\time\\fire.wav",	// Alt Fire sound
	// Explosions
	"Sounds\\Weapons\\c4\\explosion_1.wav",
	"Sounds\\Weapons\\Tesla\\impact.wav",
	// SFX
	"sounds\\gibs\\stonefall1.wav",
	"sounds\\gibs\\metcrash4.wav",
	"sounds\\gibs\\2x4s3.wav",
	"sounds\\gibs\\glass1.wav",
	"sounds\\gibs\\splat1.wav",
	"Sounds\\Weapons\\Shelldrop.wav",

	"SOUNDS\\WEAPONS\\SHELLDROPS\\STONE\\SHELL1.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\STONE\\SHELL2.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\STONE\\SHELL3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\SHELLDROPS\\STONE\\SHELL4.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\STONE\\SHELL5.WAV",
	#endif

	"SOUNDS\\WEAPONS\\SHELLDROPS\\METAL\\SHELL1.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\METAL\\SHELL2.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\METAL\\SHELL3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\SHELLDROPS\\METAL\\SHELL4.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\METAL\\SHELL5.WAV",
	#endif

	"SOUNDS\\WEAPONS\\SHELLDROPS\\WOOD\\SHELL1.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\WOOD\\SHELL2.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\WOOD\\SHELL3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\SHELLDROPS\\WOOD\\SHELL4.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\WOOD\\SHELL5.WAV",
	#endif

	"SOUNDS\\WEAPONS\\SHELLDROPS\\TERRAIN\\SHELL1.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\TERRAIN\\SHELL2.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\TERRAIN\\SHELL3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\SHELLDROPS\\TERRAIN\\SHELL4.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\TERRAIN\\SHELL5.WAV",
	#endif

	"SOUNDS\\WEAPONS\\SHELLDROPS\\GLASS\\SHELL1.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\GLASS\\SHELL2.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\GLASS\\SHELL3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\SHELLDROPS\\GLASS\\SHELL4.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\GLASS\\SHELL5.WAV",
	#endif

	"SOUNDS\\WEAPONS\\SHELLDROPS\\PLASTIC\\SHELL1.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\PLASTIC\\SHELL2.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\PLASTIC\\SHELL3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\SHELLDROPS\\PLASTIC\\SHELL4.WAV",
	"SOUNDS\\WEAPONS\\SHELLDROPS\\PLASTIC\\SHELL5.WAV",
	#endif


	"SOUNDS\\GIBS\\SM_METAL\\GIB_IMPACT1.WAV",
	"SOUNDS\\GIBS\\SM_METAL\\GIB_IMPACT2.WAV",
	"SOUNDS\\GIBS\\SM_METAL\\GIB_IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\GIBS\\SM_METAL\\GIB_IMPACT4.WAV",
	"SOUNDS\\GIBS\\SM_METAL\\GIB_IMPACT5.WAV",
	"SOUNDS\\GIBS\\SM_METAL\\GIB_IMPACT6.WAV",
	#endif
	
	"SOUNDS\\GIBS\\SM_WOOD\\GIB_IMPACT1.WAV",
	"SOUNDS\\GIBS\\SM_WOOD\\GIB_IMPACT2.WAV",
	"SOUNDS\\GIBS\\SM_WOOD\\GIB_IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\GIBS\\SM_WOOD\\GIB_IMPACT4.WAV",
	#endif

	"SOUNDS\\GIBS\\METAL\\GIB_IMPACT1.WAV",
	"SOUNDS\\GIBS\\METAL\\GIB_IMPACT2.WAV",
	"SOUNDS\\GIBS\\METAL\\GIB_IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\GIBS\\METAL\\GIB_IMPACT4.WAV",
	"SOUNDS\\GIBS\\METAL\\GIB_IMPACT5.WAV",
	#endif

	"SOUNDS\\POWERUPS\\WEAPON1.WAV",
	
	"SOUNDS\\GIBS\\GLASS\\GIB_IMPACT1.WAV",
	"SOUNDS\\GIBS\\GLASS\\GIB_IMPACT2.WAV",
	"SOUNDS\\GIBS\\GLASS\\GIB_IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\GIBS\\GLASS\\GIB_IMPACT4.WAV",
	"SOUNDS\\GIBS\\GLASS\\GIB_IMPACT5.WAV",
	#endif
	
	"SOUNDS\\GIBS\\FLESH\\GIB_IMPACT1.WAV",
	"SOUNDS\\GIBS\\FLESH\\GIB_IMPACT2.WAV",
	"SOUNDS\\GIBS\\FLESH\\GIB_IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\GIBS\\FLESH\\GIB_IMPACT4.WAV",
	"SOUNDS\\GIBS\\FLESH\\GIB_IMPACT5.WAV",
	#endif

	"SOUNDS\\GIBS\\WOOD\\GIB_IMPACT1.WAV",
	"SOUNDS\\GIBS\\WOOD\\GIB_IMPACT2.WAV",
	"SOUNDS\\GIBS\\WOOD\\GIB_IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\GIBS\\WOOD\\GIB_IMPACT4.WAV",
	"SOUNDS\\GIBS\\WOOD\\GIB_IMPACT5.WAV",
	#endif

	"SOUNDS\\GIBS\\STONE\\GIB_IMPACT1.WAV",
	"SOUNDS\\GIBS\\STONE\\GIB_IMPACT2.WAV",
	"SOUNDS\\GIBS\\STONE\\GIB_IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\GIBS\\STONE\\GIB_IMPACT4.WAV",
	"SOUNDS\\GIBS\\STONE\\GIB_IMPACT5.WAV",
	#endif

	"SOUNDS\\GIBS\\TERRAIN\\GIB_IMPACT1.WAV",
	"SOUNDS\\GIBS\\TERRAIN\\GIB_IMPACT2.WAV",
	"SOUNDS\\GIBS\\TERRAIN\\GIB_IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\GIBS\\TERRAIN\\GIB_IMPACT4.WAV",
	"SOUNDS\\GIBS\\TERRAIN\\GIB_IMPACT5.WAV",
	#endif
	


	"SOUNDS\\WEAPONS\\IMPACTS\\PLASTIC\\IMPACT1.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\PLASTIC\\IMPACT2.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\PLASTIC\\IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\IMPACTS\\PLASTIC\\IMPACT4.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\PLASTIC\\IMPACT5.WAV",
	#endif

	"SOUNDS\\WEAPONS\\IMPACTS\\TERRAIN\\IMPACT1.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\TERRAIN\\IMPACT2.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\TERRAIN\\IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\IMPACTS\\TERRAIN\\IMPACT4.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\TERRAIN\\IMPACT5.WAV",
	#endif
	
	"SOUNDS\\WEAPONS\\IMPACTS\\GLASS\\IMPACT1.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\GLASS\\IMPACT2.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\GLASS\\IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\IMPACTS\\GLASS\\IMPACT4.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\GLASS\\IMPACT5.WAV",
	#endif
	
	"SOUNDS\\WEAPONS\\IMPACTS\\CLOTH\\IMPACT1.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\CLOTH\\IMPACT2.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\CLOTH\\IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\IMPACTS\\CLOTH\\IMPACT4.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\CLOTH\\IMPACT5.WAV",
	#endif
	
	"SOUNDS\\WEAPONS\\IMPACTS\\METAL\\IMPACT1.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\METAL\\IMPACT2.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\METAL\\IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\IMPACTS\\METAL\\IMPACT4.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\METAL\\IMPACT5.WAV",
	#endif

	"SOUNDS\\WEAPONS\\IMPACTS\\FLESH\\IMPACT1.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\FLESH\\IMPACT2.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\FLESH\\IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\IMPACTS\\FLESH\\IMPACT4.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\FLESH\\IMPACT5.WAV",
	#endif

	"SOUNDS\\WEAPONS\\IMPACTS\\STONE\\IMPACT1.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\STONE\\IMPACT2.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\STONE\\IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\IMPACTS\\STONE\\IMPACT4.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\STONE\\IMPACT5.WAV",
	#endif

	"SOUNDS\\WEAPONS\\IMPACTS\\WOOD\\IMPACT1.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\WOOD\\IMPACT2.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\WOOD\\IMPACT3.WAV",
	#ifndef B2_LITE
	"SOUNDS\\WEAPONS\\IMPACTS\\WOOD\\IMPACT4.WAV",
	"SOUNDS\\WEAPONS\\IMPACTS\\WOOD\\IMPACT5.WAV",
	#endif

	"SOUNDS\\POWERUPS\\HEALTH1A.WAV",
	"SOUNDS\\WEAPONS\\BUGBUSTER\\\\ALT.WAV",
	"SOUNDS\\WEAPONS\\BUGBUSTER\\\\FIRE.WAV",
	"SOUNDS\\POWERUPS\\NIGHTGOGGLESLOOP1.WAV",
	"SOUNDS\\POWERUPS\\AMMO1.WAV",
	"SOUNDS\\EVENTS\\PUSHWOOD.WAV",
	"SOUNDS\\WEAPONS\\SINGULARITY\\\\STOPFIRE.WAV",
	"SOUNDS\\WEAPONS\\SINGULARITY\\IMPACT.WAV",
	"SOUNDS\\WEAPONS\\SINGULARITY\\\\STARTFIRE.WAV",
	"SOUNDS\\WEAPONS\\FLARE\\\\ALTSTART.WAV",
	"SOUNDS\\WEAPONS\\FLARE\\IMPACT.WAV",
	"SOUNDS\\WEAPONS\\NAPALM\\ALTIMPACT.WAV",
	"SOUNDS\\WEAPONS\\NAPALM\\\\FIRESPIN2.WAV",
	"SOUNDS\\WEAPONS\\NAPALM\\IMPACT.WAV",
	"SOUNDS\\WEAPONS\\NAPALM\\\\FIRESPIN1.WAV",
	"SOUNDS\\WEAPONS\\VULCAN\\\\FIRESTOP.WAV",
	"SOUNDS\\WEAPONS\\VULCAN\\\\FIRELOOP.WAV",
	"SOUNDS\\WEAPONS\\VULCAN\\\\FIRESTART.WAV",
	"SOUNDS\\WEAPONS\\HOWITZER\\\\ALTSTART.WAV",
	"SOUNDS\\WEAPONS\\HOWITZER\\\\HISS.WAV",
	"SOUNDS\\WEAPONS\\HOWITZER\\\\HIT.WAV",
	"SOUNDS\\AMBIENT\\LRGFANMED.WAV",
	"SOUNDS\\AMBIENT\\AMB16.WAV",
	"SOUNDS\\AMBIENT\\STEAM1.WAV",
	"SOUNDS\\POWERUPS\\POWERUP3.WAV",
	"SOUNDS\\POWERUPS\\AMMO2.WAV",
	"SOUNDS\\POWERUPS\\INVENTORY1.WAV",
	"SOUNDS\\DOORS\\HYDRAULICDOOR1C1.WAV",
	"SOUNDS\\DOORS\\HYDRAULICDOOR1S1.WAV",
	"SOUNDS\\DOORS\\HYDRAULICDOOR1O1.WAV",
	"SOUNDS\\POWERUPS\\POWERUP2.WAV",
	"SOUNDS\\EVENTS\\LEVERLOCK.WAV",
	"SOUNDS\\DOORS\\ELEVATORACTIVATE1A.WAV",
	"SOUNDS\\DOORS\\ELEVATOREND1A.WAV",
	"SOUNDS\\DOORS\\ELEVATORLOOP.WAV",
	"SOUNDS\\DOORS\\METALDOORC1.WAV",
	"SOUNDS\\DOORS\\METALDOORO1.WAV",

	"SOUNDS\\POWERUPS\\ARMOUR1.WAV",
	"SOUNDS\\WEAPONS\\TESLA\\PROJECTILE.WAV",
	"SOUNDS\\WEAPONS\\LIFELEECH\\PROJECTILE.WAV",
	"SOUNDS\\WEAPONS\\LIFELEECH\\\\FIRE.WAV",
	"SOUNDS\\WEAPONS\\SHOTGUN\\\\RELOAD.WAV",
	"SOUNDS\\CHOSEN\\CALEB\\WEAPON\\MSC2_CAL.WAV",
	"SOUNDS\\WEAPONS\\FLARE\\PROJECTILE.WAV",


	"SOUNDS\\WEAPONS\\LIFELEECH\\BITE2.WAV",
	"SOUNDS\\WEAPONS\\LIFELEECH\\BITE1.WAV",
	"SOUNDS\\WEAPONS\\LIFELEECH\\IDLE.WAV",

	
	"SOUNDS\\WEAPONS\\ORB\\LOOP.WAV",
	"SOUNDS\\WEAPONS\\ORB\\FIRE.WAV",
	"SOUNDS\\WEAPONS\\ORB\\EXPLODE.WAV",
	"SOUNDS\\WEAPONS\\ORB\\LOOPDRILLING.WAV",

#if 0	// these should all get streamed...
	"SOUNDS\\CHOSEN\\CALEB\\PAIN\\C_1LINER_4.WAV",
	"SOUNDS\\CHOSEN\\CALEB\\PAIN\\PAIN2_CAL.WAV",
	"SOUNDS\\CHOSEN\\CALEB\\WEAPON\\WPU1_CAL.WAV",
	"SOUNDS\\CHOSEN\\CALEB\\PAIN\\PAIN12CAL.WAV",
	"SOUNDS\\CHOSEN\\CALEB\\PAIN\\PAIN9_CAL.WAV",
	"SOUNDS\\CHOSEN\\CALEB\\PAIN\\E1M1_6_CAL.WAV",
	"SOUNDS\\CHOSEN\\CALEB\\PAIN\\PN7_CAL.WAV",
	"SOUNDS\\CHOSEN\\CALEB\\PAIN\\PAIN1_CAL.WAV",
	"SOUNDS\\CHOSEN\\CALEB\\PAIN\\PAIN6_CAL.WAV",
	"SOUNDS\\CHOSEN\\CALEB\\PAIN\\BLDLUST7_CAL.WAV",
#endif

	};

#define NUM_CACHED_SOUNDS_3D (sizeof(g_pCachedSound3D) / sizeof(g_pCachedSound3D[0]))



#endif // __FILECACHING_H__