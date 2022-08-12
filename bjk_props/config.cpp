class CfgPatches {
    class BaY_JKaara_Armory_Props {
        name = "Ba'Y J'Kaara Armory (Props)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        units[] = {"BJK_Tau_Box", "BJK_Tau_Crate", "BJK_Tau_VehiclePad", "BJK_Tau_Bunker", "BJK_Tau_Shield", "BJK_Tau_ShieldGenerator"};
        requiredAddons[] = {"A3_Characters_F", "A3_static_f", "Dos_40k_Tau_Props"};
    };
};

class CfgEditorCategories {
    class BJK_Props {
        displayName = "Ba'Y J'Kaara Props";
        priority = 1;
        side = 1;
    };
};

class CfgEditorSubcategories {
    class BJK_Prop {
        displayName = "Tau Props";
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
        faction = "Empty";
        vehicleClass = "Objects";
        editorCategory = "BJK_Props";
        editorSubcategory = "BJK_Prop";
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
        faction = "Empty";
        vehicleClass = "Objects";
        editorCategory = "BJK_Props";
        editorSubcategory = "BJK_Prop";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_Crate_CO.paa"};
    };
    class Dos_Tau_Pad2;
    class BJK_Tau_VehiclePad : Dos_Tau_Pad2 {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Tau Vehicle Pad";
        author = "JCaleb2014";
        faction = "Empty";
        vehicleClass = "Objects";
        editorCategory = "BJK_Props";
        editorSubcategory = "BJK_Prop";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_VehiclePad_CO.paa"};
    };
    class Dos_Tau_B1;
    class BJK_Tau_Bunker : Dos_Tau_B1 {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Tau Bunker";
        author = "JCaleb2014";
        faction = "Empty";
        vehicleClass = "Objects";
        editorCategory = "BJK_Props";
        editorSubcategory = "BJK_Prop";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_Bunker_CO.paa"};
    };
    class TIOW_TauTerrain_Anteena;

    class House;
    class BJK_Tau_Shield : House {
        armor = 2000000;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Tau Shield";
        faction = "Empty";
        vehicleClass = "Objects";
        editorCategory = "BJK_Props";
        editorSubcategory = "BJK_Prop";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_Shield_CA.paa"};
        model = "BaY_JKaara_Armoury\bjk_props\Models\BJK_Tau_Shield.p3d";
    };
    class BJK_Tau_ShieldGenerator : House {
        armor = 10000;
        cost = 1;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Shield Generator";
        faction = "Empty";
        vehicleClass = "Objects";
        editorCategory = "BJK_Props";
        editorSubcategory = "BJK_Prop";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\40k_tau\Tau_Terrain\data\Anteena_CA.paa"};
        model = "\40k_tau\Tau_Terrain\Anteena.p3d";
        class UserActions {
            class ShieldOn {
                displayName = "<t color='#04B45F'>Activate Shield";
                position = "useraction";
                radius = 3;
                onlyForPlayer = 1;
                condition = "count(attachedObjects this) < 1";
                // clang-format off
                statement = "[this] execvm ""\BaY_JKaara_Armoury\bjk_props\Scripts\init_shield.sqf"";";
                // clang-format on
            };
            class ShieldOff : ShieldOn {
                displayName = "<t color='#FE2E2E'>Deactivate Shield";
                condition = "count(attachedObjects this) > 0";
                // clang-format off
                statement = "{deleteVehicle _x} forEach attachedObjects this;";
                // clang-format on
            };
        };
    };
};
