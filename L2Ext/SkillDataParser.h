#pragma once

extern "C"
{
	void CreateIntParamHook();
	void CreateIntParam(CSkillInfo *pSI, INT32 param);
};

enum SkillDataID
{
	//Skill
	PUMP_EFFECT_BY_WEAPON = 0x100D9,
	PUMP_EFFECT_BY_ARMOR = 0x100BE,
	PUMP_EFFECT_NO_ARG = 0x100CE,
	PUMP_EFFECT_ONE_ARG = 0x100DA,
	PUMP_EFFECT_TWO_ARGS = 0x10111,
	INSTANT_EFFECT_TWO_ARG = 0x10057,
	INSTANT_EFFECT_ONE_ARG = 0x10056,
	INSTANT_EFFECT = 0x100A8,
	P_CRITICAL_RATE_BY_WEAPON = 0x10001,
	P_CRITICAL_DAMAGE_BY_WEAPON = 0x10002,
	P_CRITICAL_RATE_BY_HP2_WEAPON = 0x10003,
	P_CRITICAL_RATE_BY_HP1_WEAPON = 0x10004,
	P_PHYSICAL_ATTACK_BY_HP2_WEAPON = 0x10005,
	P_AVOID_MELEE_SKILL = 0x10006,
	P_CANCEL_ATTACKER_TARGET = 0x10007,
	P_REFLECT_MELEE_SKILL_DMG = 0x10008,
	P_SELF_RESURRECTION = 0x10009,
	P_ENLARGE_BUFF_SLOTS = 0x1000C,
	P_AUTOCAST_WHEN_ATTACKED = 0x1000D,
	I_SUMMON_ERASE = 0x1000E,
	I_SUMMON_FRIEND = 0x1000F,
	I_TARGET_CANCEL_CHANCE = 0x10010,
	I_TARGET_ME_CHANCE = 0x10011,
	I_MANA_BURN = 0x10012,
	I_LIFT_DEATH_PENALTY = 0x10013,
	P_SUMMON_BETRAY = 0x10014,
	I_DEATH2 = 0x10016,
	I_SPAWN_CASTING_NPC = 0x10017,
	I_SUMMON_PARTY = 0x10018,
	P_AUTOCAST_ON_MATK = 0x10019,
	P_AUTOCAST_ON_PATK = 0x1001A,
	P_AUTOCAST_ON_CRIT = 0x1001B,
	I_TELEPORT_DISTANCE = 0x1001C,
	P_REDUCE_EXP_PENALTY = 0x1001D,
	I_CHARGE = 0x1001E,
	P_BLOCK_ICON_ACTION = 0x1001F,
	I_DISPEL_BY_CATEGORY_COUNT = 0x10020,
	I_CONSUME_ENERGY = 0x10021,
	P_IMPROVE_HEAL = 0x10022,
	I_RELEASE_SPIRIT = 0x10023,
	I_HIDE_ABNORMAL = 0x10024,
	I_UNHIDE_ABNORMAL = 0x10025,
	P_CRITICAL_DAMAGE_POSITION_FRONT_BY_WEAPON = 0x10026,
	P_CRITICAL_DAMAGE_POSITION_SIDE_BY_WEAPON = 0x10027,
	P_CRITICAL_DAMAGE_POSITION_BACK_BY_WEAPON = 0x10028,
	I_DISPEL_NPC_BUFF = 0x10029,
	I_KILL_MYSELF = 0x1002A,
	P_STRIFE_CP = 0x1002B,
	P_MAGIC_SPEED_BY_WEAPON = 0x1002C,
	P_ANTI_BUFF = 0x1002D,
	P_MUL_SKILL_DMG = 0x1002E,
	P_DIGGER_CHANCE = 0x1002F,
	I_DIG = 0x10030,
	I_USE_SKILL = 0x10031,
	I_RIDE_WYVERN = 0x10032,
	I_DISPEL_BY_CHANCE = 0x10033,
	P_DEFENCE_ATTRIBUTE_BY_ARMOR = 0x10034,
	P_SPEED_BY_WEAPON = 0x10035,
	P_PHYSICAL_DEFENCE_BY_WEAPON = 0x10036,
	P_MAGICAL_DEFENCE_BY_WEAPON = 0x10037,
	P_AVOID_BY_WEAPON = 0x10038,
	P_SEMI_INVISIBLE = 0x10039,
	P_BONUS_EXP = 0x1003A,
	P_BONUS_SP = 0x1003B,
	P_BONUS_ITEM_DROP = 0x1003C,
	P_BONUS_ADENA = 0x1003D,
	P_BONUS_SPOIL = 0x1003E,
	P_BONUS_HARVESTING = 0x1003F,
	P_BONUS_RB = 0x10041,
	P_BONUS_EPIC_RB = 0x10042,
	I_DISPEL_BUFF = 0x10043,
	P_BONUS_ITEM_ID = 0x10044,
	I_GIVE_ITEM = 0x10045,
	I_ACQUIRE_SKILL = 0x10046,
	I_CHARM_OF_COURAGE = 0x10047,
	I_ADDITIONAL_BOX = 0x10048,
	P_ANTI_PK = 0x10049,
	I_DISPEL_BUFF_FIXED = 0x1004A,
	P_ATTACK_SPEED_BY_WEAPON2 = 0x1004B,
	P_RESIST_STUN = 0x1004C,
	I_PLEDGE_NAME_VALUE = 0x1004D,
	I_UPDATE_PLEDGE_SKILL = 0x1004E,
	I_DISPEL_DEBUFF_WITH_EXCEPTION = 0x1004F,
	P_REGEN_CP = 0x10050,
	I_ADD_ENCHANTED_ITEM = 0x10051,
	I_UPDATE_EVAL_SCORE = 0x10052,
	I_SET_AIO = 0x10053,
	I_SET_NOBLESS = 0x10054,
	I_SHOW_MENU = 0x10055,
	//Operate Condition
	OP_ONE_VAR = 0x10040,
	OP_BATTLE_FORCE_COUNT = 0x11001,
	OP_SPELL_FORCE_COUNT = 0x11002,
	OP_REMAIN_MP_PER = 0x11003,
	OP_MAX_HEIGHT_DIFF = 0x11004,
	OP_NOT_CLASS = 0x11005,
	OP_NOT_IN_TERRITORY = 0x11006,
	OP_IS_TYPE = 0x11007,
	OP_STRIFE_NOT_OWNED_BY = 0x11008,
	OP_COLLECTED_SOUL_COUNT = 0x11009,
	OP_IS_IN_SIEGE = 0x1100A,
	OP_HOUR_LOWER_THAN = 0x1100B,
	OP_HOUR_HIGHER_THAN = 0x1100C,
	OP_CAN_DIG = 0x1100D,
	OP_CAN_RELEASE_SPIRIT = 0x1100E,
	OP_CAN_ACQUIRE_SKILL = 0x1100F,
	OP_CAN_GET_ITEM = 0x11010,
	OP_COMBAT_MODE = 0x11011,
	OP_CAN_UPDATE_PLEDGE_SKILL = 0x11012,
	OP_IN_PEACEZONE = 0x110013,
	//INT params
	INT_PARAM = 0x1000B,
	IP_ATTACH_SKILL = 0x12001,
	IP_INSTANT_ACTIVATE_TIME = 0x12002,
	IP_RESIST_CANCEL = 0x12003,
	IP_GEODATA_CHECK = 0x12004
};

