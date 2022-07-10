#include "basicDefines_A3.hpp"

class CfgPatches {
    class BJK_DMCLS_attachments_c {
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
        requiredAddons[] = {"A3_Weapons_F"};
        requiredVersion = 1.00;

        author = "Sokolonko & JCaleb2014";
        name = "bjk_dmcls_attachments_c";
    };
};

class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class InventoryUnderItem_Base_F;
    #include "Bipod_1\cfgWeapons.hpp"
    #include "Coli_1\cfgWeapons.hpp"
    #include "Coli_2\cfgWeapons.hpp"
    #include "Optics_1\cfgWeapons.hpp"
    #include "Optics_2\cfgWeapons.hpp"
    #include "Optics_3\cfgWeapons.hpp"
};