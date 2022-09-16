#define _ARMA_

class CfgPatches {
    class BaY_JKaara_Armory_Launcher {
        name = "Ba'Y J'Kaara Armory (Launcher)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"ace_interaction", "ace_csw"};
        weapons[] = {"BJK_Tau_ShieldGenerator_Case"};
    };
};

class ItemInfo;
class EventHandlers;
class CBA_Extended_EventHandlers_base;
class WeaponSlotsInfo;

class CfgWeapons {
    class ace_csw_m3CarryTripod;
    class BJK_Tau_ShieldGenerator_Case : ace_csw_m3CarryTripod {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Portable Shield Generator";
        modes[] = {};
        class ace_csw {
            type = "mount";
            deployTime = 20;
            pickupTime = 20;
            deploy = "BJK_Tau_ShieldGenerator";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 440;
        };
    };
};