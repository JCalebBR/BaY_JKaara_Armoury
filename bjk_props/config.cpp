class CfgPatches {
    class BaY_JKaara_Armory_Props {
        name = "Ba'Y J'Kaara Armory (Props)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark"};
    };
};

class CfgVehicles {
    class Dos_TAU_SB1;
    class BJK_Tau_Box : Dos_TAU_SB1 {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = "JCaleb2014";
        displayName = "Tau Box";
        editorCategory = "BJK_F";
        editorSubcategory = "BJK_P";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_Box_CO.paa"};
    };
    class Dos_TAU_LB1;
    class BJK_Tau_Crate : Dos_TAU_LB1 {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = "JCaleb2014";
        displayName = "Tau Crate";
        model = "Dos_Tau_Props\Models\TLB1.p3d";
        editorCategory = "BJK_F";
        editorSubcategory = "BJK_P";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_Crate_CO.paa"};
    };
    class Dos_Tau_Pad2;
    class BJK_Tau_VehiclePad : Dos_Tau_Pad2 {
        scope = 2;
        scopeCurator = 2;
        displayName = "Tau Vehicle Pad";
        author = "JCaleb2014";
        editorCategory = "BJK_F";
        editorSubcategory = "BJK_P";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_VehiclePad_CO.paa"};
    };
    class Dos_Tau_B1;
    class BJK_Tau_Bunker : Dos_Tau_B1 {
        scope = 2;
        scopeCurator = 2;
        displayName = "Tau Bunker";
        author = "JCaleb2014";
        editorCategory = "BJK_F";
        editorSubcategory = "BJK_P";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_Bunker_CO.paa"};
    };
};
