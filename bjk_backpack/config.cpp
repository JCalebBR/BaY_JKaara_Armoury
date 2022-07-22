#define _ARMA_

class CfgPatches {
    class BaY_JKaara_Armory_Backpack {
        name = "Ba'Y J'Kaara Armory (Backpack)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_Tau_Backpacks", "IC_Cadia", "IC_Guevesa", "CadFoot", "TIOW_Admech", "IC_StormTrooper"};
        units[] = {"BJK_Strike_Backpack", "BJK_Strike_Backpack_Shasui", "BJK_Strike_Backpack_Medical", "BJK_Breacher_Backpack", "BJK_Breacher_Backpack_Shasui", "BJK_Pathfinder_Backpack", "BJK_Pathfinder_Backpack_Ion", "BJK_Pathfinder_Backpack_Expl", "BJK_Pathfinder_Backpack_Rail", "BJK_Pathfinder_Backpack_Shasui", "BJK_Guevesa_Kasrkin_Backpack", "BJK_Guevesa_Kasrkin_Cables_Backpack", "BJK_Guevesa_Kasrkin_Cables_Backpack_Alt", "BJK_Admech_Tek_Backpack"};
    };
};

class ItemInfo;
class EventHandlers;
class CBA_Extended_EventHandlers_base;
class CfgVehicles {
    // Tau Backpacks
    class TIOW_Tau_Bck_Strike;
    class BJK_Strike_Backpack : TIOW_Tau_Bck_Strike {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Backpack (Strike)";
        isbackpack = 1;
        reversed = 1;
        scopeArsenal = 2;
        scope = 2;
        maximumLoad = 750;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Strike_Backpack_CO.paa"};
    };
    class TIOW_Tau_Bck_Strike_Shasui;
    class BJK_Strike_Backpack_Shasui : TIOW_Tau_Bck_Strike_Shasui {
        author = "JCaleb2014";
        scopeArsenal = 2;
        scope = 2;
        displayName = "[Ba'Y JK] Fire Warrior Backpack (Strike, Shas'Ui)";
        model = "40k_tau\Backpack\Strike_shasui_backpack.p3d";
        maximumLoad = 750;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Strike_Backpack_CO.paa"};
        _generalMacro = "BJK_Strike_Backpack_Shasui";
        tf_dialog = "rt1523g_radio_dialog";
        // clang-format off
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        // clang-format on
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "digital_lr";
    };
    class BJK_Strike_Backpack_Medical : BJK_Strike_Backpack_Shasui {
        displayName = "[Ba'Y JK] Fire Warrior Backpack (Strike, Medical)";
        scopeArsenal = 2;
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Strike_Backpack_Medical_CO.paa"};
        _generalMacro = "BJK_Strike_Backpack_Medical";
    };

    class TIOW_Tau_Bck_Breacher;
    class BJK_Breacher_Backpack : TIOW_Tau_Bck_Breacher {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Backpack (Breacher)";
        isbackpack = 1;
        reversed = 1;
        scopeArsenal = 2;
        scope = 2;
        maximumLoad = 750;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Strike_Backpack_CO.paa"};
    };
    class TIOW_Tau_Bck_Breacher_Shasui;
    class BJK_Breacher_Backpack_Shasui : TIOW_Tau_Bck_Breacher_Shasui {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Backpack (Breacher, Shas'Ui)";
        isbackpack = 1;
        reversed = 1;
        scopeArsenal = 2;
        scope = 2;
        maximumLoad = 750;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Strike_Backpack_CO.paa"};
        _generalMacro = "BJK_Breacher_Backpack_Shasui";
        tf_dialog = "rt1523g_radio_dialog";
        // clang-format off
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        // clang-format on
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "digital_lr";
    };

    class TIOW_Tau_Bck_Phndr;
    class BJK_Pathfinder_Backpack : TIOW_Tau_Bck_Phndr {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Backpack (Pathfinder)";
        scopeArsenal = 2;
        scope = 2;
        model = "40k_tau\Backpack\Pathfinder_backpack.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Pathfinder_Backpack_CA.paa"};
    };
    class TIOW_Tau_Bck_Phndr_Ion;
    class BJK_Pathfinder_Backpack_Ion : TIOW_Tau_Bck_Phndr_Ion {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Backpack (Pathfinder, Ion Rifle)";
        scopeArsenal = 2;
        scope = 2;
        model = "40k_tau\Backpack\Ion_Rifle_Backpack.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Pathfinder_Backpack_CA2.paa"};
    };
    class TIOW_Tau_Bck_Phndr_Expl;
    class BJK_Pathfinder_Backpack_Expl : TIOW_Tau_Bck_Phndr_Expl {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Backpack (Pathfinder, Explosives)";
        scopeArsenal = 2;
        scope = 2;
        model = "40k_tau\Backpack\Explosives_backpack.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Pathfinder_Backpack_CA2.paa"};
    };
    class TIOW_Tau_Bck_Phndr_Rail;
    class BJK_Pathfinder_Backpack_Rail : TIOW_Tau_Bck_Phndr_Rail {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Backpack (Pathfinder, Rail Rifle)";
        scopeArsenal = 2;
        scope = 2;
        model = "40k_tau\Backpack\Rail_Rifle_Backpack.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Pathfinder_Backpack_CA.paa"};
    };
    class TIOW_Tau_Bck_Phndr_Shasui;
    class BJK_Pathfinder_Backpack_Shasui : TIOW_Tau_Bck_Phndr_Shasui {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Backpack (Pathfinder, Shas'Ui)";
        scopeArsenal = 2;
        scope = 2;
        model = "40k_tau\Backpack\Pathfinder_Shasui_backpack.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_backpack\Textures\BJK_Pathfinder_Backpack_CA2.paa"};
        _generalMacro = "BJK_Pathfinder_Backpack_Shasui";
        tf_dialog = "rt1523g_radio_dialog";
        // clang-format off
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        // clang-format on
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "digital_lr";
    };

    // Guevesa Backpacks
    class Bag_Base;
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