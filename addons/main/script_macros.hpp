#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2

#define DGVAR(varName)    if(isNil "22nd_DEBUG_NAMESPACE") then { 22nd_DEBUG_NAMESPACE = []; }; if(!(QUOTE(GVAR(varName)) in 22nd_DEBUG_NAMESPACE)) then { PUSH(22nd_DEBUG_NAMESPACE, QUOTE(GVAR(varName))); }; GVAR(varName)
#define DVAR(varName)     if(isNil "22nd_DEBUG_NAMESPACE") then { 22nd_DEBUG_NAMESPACE = []; }; if(!(QUOTE(varName) in 22nd_DEBUG_NAMESPACE)) then { PUSH(22nd_DEBUG_NAMESPACE, QUOTE(varName)); }; varName
#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define DEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#define QFUNC(var1) QUOTE(DFUNC(var1))
#define QEFUNC(var1,var2) QUOTE(DEFUNC(var1,var2))

#define PATHTOEF(var1,var2) PATHTOF_SYS(PREFIX,var1,var2)

#define GETVAR_SYS(var1,var2) getVariable [ARR_2(QUOTE(var1),var2)]
#define SETVAR_SYS(var1,var2) setVariable [ARR_2(QUOTE(var1),var2)]
#define SETPVAR_SYS(var1,var2) setVariable [ARR_3(QUOTE(var1),var2,true)]

#define GETVAR(var1,var2,var3) var1 GETVAR_SYS(var2,var3)
#define GETMVAR(var1,var2) missionNamespace GETVAR_SYS(var1,var2)
#define GETUVAR(var1,var2) uiNamespace GETVAR_SYS(var1,var2)
#define GETPRVAR(var1,var2) profileNamespace GETVAR_SYS(var1,var2)
#define GETPAVAR(var1,var2) parsingNamespace GETVAR_SYS(var1,var2)

#define SETVAR(var1,var2,var3) var1 SETVAR_SYS(var2,var3)
#define SETPVAR(var1,var2,var3) var1 SETPVAR_SYS(var2,var3)
#define SETMVAR(var1,var2) missionNamespace SETVAR_SYS(var1,var2)
#define SETUVAR(var1,var2) uiNamespace SETVAR_SYS(var1,var2)
#define SETPRVAR(var1,var2) profileNamespace SETVAR_SYS(var1,var2)
#define SETPAVAR(var1,var2) parsingNamespace SETVAR_SYS(var1,var2)

#define GETGVAR(var1,var2) GETMVAR(GVAR(var1),var2)
#define GETEGVAR(var1,var2,var3) GETMVAR(EGVAR(var1,var2),var3)

#define ARR_SELECT(ARRAY,INDEX,DEFAULT) if (count ARRAY > INDEX) then {ARRAY select INDEX} else {DEFAULT}


#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
  weapon = #WEAPON; \
  count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
  name = #ITEM; \
  count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
  magazine = #MAGAZINE; \
  count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
  backpack = #BACKPACK; \
  count = COUNT; \
}


#ifdef DISABLE_COMPILE_CACHE
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf))
#else
    #define PREP(fncName) DFUNC(fncName) = QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf)) call SLX_XEH_COMPILE
#endif

#define PREP_MODULE(folder) [] call compile preprocessFileLineNumbers QUOTE(PATHTOF(folder\__PREP__.sqf))

#define HASH_CREATE                    ([] call EFUNC(common,hashCreate))
#define HASH_SET(hash, key, val)    ([hash, key, val, __FILE__, __LINE__] call EFUNC(common,hashSet))
#define HASH_GET(hash, key)            ([hash, key, __FILE__, __LINE__] call EFUNC(common,hashGet))
#define HASH_REM(hash, key)            ([hash, key, __FILE__, __LINE__] call EFUNC(common,hashRem))
#define HASH_HASKEY(hash, key)        ([hash, key, __FILE__, __LINE__] call EFUNC(common,hashHasKey))

#define HASHLIST_CREATELIST(keys)                ([keys] call EFUNC(common,hashListCreateList))
#define HASHLIST_CREATEHASH(hashList)            ([hashList] call EFUNC(common,hashListCreateHash))
#define HASHLIST_SELECT(hashList, index)        ([hashList, index, __FILE__, __LINE__] call EFUNC(common,hashListSelect))
#define HASHLIST_SET(hashList, index, value)    ([hashList, index, value, __FILE__, __LINE__] call EFUNC(common,hashListSet))
#define HASHLIST_PUSH(hashList, value)            ([hashList, value, __FILE__, __LINE__] call EFUNC(common,hashListPush))

// Time functions for accuracy per frame
#define 22nd_tickTime (22nd_time + (diag_tickTime - 22nd_diagTime))

#define 22nd_isHC (!hasInterface && !isDedicated)

