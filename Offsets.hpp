#pragma once
// Apex Legends v3.0.74.20

// [Miscellaneous]
constexpr long OFF_ENTITY_LIST = 0x1ef7c38; //[Miscellaneous]->cl_entitylist
constexpr long OFF_LOCAL_PLAYER = 0x22b0328; //[Miscellaneous]->LocalPlayer
constexpr long OFF_GLOBAL_VARS = 0x17e8830; //[Miscellaneous]->GlobalVars
constexpr long OFF_NAMELIST = 0xd2e2260; //[Miscellaneous]->NameList
constexpr long OFF_VIEW_RENDER = 0x7542c00; //[Miscellaneous]->ViewRender
constexpr long OFF_VIEW_MATRIX = 0x11a350; //[Miscellaneous]->ViewMatrix
constexpr long OFF_LEVEL = 0x17e8d34; //[Miscellaneous]->LevelName
constexpr long OFF_PROJECTILESPEED = 0x1eb4; //[Miscellaneous]->CWeaponX!m_flProjectileSpeed //[WeaponSettings]->projectile_launch_speed + [WeaponSettingsMeta].base
constexpr long OFF_PROJECTILESCALE = 0x1ebc; //[Miscellaneous]->CWeaponX!m_flProjectileScale //[WeaponSettings]->projectile_gravity_scale + [WeaponSettingsMeta].base
constexpr long OFF_CAMERAORIGIN = 0x1ee0; //[Miscellaneous]->CPlayer!camera_origin
constexpr long OFF_STUDIOHDR = 0x1000; //[Miscellaneous]->CBaseAnimating!m_pStudioHdr

// [Buttons]
constexpr long OFF_IN_ATTACK = 0x07542d28; //[Buttons]->in_attack

// [RecvTable.DT_BaseAnimating]
constexpr long OFF_BONES = 0x0db0 + 0x48; //[RecvTable.DT_BaseAnimating]->m_nForceBone + 0x48

// [RecvTable.DT_BaseCombatCharacter]
constexpr long OFF_WEAPON_HANDLE = 0x1944; //[RecvTable.DT_BaseCombatCharacter]->m_latestPrimaryWeapons
constexpr long OFF_GRENADE_HANDLE = 0x1954; //[RecvTable.DT_BaseCombatCharacter]->m_latestNonOffhandWeapons
constexpr long OFF_LAST_VISIBLE_TIME = 0x199e + 0x2; //[Miscellaneous]->CPlayer!lastVisibleTime //[RecvTable.DT_BaseCombatCharacter]->m_hudInfo_visibilityTestAlwaysPasses + 0x2
constexpr long OFF_LAST_AIMEDAT_TIME = 0x199e + 0x2 + 0x8; //[Miscellaneous]->CPlayer!lastVisibleTime + 0x8 //[RecvTable.DT_BaseCombatCharacter]->m_hudInfo_visibilityTestAlwaysPasses + 0x2 + 0x8

// [RecvTable.DT_BaseEntity]
constexpr long OFF_CURRENT_SHIELDS = 0x01a0; //[RecvTable.DT_BaseEntity]->m_shieldHealth
constexpr long OFF_TEAM_NUMBER = 0x0338; //[RecvTable.DT_BaseEntity]->m_iTeamNum
constexpr long OFF_SQUAD_ID = 0x0344; //[RecvTable.DT_BaseEntity]->m_squadID
constexpr long OFF_NAME = 0x0481; //[RecvTable.DT_BaseEntity]->m_iName
constexpr long OFF_NAMEINDEX = 0x38; //[RecvTable.DT_BaseEntity]

// [RecvTable.DT_LocalPlayerExclusive]
constexpr long OFFSET_TRAVERSAL_PROGRESS = 0x2b7c; //[RecvTable.DT_LocalPlayerExclusive]->m_traversalProgress
constexpr long OFFSET_TRAVERSAL_START_TIME = 0x2b80; //[RecvTable.DT_LocalPlayerExclusive]->m_traversalStartTime
constexpr long OFFSET_TRAVERSAL_RELEASE_TIME = 0x2b88; //[RecvTable.DT_LocalPlayerExclusive]->m_traversalReleaseTime

// [RecvTable.DT_Player]
constexpr long OFF_CURRENT_HEALTH = 0x0328; //[RecvTable.DT_Player]->m_iHealth
constexpr long OFF_LIFE_STATE = 0x0690; //[RecvTable.DT_Player]->m_lifeState
constexpr long OFF_BLEEDOUT_STATE = 0x2770; //[RecvTable.DT_Player]->m_bleedoutState

// [RecvTable.DT_WeaponX]
constexpr long OFF_WEAPON_INDEX = 0x1788; //[RecvTable.DT_WeaponX]->m_weaponNameIndex

// [DataMap.C_BaseEntity]
constexpr long OFF_LOCAL_ORIGIN = 0x017c; //[DataMap.C_BaseEntity]->m_vecAbsOrigin

// [DataMap.C_Player]
constexpr long OFF_ZOOMING = 0x1be1; //[DataMap.C_Player]->m_bZooming
constexpr long OFFSET_TIME_BASE = 0x2098; //[DataMap.C_Player]->m_currentFramePlayer.timeBase
constexpr long OFF_YAW = 0x224c - 0x8; //[DataMap.C_Player]->m_currentFramePlayer.m_ammoPoolCount - 0x8
constexpr long OFF_VIEW_ANGLES = 0x2544 - 0x14; //[DataMap.C_Player]->m_ammoPoolCapacity - 0x14

// [ConVars]
constexpr long OFF_GAMEMODE = 0x022e8360; //[ConVars]->mp_gamemode


constexpr long OFF_SPECTATOR_LIST = 0x1ef9c58; //IDA signature >> [48 8B 0D ? ? ? ? 48 85 C9 74 ? 48 8B 01 FF ? ? 48 85 C0 74 ? 48 63 4E 38]
constexpr long OFF_SPECTATOR_LIST_AUX = 0x964 + 0x10; //+0x10 general offset increase/decrease


constexpr long OFF_REGION = 0x140000000; //[Static]->Region
