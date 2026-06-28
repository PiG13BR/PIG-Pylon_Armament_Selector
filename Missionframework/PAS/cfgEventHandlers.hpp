class Extended_PreInit_EventHandlers {
    class PAS_preInit {
        init = "call compile preprocessFileLineNumbers 'PAS\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class PAS_preInit {
        init = "call compile preprocessFileLineNumbers 'PAS\XEH_postInit.sqf'";
    };
};

class Extended_InitPost_EventHandlers {
    class Air {
        class initPost_PAS_EH {
            init = "_this call PIG_fnc_addPASAction";
        };
    };
};