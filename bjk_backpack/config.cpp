#define _ARMA_

class CfgPatches {
    class BaY_JKaara_Armory_Backpack {
        name = "Ba'Y J'Kaara Armory (Backpack)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_Tau_Backpacks", "IC_Cadia", "IC_Guevesa", "CadFoot", "TIOW_Admech", "IC_StormTrooper"};
        units[] = {"BJK_FireWarrior_Backpack", "BJK_FireWarrior_Medical", "BJK_Guevesa_Kasrkin_Backpack", "BJK_Guevesa_Kasrkin_Cables_Backpack", "BJK_Guevesa_Kasrkin_Cables_Backpack_Alt", "BJK_Admech_Tek_Backpack"};
    };
};

class ItemInfo;
class EventHandlers;
class CBA_Extended_EventHandlers_base;
class CfgVehicles {
    // LR Radio & Backpacks
    class Bag_Base;
    class BJK_FireWarrior_Backpack : Bag_Base {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Backpack";
        isbackpack = 1;
        reversed = 1;
        scopeArsenal = 2;
        scope = 2;
        picture = "\40k_tau\Weapons\Definitions\UI\Backpack.paa";
        model = "40k_tau\Backpack\Strike_backpack.p3d";
        maximumLoad = 750;
        mass = 50;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_FireWarrior_Backpack_CO.paa"};
        _generalMacro = "BJK_FireWarrior_Backpack";
        tf_dialog = "rt1523g_radio_dialog";
        // clang-format off
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        // clang-format on
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "digital_lr";
    };
    class BJK_FireWarrior_Backpack_Medical : BJK_FireWarrior_Backpack {
        displayName = "[Ba'Y JK] Fire Warrior Backpack (Medical)";
        scopeArsenal = 2;
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_FireWarrior_Backpack_Medical_CO.paa"};
        _generalMacro = "BJK_FireWarrior_Backpack_Medical";
    };
    class BJK_Guevesa_Kasrkin_Backpack : Bag_Base {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        isbackpack = 1;
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Powerpack";
        picture = "\CadFoot\Icon\KasrkinBackpack_ca.paa";
        model = "\CadFoot\Model\CadianKasrkinBackpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Guevesa_Kasrkin_Backpack_CO.paa"};
        maximumLoad = 750;
        _generalMacro = "BJK_Guevesa_Kasrkin_Backpack";
        tf_dialog = "rt1523g_radio_dialog";
        // clang-format off
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        // clang-format on
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "digital_lr";
    };
    class BJK_Guevesa_Kasrkin_Cables_Backpack : Bag_Base {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        isbackpack = 1;
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Powerpack (Cables)";
        picture = "\IC_CAD_inf\Backpacks\data\kasr_pack_ca.paa";
        model = "\IC_CAD_inf\Backpacks\ic_cad_kasr_pack";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Guevesa_Kasrkin_Backpack_Cables_CO.paa"};
        maximumLoad = 750;
        _generalMacro = "BJK_Guevesa_Kasrkin_Cables_Backpack";
        tf_dialog = "rt1523g_radio_dialog";
        // clang-format off
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        // clang-format on
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "digital_lr";
    };
    class BJK_Guevesa_Kasrkin_Cables_Backpack_Alt : BJK_Guevesa_Kasrkin_Cables_Backpack {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Powerpack (Cables, Alternate)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Guevesa_Kasrkin_Backpack_Cables_CO2.paa"};
        _generalMacro = "BJK_Guevesa_Kasrkin_Cables_Backpack_Alt";
    };

    // Admech Backpack
    class TIOW_ADMECH_TEK_BACK;
    class BJK_Admech_Tek_Backpack : TIOW_ADMECH_TEK_BACK {
        author = "JCaleb2014";
        scope = 2;
        scopearsenal = 2;
        displayName = "[Ba'Y JK] Tech-Priest Backpack";
        maximumLoad = 750;
        _generalMacro = "BJK_Admech_Tek_Backpack";
        tf_dialog = "rt1523g_radio_dialog";
        // clang-format off
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        // clang-format on
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "digital_lr";
    };
    class IC_CAD_assaultpack_beige_03;
    class BJK_Guevesa_Backpack : IC_CAD_assaultpack_beige_03 {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        isbackpack = 1;
        maximumLoad = 750;
        displayName = "[Ba'Y JK] Gue'vesa Backpack";
        model = "\IC_CAD_inf\Backpacks\Assault_pack_03";
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Guevesa_Backpack_CO.paa"};
    };
    class BJK_Guevesa_Backpack_Medical : IC_CAD_assaultpack_beige_03 {
        maximumLoad = 750;
        displayName = "[Ba'Y JK] Gue'vesa Backpack (Medical)";
        model = "\IC_CAD_inf\Backpacks\Assault_pack_03";
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Guevesa_Backpack_Medical_CO.paa"};
    };
};

class CfgMods {
    author = "JCaleb2014";
    timepacked = "1650387927";
};