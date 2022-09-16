class CfgPatches {
    class BaY_JKaara_Armory_Props {
        name = "Ba'Y J'Kaara Armory (Props)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        units[] = {"BJK_Tau_Box", "BJK_Tau_Crate", "BJK_Tau_VehiclePad", "BJK_Tau_Bunker", "BJK_Tau_Shield_Dome", "BJK_Tau_Shield_Sphere", "BJK_Tau_Shield_Oval", "BJK_Tau_Shield_Generator"};
        requiredAddons[] = {"A3_Characters_F", "A3_static_f", "Dos_40k_Tau_Props", "ace_csw"};
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

class WeaponSlotsInfo;
class ACE_SelfActions;
class ACE_Actions;
class ACE_MainActions;

class CfgVehicles {
    class CAManBase {
        class ACE_SelfActions : ACE_SelfActions {
            class ace_csw_deploy {
                displayName = "Deploy Equipment";
                displayNameProgress = "Deploying Equipment";
                condition = "call ace_csw_fnc_assemble_canDeployTripod";
                statement = "call ace_csw_fnc_assemble_deployTripod";
                exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                modifierFunction = "['default', '\BaY_JKaara_Armoury\bjk_meta\logo.paa', _this select 3] call ace_interaction_fnc_modifyTeamManagementAction";
            };
        };
    };

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
    class BJK_Tau_Shield_Dome : House {
        armor = 10000;
        cost = 1;
        driveThroughEnabled = 1;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Shield Dome";
        faction = "Empty";
        vehicleClass = "Objects";
        editorCategory = "BJK_Props";
        editorSubcategory = "BJK_Prop";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_Shield_CA.paa"};
        model = "BaY_JKaara_Armoury\bjk_props\Models\BJK_Tau_Shield_Dome.p3d";
    };
    class BJK_Tau_Shield_Sphere : BJK_Tau_Shield_Dome {
        armor = 10000;
        cost = 1;
        camouflage = 100;
        driveThroughEnabled = 1;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Shield Sphere";
        faction = "Empty";
        vehicleClass = "Objects";
        editorCategory = "BJK_Props";
        editorSubcategory = "BJK_Prop";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_Shield_CA.paa"};
        model = "BaY_JKaara_Armoury\bjk_props\Models\BJK_Tau_Shield_Sphere.p3d";
    };
    class BJK_Tau_Shield_Oval : BJK_Tau_Shield_Sphere {
        displayName = "Shield Oval";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_Shield_CA.paa"};
        model = "BaY_JKaara_Armoury\bjk_props\Models\BJK_Tau_Shield_Oval.p3d";
    };
    class ace_csw_m3Tripod;
    class BJK_Tau_Shield_Generator : ace_csw_m3Tripod {
        armor = 50;
        cost = 1;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Portable Shield Generator";
        faction = "Empty";
        vehicleClass = "Objects";
        editorCategory = "BJK_Props";
        editorSubcategory = "BJK_Prop";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\40k_tau\Tau_Terrain\data\Anteena_CA.paa"};
        model = "\40k_tau\Tau_Terrain\Anteena.p3d";
        class ACE_Actions : ACE_Actions {
            class ACE_MainActions {
                displayName = "Interactions";
                selection = "";
                distance = 2;
                condition = "true";
                position = [ 0, 0, -0.4 ];
                modifierFunction = "['default', '\BaY_JKaara_Armoury\bjk_meta\logo.paa', _this select 3] call ace_interaction_fnc_modifyTeamManagementAction";
                class bjk_tau_shield_on {
                    displayName = "Activate Shield";
                    // clang-format off
                    condition = "count(attachedObjects _target) < 1 && ""BJK_Tau_Shield_Charge"" in items _player";
                    statement = "[_target,_player] execvm ""\BaY_JKaara_Armoury\bjk_props\Scripts\init_shield.sqf"";[_target, false] call ace_dragging_fnc_setCarryable;[_target, false] call ace_dragging_fnc_setDraggable;";
                    // clang-format on
                    exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                    modifierFunction = "['default', '\BaY_JKaara_Armoury\bjk_meta\logo.paa', _this select 3] call ace_interaction_fnc_modifyTeamManagementAction";
                };
                class bjk_tau_shield_off : bjk_tau_shield_on {
                    displayName = "Deactivate Shield";
                    condition = "count(attachedObjects _target) > 0";
                    // clang-format off
                    statement = "{deleteVehicle _x} forEach attachedObjects this;[_target, true] call ace_dragging_fnc_setCarryable;[_target, true] call ace_dragging_fnc_setDraggable;";
                    // clang-format on
                };
                class ace_csw_pickUp : bjk_tau_shield_on {
                    displayName = "Pickup";
                    condition = "call ace_csw_fnc_assemble_canPickupTripod && count(attachedObjects _target) < 1";
                    statement = "call ace_csw_fnc_assemble_pickupTripod";
                };
                class bjk_tau_shield_health : bjk_tau_shield_on {
                    displayName = "Check Shield Health";
                    condition = "count(attachedObjects _target) > 0";
                    // clang-format off
                    statement = "[this] execvm ""\BaY_JKaara_Armoury\bjk_props\Scripts\shield_health.sqf"";";
                    // clang-format on
                };
                class bjk_tau_generator_health : bjk_tau_shield_on {
                    displayName = "Check Generator Health";
                    condition = "true";
                    // clang-format off
                    statement = "[this] execvm ""\BaY_JKaara_Armoury\bjk_props\Scripts\generator_health.sqf"";";
                    // clang-format on
                };
            };
        };
        class ace_csw {
            disassembleTo = "BJK_Tau_ShieldGenerator_Case";
        };
    };
    class BJK_Tau_Shield_Generator_V2 : ace_csw_m3Tripod {
        armor = 100;
        cost = 1;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Portable Shield Generator";
        faction = "Empty";
        vehicleClass = "Objects";
        editorCategory = "BJK_Props";
        editorSubcategory = "BJK_Prop";
        hiddenSelections[] = {"Base", "Battery", "Cables"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_Shield_Generator_Base_CA.paa", "BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_Shield_Generator_Battery_CA.paa", "BaY_JKaara_Armoury\bjk_props\Textures\BJK_Tau_Shield_Generator_Cables_CA.paa"};
        model = "BaY_JKaara_Armoury\bjk_props\Models\BJK_Tau_Shield_Generator.p3d";
        class ACE_Actions : ACE_Actions {
            class ACE_MainActions {
                displayName = "Interactions";
                selection = "Pad";
                distance = 2;
                condition = "true";
                modifierFunction = "['default', '\BaY_JKaara_Armoury\bjk_meta\logo.paa', _this select 3] call ace_interaction_fnc_modifyTeamManagementAction";
                class bjk_tau_shield_on {
                    displayName = "Activate Shield";
                    // clang-format off
                    condition = "count(attachedObjects _target) < 1 && ""BJK_Tau_Shield_Charge"" in items _player";
                    statement = "[_target,_player] execvm ""\BaY_JKaara_Armoury\bjk_props\Scripts\init_shield.sqf"";[_target, false] call ace_dragging_fnc_setCarryable;[_target, false] call ace_dragging_fnc_setDraggable;";
                    // clang-format on
                    exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                    modifierFunction = "['default', '\BaY_JKaara_Armoury\bjk_meta\logo.paa', _this select 3] call ace_interaction_fnc_modifyTeamManagementAction";
                };
                class bjk_tau_shield_off : bjk_tau_shield_on {
                    displayName = "Deactivate Shield";
                    condition = "count(attachedObjects _target) > 0";
                    // clang-format off
                    statement = "{deleteVehicle _x} forEach attachedObjects this;[_target, true] call ace_dragging_fnc_setCarryable;[_target, true] call ace_dragging_fnc_setDraggable;";
                    // clang-format on
                };
                class ace_csw_pickUp : bjk_tau_shield_on {
                    displayName = "Pickup";
                    condition = "call ace_csw_fnc_assemble_canPickupTripod && count(attachedObjects _target) < 1";
                    statement = "call ace_csw_fnc_assemble_pickupTripod";
                };
                class bjk_tau_shield_health : bjk_tau_shield_on {
                    displayName = "Check Shield Health";
                    condition = "count(attachedObjects _target) > 0";
                    // clang-format off
                    statement = "[this] execvm ""\BaY_JKaara_Armoury\bjk_props\Scripts\shield_health.sqf"";";
                    // clang-format on
                };
                class bjk_tau_generator_health : bjk_tau_shield_on {
                    displayName = "Check Generator Health";
                    condition = "true";
                    // clang-format off
                    statement = "[this] execvm ""\BaY_JKaara_Armoury\bjk_props\Scripts\generator_health.sqf"";";
                    // clang-format on
                };
            };
        };
        class ace_csw {
            disassembleTo = "BJK_Tau_ShieldGenerator_Case";
        };
    };

    class ACE_Sunflower_Seeds_Item;
    class BJK_Tau_Shield_Charge_Item : ACE_Sunflower_Seeds_Item {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Portable Shield Charge";
        author = "JCaleb2014";
        faction = "Empty";
        vehicleClass = "Items";
    };
};

class CfgWeapons {
    class ACE_UAVBattery;
    class BJK_Tau_Shield_Charge : ACE_UAVBattery {
        displayName = "Portable Shield Charge";
        descriptionShort = "Portable Shield Charge - Used to charge the portable shield generator";
        author = "JCaleb2014";
        scope = 2;
        weight = 50;
        litter[] = {"BJK_Tau_Shield_Charge_Item"};
    };
};