//By default CBA's TRACE/LOG/WARNING spawn a buffer, which can cause messages to be logged out of order:
#ifdef CBA_DEBUG_SYNCHRONOUS
    #define CBA_fnc_log { params ["_file","_lineNum","_message"]; diag_log [diag_frameNo, diag_tickTime, time,  _file + ":"+str(_lineNum + 1), _message]; }
#endif

#define 22nd_LOG(module,level,message) diag_log text 22nd_LOGFORMAT(module,level,message)
#define 22nd_LOGFORMAT(module,level,message) FORMAT_2(QUOTE([ACE] (module) %1: %2),level,message)

#define 22nd_LOGERROR(message) 22nd_LOG(COMPONENT,"ERROR",message)
#define 22nd_LOGERROR_1(message,arg1) 22nd_LOGERROR(FORMAT_1(message,arg1))
#define 22nd_LOGERROR_2(message,arg1,arg2) 22nd_LOGERROR(FORMAT_2(message,arg1,arg2))
#define 22nd_LOGERROR_3(message,arg1,arg2,arg3) 22nd_LOGERROR(FORMAT_3(message,arg1,arg2,arg3))
#define 22nd_LOGERROR_4(message,arg1,arg2,arg3,arg4) 22nd_LOGERROR(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define 22nd_LOGERROR_5(message,arg1,arg2,arg3,arg4,arg5) 22nd_LOGERROR(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define 22nd_LOGERROR_6(message,arg1,arg2,arg3,arg4,arg5,arg6) 22nd_LOGERROR(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define 22nd_LOGERROR_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) 22nd_LOGERROR(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define 22nd_LOGERROR_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) 22nd_LOGERROR(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define 22nd_ERRORFORMAT(message) 22nd_LOGFORMAT(COMPONENT,"ERROR",message)
#define 22nd_ERRORFORMAT_1(message,arg1) 22nd_ERRORFORMAT(FORMAT_1(message,arg1))
#define 22nd_ERRORFORMAT_2(message,arg1,arg2) 22nd_ERRORFORMAT(FORMAT_2(message,arg1,arg2))
#define 22nd_ERRORFORMAT_3(message,arg1,arg2,arg3) 22nd_ERRORFORMAT(FORMAT_3(message,arg1,arg2,arg3))
#define 22nd_ERRORFORMAT_4(message,arg1,arg2,arg3,arg4) 22nd_ERRORFORMAT(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define 22nd_ERRORFORMAT_5(message,arg1,arg2,arg3,arg4,arg5) 22nd_ERRORFORMAT(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define 22nd_ERRORFORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) 22nd_ERRORFORMAT(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define 22nd_ERRORFORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) 22nd_ERRORFORMAT(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define 22nd_ERRORFORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) 22nd_ERRORFORMAT(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define 22nd_LOGWARNING(message) 22nd_LOG(COMPONENT,"WARNING",message)
#define 22nd_LOGWARNING_1(message,arg1) 22nd_LOGWARNING(FORMAT_1(message,arg1))
#define 22nd_LOGWARNING_2(message,arg1,arg2) 22nd_LOGWARNING(FORMAT_2(message,arg1,arg2))
#define 22nd_LOGWARNING_3(message,arg1,arg2,arg3) 22nd_LOGWARNING(FORMAT_3(message,arg1,arg2,arg3))
#define 22nd_LOGWARNING_4(message,arg1,arg2,arg3,arg4) 22nd_LOGWARNING(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define 22nd_LOGWARNING_5(message,arg1,arg2,arg3,arg4,arg5) 22nd_LOGWARNING(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define 22nd_LOGWARNING_6(message,arg1,arg2,arg3,arg4,arg5,arg6) 22nd_LOGWARNING(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define 22nd_LOGWARNING_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) 22nd_LOGWARNING(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define 22nd_LOGWARNING_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) 22nd_LOGWARNING(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define 22nd_WARNINGFORMAT(message) 22nd_LOGFORMAT(COMPONENT,"WARNING",message)
#define 22nd_WARNINGFORMAT_1(message,arg1) 22nd_WARNINGFORMAT(FORMAT_1(message,arg1))
#define 22nd_WARNINGFORMAT_2(message,arg1,arg2) 22nd_WARNINGFORMAT(FORMAT_2(message,arg1,arg2))
#define 22nd_WARNINGFORMAT_3(message,arg1,arg2,arg3) 22nd_WARNINGFORMAT(FORMAT_3(message,arg1,arg2,arg3))
#define 22nd_WARNINGFORMAT_4(message,arg1,arg2,arg3,arg4) 22nd_WARNINGFORMAT(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define 22nd_WARNINGFORMAT_5(message,arg1,arg2,arg3,arg4,arg5) 22nd_WARNINGFORMAT(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define 22nd_WARNINGFORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) 22nd_WARNINGFORMAT(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define 22nd_WARNINGFORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) 22nd_WARNINGFORMAT(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define 22nd_WARNINGFORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) 22nd_WARNINGFORMAT(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define 22nd_LOGINFO(message) 22nd_LOG(COMPONENT,"INFO",message)
#define 22nd_LOGINFO_1(message,arg1) 22nd_LOGINFO(FORMAT_1(message,arg1))
#define 22nd_LOGINFO_2(message,arg1,arg2) 22nd_LOGINFO(FORMAT_2(message,arg1,arg2))
#define 22nd_LOGINFO_3(message,arg1,arg2,arg3) 22nd_LOGINFO(FORMAT_3(message,arg1,arg2,arg3))
#define 22nd_LOGINFO_4(message,arg1,arg2,arg3,arg4) 22nd_LOGINFO(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define 22nd_LOGINFO_5(message,arg1,arg2,arg3,arg4,arg5) 22nd_LOGINFO(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define 22nd_LOGINFO_6(message,arg1,arg2,arg3,arg4,arg5,arg6) 22nd_LOGINFO(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define 22nd_LOGINFO_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) 22nd_LOGINFO(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define 22nd_LOGINFO_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) 22nd_LOGINFO(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define 22nd_INFOFORMAT(message) 22nd_LOGFORMAT(COMPONENT,"INFO",message)
#define 22nd_INFOFORMAT_1(message,arg1) 22nd_INFOFORMAT(FORMAT_1(message,arg1))
#define 22nd_INFOFORMAT_2(message,arg1,arg2) 22nd_INFOFORMAT(FORMAT_2(message,arg1,arg2))
#define 22nd_INFOFORMAT_3(message,arg1,arg2,arg3) 22nd_INFOFORMAT(FORMAT_3(message,arg1,arg2,arg3))
#define 22nd_INFOFORMAT_4(message,arg1,arg2,arg3,arg4) 22nd_INFOFORMAT(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define 22nd_INFOFORMAT_5(message,arg1,arg2,arg3,arg4,arg5) 22nd_INFOFORMAT(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define 22nd_INFOFORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) 22nd_INFOFORMAT(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define 22nd_INFOFORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) 22nd_INFOFORMAT(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define 22nd_INFOFORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) 22nd_INFOFORMAT(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define 22nd_LOGDEBUG(message) 22nd_LOG(COMPONENT,"DEBUG",message)
#define 22nd_LOGDEBUG_1(message,arg1) 22nd_LOGDEBUG(FORMAT_1(message,arg1))
#define 22nd_LOGDEBUG_2(message,arg1,arg2) 22nd_LOGDEBUG(FORMAT_2(message,arg1,arg2))
#define 22nd_LOGDEBUG_3(message,arg1,arg2,arg3) 22nd_LOGDEBUG(FORMAT_3(message,arg1,arg2,arg3))
#define 22nd_LOGDEBUG_4(message,arg1,arg2,arg3,arg4) 22nd_LOGDEBUG(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define 22nd_LOGDEBUG_5(message,arg1,arg2,arg3,arg4,arg5) 22nd_LOGDEBUG(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define 22nd_LOGDEBUG_6(message,arg1,arg2,arg3,arg4,arg5,arg6) 22nd_LOGDEBUG(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define 22nd_LOGDEBUG_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) 22nd_LOGDEBUG(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define 22nd_LOGDEBUG_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) 22nd_LOGDEBUG(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define 22nd_DEBUGFORMAT(message) 22nd_LOGFORMAT(COMPONENT,"DEBUG",message)
#define 22nd_DEBUGFORMAT_1(message,arg1) 22nd_DEBUGFORMAT(FORMAT_1(message,arg1))
#define 22nd_DEBUGFORMAT_2(message,arg1,arg2) 22nd_DEBUGFORMAT(FORMAT_2(message,arg1,arg2))
#define 22nd_DEBUGFORMAT_3(message,arg1,arg2,arg3) 22nd_DEBUGFORMAT(FORMAT_3(message,arg1,arg2,arg3))
#define 22nd_DEBUGFORMAT_4(message,arg1,arg2,arg3,arg4) 22nd_DEBUGFORMAT(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define 22nd_DEBUGFORMAT_5(message,arg1,arg2,arg3,arg4,arg5) 22nd_DEBUGFORMAT(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define 22nd_DEBUGFORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) 22nd_DEBUGFORMAT(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define 22nd_DEBUGFORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) 22nd_DEBUGFORMAT(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define 22nd_DEBUGFORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) 22nd_DEBUGFORMAT(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define 22nd_DEPRECATED(arg1,arg2,arg3) 22nd_LOGWARNING_3("%1 is deprecated. Support will be dropped in version %2. Replaced by: %3",arg1,arg2,arg3)

#define MAGS_2(CLASSNAME) CLASSNAME, CLASSNAME
#define MAGS_3(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_4(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_5(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_6(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_7(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_8(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_9(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_10(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_11(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME
#define MAGS_12(CLASSNAME) CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME, CLASSNAME

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#include "script_debug.hpp"
