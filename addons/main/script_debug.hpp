/**
STACK TRACING
**/
//#define ENABLE_CALLSTACK
//#define ENABLE_PERFORMANCE_COUNTERS
//#define DEBUG_EVENTS

#ifdef ENABLE_CALLSTACK
    #define CALLSTACK(function) {private ['_ret']; if(22nd_IS_ERRORED) then { ['AUTO','AUTO'] call 22nd_DUMPSTACK_FNC; 22nd_IS_ERRORED = false; }; 22nd_IS_ERRORED = true; 22nd_STACK_TR22nd set [22nd_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, 22nd_CURRENT_FUNCTION, 'ANON', _this]]; 22nd_STACK_DEPTH = 22nd_STACK_DEPTH + 1; 22nd_CURRENT_FUNCTION = 'ANON'; _ret = _this call ##function; 22nd_STACK_DEPTH = 22nd_STACK_DEPTH - 1; 22nd_IS_ERRORED = false; _ret;}
    #define CALLSTACK_NAMED(function, functionName) {private ['_ret']; if(22nd_IS_ERRORED) then { ['AUTO','AUTO'] call 22nd_DUMPSTACK_FNC; 22nd_IS_ERRORED = false; }; 22nd_IS_ERRORED = true; 22nd_STACK_TR22nd set [22nd_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, 22nd_CURRENT_FUNCTION, functionName, _this]]; 22nd_STACK_DEPTH = 22nd_STACK_DEPTH + 1; 22nd_CURRENT_FUNCTION = functionName; _ret = _this call ##function; 22nd_STACK_DEPTH = 22nd_STACK_DEPTH - 1; 22nd_IS_ERRORED = false; _ret;}
    #define DUMPSTACK ([__FILE__, __LINE__] call 22nd_DUMPSTACK_FNC)

    #define FUNC(var1) {private ['_ret']; if(22nd_IS_ERRORED) then { ['AUTO','AUTO'] call 22nd_DUMPSTACK_FNC; 22nd_IS_ERRORED = false; }; 22nd_IS_ERRORED = true; 22nd_STACK_TR22nd set [22nd_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, 22nd_CURRENT_FUNCTION, 'TRIPLES(ADDON,fnc,var1)', _this]]; 22nd_STACK_DEPTH = 22nd_STACK_DEPTH + 1; 22nd_CURRENT_FUNCTION = 'TRIPLES(ADDON,fnc,var1)'; _ret = _this call TRIPLES(ADDON,fnc,var1); 22nd_STACK_DEPTH = 22nd_STACK_DEPTH - 1; 22nd_IS_ERRORED = false; _ret;}
    #define EFUNC(var1,var2) {private ['_ret']; if(22nd_IS_ERRORED) then { ['AUTO','AUTO'] call 22nd_DUMPSTACK_FNC; 22nd_IS_ERRORED = false; }; 22nd_IS_ERRORED = true; 22nd_STACK_TR22nd set [22nd_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, 22nd_CURRENT_FUNCTION, 'TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)', _this]]; 22nd_STACK_DEPTH = 22nd_STACK_DEPTH + 1; 22nd_CURRENT_FUNCTION = 'TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)'; _ret = _this call TRIPLES(DOUBLES(PREFIX,var1),fnc,var2); 22nd_STACK_DEPTH = 22nd_STACK_DEPTH - 1; 22nd_IS_ERRORED = false; _ret;}
#else
    #define CALLSTACK(function) function
    #define CALLSTACK_NAMED(function, functionName) function
    #define DUMPSTACK
#endif


/**
PERFORMANCE COUNTERS SECTION
**/
//#define ENABLE_PERFORMANCE_COUNTERS

#ifdef ENABLE_PERFORMANCE_COUNTERS
    #define CBA_fnc_addPerFrameHandler { _ret = [(_this select 0), (_this select 1), (_this select 2), #function] call CBA_fnc_addPerFrameHandler; if(isNil "22nd_PFH_COUNTER" ) then { 22nd_PFH_COUNTER=[]; }; 22nd_PFH_COUNTER pushBack [[_ret, __FILE__, __LINE__], [(_this select 0), (_this select 1), (_this select 2)]];  _ret }

    #define CREATE_COUNTER(x) if(isNil "22nd_COUNTERS" ) then { 22nd_COUNTERS=[]; }; GVAR(DOUBLES(x,counter))=[]; GVAR(DOUBLES(x,counter)) set[0, QUOTE(GVAR(DOUBLES(x,counter)))];  GVAR(DOUBLES(x,counter)) set[1, diag_tickTime]; 22nd_COUNTERS pushBack GVAR(DOUBLES(x,counter));
    #define BEGIN_COUNTER(x) if(isNil QUOTE(GVAR(DOUBLES(x,counter)))) then { CREATE_COUNTER(x) }; GVAR(DOUBLES(x,counter)) set[2, diag_tickTime];
    #define END_COUNTER(x) GVAR(DOUBLES(x,counter)) pushBack [(GVAR(DOUBLES(x,counter)) select 2), diag_tickTime];

    #define DUMP_COUNTERS ([__FILE__, __LINE__] call 22nd_DUMPCOUNTERS_FNC)
#else
    #define CREATE_COUNTER(x) /* disabled */
    #define BEGIN_COUNTER(x) /* disabled */
    #define END_COUNTER(x) /* disabled */
    #define DUMP_COUNTERS  /* disabled */
#endif
