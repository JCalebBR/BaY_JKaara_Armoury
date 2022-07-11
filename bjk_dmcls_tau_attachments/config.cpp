#include "basicDefines_A3.hpp"

class CfgPatches {
    class BJK_DMCLS_attachments {
        weapons[] = {"BJK_DMCLS_Tau_Optics_1", "BJK_DMCLS_Tau_Optics_2", "BJK_DMCLS_Tau_Optics_3", "BJK_DMCLS_Tau_Coli_1", "BJK_DMCLS_Tau_Coli_2", "BJK_DMCLS_Tau_Bipod_1"};
        magazines[] = {};
        ammo[] = {};
        requiredAddons[] = {"A3_Weapons_F"};
        requiredVersion = 1.00;

        author = "Sokolonko & JCaleb2014";
        name = "BJK_DMCLS_attachments";
    };
};

class SlotInfo;
class CowsSlot_BJK_dmcls_tau : SlotInfo {
    linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
    displayName = "$STR_A3_CowsSlot0";
    compatibleItems[] = {"BJK_DMCLS_Tau_Optics_1", "BJK_DMCLS_Tau_Optics_2", "BJK_DMCLS_Tau_Optics_3", "BJK_DMCLS_Tau_Coli_1", "BJK_DMCLS_Tau_Coli_2"};
};

class UnderBarrelSlot;
class UnderBarrelSlot_BJK_dmcls_tau : UnderBarrelSlot {
    compatibleItems[] = {"BJK_DMCLS_Tau_Bipod_1"};
};