class SkillDataParser
{
public:
	static void Initialize();
	static void InitMaps();
	static CSkillInfo* SkillInfoConstructor(CSkillInfo* pSI); 
	static int ChangeWordID(LPVOID Param1);
	static LPVOID CreatePumpEffectNoArg(int nSize);
	static LPVOID CreatePumpEffectOneArg(int nSize);
	static LPVOID CreatePumpEffectTwoArgs(int nSize);
	static LPVOID CreatePumpEffectByWeapon(int nSize);
	static LPVOID CreatePumpEffectByArmor(int nSize);
	static LPVOID CreateInstantEffect(int nSize);
	static LPVOID CreateInstantEffectOneArg(int nSize);
	static LPVOID CreateInstantEffectTwoArg(int nSize);
	static LPVOID CreateOperateConditionOneVar(int nSize);
	static PWCHAR GetName(LPVOID param);
	static void LogParsingSkillDataFaild(CLog *pLog, CLog::LogType Type, const char* format, wchar_t* File, int Line);
};

class CPrecompileHeaderDB
{
	CPrecompileHeaderDB* Instance;
public:
	CPrecompileHeaderDB() { Instance = (CPrecompileHeaderDB*)0x0E2858B0; };
	~CPrecompileHeaderDB() {};
	int Search(const WCHAR *word)
	{
		typedef int (*f)(CPrecompileHeaderDB*, const WCHAR*);
		return f(0x770BE0)(Instance, word);
	};
};

extern CPrecompileHeaderDB g_PrecompileHeaderDB;