/* This file is generated by arpcc, do not change manually! */
#ifndef __structold_h__
#define __structold_h__
#include "ProtocolWriter.h"
#include "ProtocolReader.h"
#include "EnumInfo.h"
#include "com.h"
#include "struct.h"
//=============================================================
// struct SGE_PlayerInst_Old
struct SGE_PlayerInst_Old : public COM_Entity
{
	// member list.
	bool isLeavingTeam_;
	bool isBattle_;
	bool autoBattle_;
	bool isTeamLeader_;
	S32 sceneId_;
	S32 openSubSystemFlag_;
	S64 createTime_;
	std::string guildName_;
	COM_FPosition scenePos_;
	COM_PlayerVsPlayer pvpInfo_;
	bool onlineTimeFlag_;
	F32 onlineTime_;
	std::vector< U32 > onlineTimeReward_;
	bool isFund_;
	std::vector< U32 > fundtags_;
	bool openDoubleTimeFlag_;
	bool isFirstLogin_;
	bool firstRechargeDiamond_;
	bool isFirstRechargeGift_;
	F32 offlineExp_;
	F32 rivalTime_;
	S8 rivalNum_;
	S8 promoteAward_;
	U64 guideIdx_;
	F32 noTalkTime_;
	U32 wishShareNum_;
	U32 warriortrophyNum_;
	U32 employeelasttime_;
	U32 employeeonecount_;
	U32 employeetencount_;
	F32 greenBoxTimes_;
	F32 blueBoxTimes_;
	U32 greenBoxFreeNum_;
	COM_HundredBattle hbInfo_;
	std::vector< S32 > openScenes_;
	std::vector< U32 > copyNum_;
	S32 magicItemLevel_;
	S32 magicItemeExp_;
	JobType magicItemeJob_;
	S32 magicTupoLevel_;
	std::vector< S32 > cachedNpcs_;
	std::vector< std::string > gft_;
	std::vector< U32 > babycache_;
	std::vector< S32 > titles_;
	S32 guildContribution_;
	U32 exitGuildTime_;
	std::vector< COM_Skill > guildSkills_;
	std::vector< ADType > gmActivities_;
	COM_ADLoginTotal festival_;
	COM_ADChargeTotal selfRecharge_;
	COM_ADChargeTotal sysRecharge_;
	COM_ADDiscountStore selfDiscountStore_;
	COM_ADDiscountStore sysDiscountStore_;
	COM_ADChargeEvery selfOnceRecharge_;
	COM_ADChargeEvery sysOnceRecharge_;
	COM_ADEmployeeTotal empact_;
	COM_ADCards selfCards_;
	COM_ADChargeTotal myselfRecharge_;
	COM_ADHotRole hotdata_;
	COM_ADGiftBag gbdata_;
	bool sevenflag_;
	bool signFlag_;
	std::vector< COM_Sevenday > sevendata_;
	bool viprewardflag_;
	std::string phoneNumber_;
	std::vector< U32 > levelgift_;
	COM_ActivityTable activity_;
	std::vector< COM_Item > fuwen_;
	// field ids.
	enum
	{
		FID_isLeavingTeam_ = 8,
		FID_isBattle_ = 9,
		FID_autoBattle_ = 10,
		FID_isTeamLeader_ = 11,
		FID_sceneId_ = 12,
		FID_openSubSystemFlag_ = 13,
		FID_createTime_ = 14,
		FID_guildName_ = 15,
		FID_scenePos_ = 16,
		FID_pvpInfo_ = 17,
		FID_onlineTimeFlag_ = 18,
		FID_onlineTime_ = 19,
		FID_onlineTimeReward_ = 20,
		FID_isFund_ = 21,
		FID_fundtags_ = 22,
		FID_openDoubleTimeFlag_ = 23,
		FID_isFirstLogin_ = 24,
		FID_firstRechargeDiamond_ = 25,
		FID_isFirstRechargeGift_ = 26,
		FID_offlineExp_ = 27,
		FID_rivalTime_ = 28,
		FID_rivalNum_ = 29,
		FID_promoteAward_ = 30,
		FID_guideIdx_ = 31,
		FID_noTalkTime_ = 32,
		FID_wishShareNum_ = 33,
		FID_warriortrophyNum_ = 34,
		FID_employeelasttime_ = 35,
		FID_employeeonecount_ = 36,
		FID_employeetencount_ = 37,
		FID_greenBoxTimes_ = 38,
		FID_blueBoxTimes_ = 39,
		FID_greenBoxFreeNum_ = 40,
		FID_hbInfo_ = 41,
		FID_openScenes_ = 42,
		FID_copyNum_ = 43,
		FID_magicItemLevel_ = 44,
		FID_magicItemeExp_ = 45,
		FID_magicItemeJob_ = 46,
		FID_magicTupoLevel_ = 47,
		FID_cachedNpcs_ = 48,
		FID_gft_ = 49,
		FID_babycache_ = 50,
		FID_titles_ = 51,
		FID_guildContribution_ = 52,
		FID_exitGuildTime_ = 53,
		FID_guildSkills_ = 54,
		FID_gmActivities_ = 55,
		FID_festival_ = 56,
		FID_selfRecharge_ = 57,
		FID_sysRecharge_ = 58,
		FID_selfDiscountStore_ = 59,
		FID_sysDiscountStore_ = 60,
		FID_selfOnceRecharge_ = 61,
		FID_sysOnceRecharge_ = 62,
		FID_empact_ = 63,
		FID_selfCards_ = 64,
		FID_myselfRecharge_ = 65,
		FID_hotdata_ = 66,
		FID_gbdata_ = 67,
		FID_sevenflag_ = 68,
		FID_signFlag_ = 69,
		FID_sevendata_ = 70,
		FID_viprewardflag_ = 71,
		FID_phoneNumber_ = 72,
		FID_levelgift_ = 73,
		FID_activity_ = 74,
		FID_fuwen_ = 75,
		FIDMAX = 76,
	};
	// constructor.
	SGE_PlayerInst_Old();
	// serialization.
	void serialize(ProtocolWriter* s) const;
	// deserialization.
	bool deserialize(ProtocolReader* r);
	void serializeJson(std::ostream& ss, bool needBracket = true)const;
};
//=============================================================
// struct SGE_DBPlayerData_Old
struct SGE_DBPlayerData_Old : public SGE_PlayerInst_Old
{
	// member list.
	bool freeze_;
	bool seal_;
	U32 signs_;
	S32 sellIdMax_;
	S32 acceptRandQuestCounter_;
	S32 submitRandQuestCounter_;
	std::string pfid_;
	std::vector< SGE_OrderInfo > orders_;
	U64 loginTime_;
	U64 logoutTime_;
	U32 genItemMaxGuid_;
	U32 gaterMaxNum_;
	bool firstRollEmployeeCon_;
	bool firstRollEmployeeDia_;
	std::vector< COM_EmployeeInst > employees_;
	std::vector< COM_Item > itemStorage_;
	std::vector< COM_BabyInst > babyStorage_;
	std::vector< COM_BabyInst > babies_;
	std::vector< COM_Item > bagItems_;
	std::vector< COM_QuestInst > quests_;
	std::vector< S32 > completeQuests_;
	std::vector< COM_Item > mineReward_;
	std::vector< COM_JJCBattleMsg > jjcBattleMsg_;
	std::vector< COM_ContactInfo > friend_;
	std::vector< COM_ContactInfo > blacklist_;
	std::vector< S32 > achValues_;
	std::vector< COM_Achievement > achievement_;
	EmployeesBattleGroup empBattleGroup_;
	std::vector< U32 > employeeGroup1_;
	std::vector< U32 > employeeGroup2_;
	std::vector< COM_Gather > gatherData_;
	std::vector< U32 > compoundList_;
	// field ids.
	enum
	{
		FID_freeze_ = 76,
		FID_seal_ = 77,
		FID_signs_ = 78,
		FID_sellIdMax_ = 79,
		FID_acceptRandQuestCounter_ = 80,
		FID_submitRandQuestCounter_ = 81,
		FID_pfid_ = 82,
		FID_orders_ = 83,
		FID_loginTime_ = 84,
		FID_logoutTime_ = 85,
		FID_genItemMaxGuid_ = 86,
		FID_gaterMaxNum_ = 87,
		FID_firstRollEmployeeCon_ = 88,
		FID_firstRollEmployeeDia_ = 89,
		FID_employees_ = 90,
		FID_itemStorage_ = 91,
		FID_babyStorage_ = 92,
		FID_babies_ = 93,
		FID_bagItems_ = 94,
		FID_quests_ = 95,
		FID_completeQuests_ = 96,
		FID_mineReward_ = 97,
		FID_jjcBattleMsg_ = 98,
		FID_friend_ = 99,
		FID_blacklist_ = 100,
		FID_achValues_ = 101,
		FID_achievement_ = 102,
		FID_empBattleGroup_ = 103,
		FID_employeeGroup1_ = 104,
		FID_employeeGroup2_ = 105,
		FID_gatherData_ = 106,
		FID_compoundList_ = 107,
		FIDMAX = 108,
	};
	// constructor.
	SGE_DBPlayerData_Old();
	// serialization.
	void serialize(ProtocolWriter* s) const;
	// deserialization.
	bool deserialize(ProtocolReader* r);
	void serializeJson(std::ostream& ss, bool needBracket = true)const;
};
#endif