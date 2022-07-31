#define _ARMA_

class CfgPatches {
    class BaY_JKaara_Armory_Uniform {
        name = "Ba'Y J'Kaara Armory (Uniform)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_Tau_Gear", "TIOW_40k_Tau", "IC_Cadia", "IC_Guevesa", "CadFoot", "TIOW_Admech"};
        units[] = {"BJK_Strike", "BJK_Strike_Ethereal", "BJK_EarthCaste_Crewman", "BJK_WaterCaste", "BJK_Pathfinder", "BJK_WC_BodyGuard", "BJK_Guevesa_Kasrkin_Base", "BJK_Guevesa_Kasrkin", "BJK_Guevesa_Kasrkin_Alt", "BJK_Guevesa_Base", "BJK_SpaceMarine_Mk7_Tactical", "BJK_Techpriest"};
    };
};

class ItemInfo;
class CfgWeapons {
    // Tau Uniforms
    class U_I_CombatUniform;
    class UniformItem;
    class BJK_Strike_Uniform : U_I_CombatUniform {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Strike Uniform";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        picture = "\40k_tau\Weapons\Definitions\UI\Uniform.paa";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Strike_Uniform_Armour_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Strike_Uniform_Cloth_CO.paa"};
        class ItemInfo : UniformItem {
            uniformModel = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
            uniformClass = "BJK_Strike";
            containerClass = "Supply500";
            mass = 40;
            class HitpointsProtectionInfo {
                class Body {
                    hitpointName = "HitBody";
                    armor = 3;
                    passThrough = 0.75;
                };
            };
        };
    };
    class BJK_Strike_Uniform_Ethereal : BJK_Strike_Uniform {
        displayName = "[Ba'Y JK] Ethereal Uniform";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Strike_Uniform_Armour_Ethereal_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Strike_Uniform_Cloth_CO.paa"};
        hiddenSelectionsMaterials[] = {"BaY_JKaara_Armoury\bjk_uniform\Materials\BJK_Strike_Uniform_Armour_Ethereal.rvmat"};
        class ItemInfo : ItemInfo {
            uniformClass = "BJK_Strike_Ethereal";
        };
    };
    class U_TIOW_Pathfinder;
    class BJK_Pathfinder_Uniform : U_TIOW_Pathfinder {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Pathfinder Uniform";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Strike_Uniform_Armour_CO", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Pathfinder_Uniform_CO.paa"};
        class ItemInfo : ItemInfo {
            uniformClass = "BJK_Pathfinder";
            containerClass = "Supply500";
            class HitpointsProtectionInfo {
                class Body {
                    hitpointName = "HitBody";
                    armor = 3;
                    passThrough = 0.75;
                };
            };
        };
    };
    class BJK_WC_BodyGuard_Uniform : BJK_Pathfinder_Uniform {
        displayName = "[Ba'Y JK] Water Caste Body Guard Uniform";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_WC_BodyGuard_Uniform_Armour_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Pathfinder_Uniform_CO.paa"};
        class ItemInfo : ItemInfo {
            uniformClass = "BJK_WC_BodyGuard";
        };
    };
    class U_TIOW_Air_Caste_Pilot;
    class BJK_EarthCaste_Uniform : U_TIOW_Air_Caste_Pilot {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Earth Caste Uniform";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_EarthCaste_Uniform_Bottom_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_EarthCaste_Uniform_Top_CO.paa"};
        class ItemInfo : ItemInfo {
            uniformClass = "BJK_EarthCaste_Crewman";
            containerClass = "Supply500";
            class HitpointsProtectionInfo {
                class Body {
                    hitpointName = "HitBody";
                    armor = 3;
                    passThrough = 0.75;
                };
            };
        };
    };
    class BJK_WaterCaste_Uniform : BJK_EarthCaste_Uniform {
        displayName = "[Ba'Y JK] Water Caste Uniform";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_WaterCaste_Uniform_Bottom_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_WaterCaste_Uniform_Top_CO.paa"};
        class ItemInfo : ItemInfo {
            uniformClass = "BJK_WaterCaste";
        };
    };

    // Gue'vesa Uniforms
    class TIOW_CadKasrUni_836;
    class BJK_Guevesa_Kasrkin_Uniform_Base : TIOW_CadKasrUni_836 {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Uniform (No Camo)";
        hiddenSelections[] = {"camo", "camoB"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Uniform_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Uniform_NoCamo.paa"};
        class ItemInfo : UniformItem {
            uniformClass = "BJK_Guevesa_Kasrkin_Base";
            containerClass = "Supply500";
            mass = 40;
            class Body {
                hitpointName = "HitBody";
                armor = 3;
                passThrough = 0.75;
            };
        };
    };
    class BJK_Guevesa_Kasrkin_Uniform : BJK_Guevesa_Kasrkin_Uniform_Base {
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Uniform";
        hiddenSelections[] = {"camo", "camoB"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Kasrkin_Uniform_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_CO2.paa"};
        class ItemInfo : UniformItem {
            uniformClass = "BJK_Guevesa_Kasrkin";
            containerClass = "Supply500";
            mass = 60;
        };
    };
    class BJK_Guevesa_Kasrkin_Uniform_Alt : BJK_Guevesa_Kasrkin_Uniform_Base {
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Uniform (Alternate)";
        hiddenSelections[] = {"camo", "camoB"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Kasrkin_Uniform_CO2.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_CO4.paa"};
        class ItemInfo : UniformItem {
            uniformClass = "BJK_Guevesa_Kasrkin_Alt";
            containerClass = "Supply500";
            mass = 60;
        };
    };
    class IC_CAD_U_836_2_B;
    class BJK_Guevesa_Uniform : IC_CAD_U_836_2_B {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Gue'vesa Uniform";
        hiddenSelections[] = {"camo1", "camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Uniform_Pants_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Uniform_Top_CO.paa"};
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "BJK_Guevesa_Base";
            containerClass = "Supply500";
            mass = 80;
            class Body {
                hitpointName = "HitBody";
                armor = 3;
                passThrough = 0.75;
            };
        };
    };
    class U_TIOW_Comissar;
    class BJK_Guevesa_Commandant_Uniform : U_TIOW_Comissar {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        model = "\TIOW_IG_HQ\Comissar\Krieg_Comissar.p3d";
        displayName = "[Ba'Y JK] Gue'vesa Commandant Uniform";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Commandant_Uniform_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Commandant_Coat_CO.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo", "camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Commandant_Uniform_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Commandant_Coat_CO.paa"};
            uniformClass = "BJK_Guevesa_Commandant";
            uniformModel = "\TIOW_IG_HQ\Comissar\Krieg_Comissar.p3d";
            containerClass = "Supply500";
            mass = 50;
            class Body {
                hitpointName = "HitBody";
                armor = 3;
                passThrough = 0.75;
            };
        };
    };
    class IC_CadUExtraTan_U_B;
    class BJK_Guevesa_Stormtrooper_Uniform : IC_CadUExtraTan_U_B {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Gue'vesa Stormtrooper Fatigues";
        hiddenSelections[] = {"camo1", "camo", "camo2"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Stormtrooper_Uniform_Pants_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Stormtrooper_Uniform_Top_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Stormtrooper_Uniform_Extra_CO.paa"};
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "BJK_Guevesa_Stormtrooper";
            containerClass = "Supply500";
            hiddenSelections[] = {"camo1", "camo", "camo2"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Stormtrooper_Uniform_Pants_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Stormtrooper_Uniform_Top_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Stormtrooper_Uniform_Extra_CO.paa"};
            class Body {
                hitpointName = "HitBody";
                armor = 3;
                passThrough = 0.75;
            };
        };
    };

    // Admech Uniforms
    class TIOW_AM_Alpha_UNI;
    class BJK_Admech_Alpha_Robes : TIOW_AM_Alpha_UNI {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[Ba'Y JK] Alpha Robes";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Admech_Alpha_Robes_CO.paa"};
        class ItemInfo : ItemInfo {
            uniformClass = "BJK_Techpriest";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Admech_Alpha_Robes_CO.paa"};
            containerClass = "Supply500";
            class Body {
                hitpointName = "HitBody";
                armor = 3;
                passThrough = 0.75;
            };
        };
    };

    // Renegade Uniforms
    class IC_ChaosRenegade_U_V2Red_B;
    class BJK_Renegade_Uniform : IC_ChaosRenegade_U_V2Red_B {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[Ba'Y JK] Renegade Fatigues";
        hiddenSelections[] = {"camo1", "camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Renegade_Uniform_Pants_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Renegade_Uniform_Top_CO.paa"};
        class ItemInfo : ItemInfo {
            uniformClass = "BJK_Renegade";
            hiddenSelections[] = {"camo1", "camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Renegade_Uniform_Pants_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Renegade_Uniform_Top_CO.paa"};
            containerClass = "Supply500";
            class HitpointsProtectionInfo {
                class Body {
                    hitpointName = "HitBody";
                    armor = 3;
                    passThrough = 0.75;
                };
            };
        };
    };

    // Space Marine Power Armor
    class TIOW_Mk7PowerArmor_1_DA;
    class BJK_SpaceMarine_Mk7_PowerArmor : TIOW_Mk7PowerArmor_1_DA {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Mk 7 Power Armor";
        hiddenSelections[] = {"Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_LostBrother_Body_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_LostBrother_Body2_CO.paa"};
        class ItemInfo : ItemInfo {
            uniformClass = "BJK_SpaceMarine_Mk7_Tactical";
        };
    };
};

class EventHandlers;
class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    // Tau Men
    class I_soldier_base_F;
    class I_Soldier_F : I_soldier_base_F {
        class HitPoints;
    };
    class BJK_Strike : I_Soldier_F {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Fire Warrior (Strike)";
        faction = "BJK_F";
        editorSubcategory = "BJK_M";
        identityTypes[] = {"Tau", "LanguageENGB_F"};
        uniformClass = "BJK_Strike_Uniform";
        backpack = "BA_Fire_Warrior_BCK";
        model = "\40k_tau\Fire_Warrior\Fire_Warrior.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Strike_Uniform_Armour_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Strike_Uniform_Cloth_CO.paa"};
        linkedItems[] = {"ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "BJK_Strike_Helmet", "BJK_Strike_Pauldrons"};
        respawnLinkedItems[] = {"ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "BJK_Strike_Helmet", "BJK_Strike_Pauldrons"};
        weapons[] = {"Put", "Throw"};
        respawnWeapons[] = {"Put", "Throw"};
        magazines[] = {};
        respawnmagazines[] = {};
        class HitPoints : HitPoints {
            class HitFace {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.80000001;
                radius = 0.079999998;
                explosionShielding = 0.1;
                minimalHit = 0.0099999998;
            };
            class HitNeck : HitFace {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.80000001;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.0099999998;
            };
            class HitHead : HitNeck {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.80000001;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.0099999998;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis : HitHead {
                armor = 8;
                material = -1;
                name = "pelvis";
                passThrough = 0.80000001;
                radius = 0.23999999;
                explosionShielding = 3;
                visual = "injury_body";
                minimalHit = 0.0099999998;
                depends = "";
            };
            class HitAbdomen : HitPelvis {
                armor = 6;
                material = -1;
                name = "spine1";
                passThrough = 0.80000001;
                radius = 0.16;
                explosionShielding = 3;
                visual = "injury_body";
                minimalHit = 0.0099999998;
            };
            class HitDiaphragm : HitAbdomen {
                armor = 6;
                material = -1;
                name = "spine2";
                passThrough = 0.33000001;
                radius = 0.18000001;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.0099999998;
            };
            class HitChest : HitDiaphragm {
                armor = 8;
                material = -1;
                name = "spine3";
                passThrough = 0.33000001;
                radius = 0.18000001;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.0099999998;
            };
            class HitBody : HitChest {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.0099999998;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms : HitBody {
                armor = 6;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 3;
                visual = "injury_hands";
                minimalHit = 0.0099999998;
                depends = "0";
            };
            class HitHands : HitArms {
                armor = 6;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.0099999998;
                depends = "HitArms";
            };
            class HitLegs : HitHands {
                armor = 6;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.14;
                explosionShielding = 3;
                visual = "injury_legs";
                minimalHit = 0.0099999998;
                depends = "0";
            };
            class Incapacitated : HitLegs {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 3;
                visual = "";
                minimalHit = 0;
                depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };
            class HitLeftArm {
                armor = 6;
                material = -1;
                name = "hand_l";
                passThrough = 1;
                radius = 0.079999998;
                explosionShielding = 3;
                visual = "injury_hands";
                minimalHit = 0.0099999998;
            };
            class HitRightArm : HitLeftArm {
                name = "hand_r";
            };
            class HitLeftLeg {
                armor = 6;
                material = -1;
                name = "leg_l";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 3;
                visual = "injury_legs";
                minimalHit = 0.0099999998;
            };
            class HitRightLeg : HitLeftLeg {
                name = "leg_r";
            };
        };
    };
    class BJK_Strike_Ethereal : BJK_Strike {
        displayName = "Fire Warrior (Aun'La)";
        uniformClass = "BJK_Strike_Uniform_Ethereal";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Strike_Uniform_Armour_Ethereal_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Strike_Uniform_Cloth_CO.paa"};
        hiddenSelectionsMaterials[] = {"BaY_JKaara_Armoury\bjk_uniform\Materials\BJK_Strike_Uniform_Armour_Ethereal.rvmat"};
    };
    class TIOW_Air_Caste_Pilot_B;
    class BJK_EarthCaste_Crewman : TIOW_Air_Caste_Pilot_B {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        identityTypes[] = {"Tau", "LanguageENGB_F"};
        uniformClass = "BJK_EarthCaste_Crew";
        side = 1;
        faction = "BJK_F";
        editorSubcategory = "BJK_M";
        displayName = "Earth Caste Crewman";
        weapons[] = {"BJK_pulse_pistol_EC", "Throw", "Put"};
        respawnWeapons[] = {"BJK_pulse_pistol_EC", "Throw", "Put"};
        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};
        magazines[] = {"BJK_pulse_pistol_mag", "BJK_pulse_pistol_mag"};
        respawnMagazines[] = {"BJK_pulse_pistol_mag", "BJK_pulse_pistol_mag"};
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_EarthCaste_Uniform_Bottom_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_EarthCaste_Uniform_Top_CO.paa"};
    };
    class BJK_WaterCaste : BJK_EarthCaste_Crewman {
        uniformClass = "BJK_WaterCaste_Crew";
        displayName = "Water Caste Warrior";
        weapons[] = {"BJK_pulse_pistol_WC", "Throw", "Put"};
        respawnWeapons[] = {"BJK_pulse_pistol_WC", "Throw", "Put"};
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_WaterCaste_Uniform_Bottom_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_WaterCaste_Uniform_Top_CO.paa"};
    };
    class TIOW_Pathfinder;
    class BJK_Pathfinder : TIOW_Pathfinder {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Fire Warrior (Pathfinder)";
        faction = "BJK_F";
        editorSubcategory = "BJK_M";
        uniformClass = "BJK_Pathfinder_Uniform";
        backpack = "BJK_Pathfinder_Backpack";
        linkedItems[] = {"ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "BJK_Pathfinder_Helmet", "BJK_Pathfinder_Pauldrons"};
        respawnLinkedItems[] = {"ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "BJK_Pathfinder_Helmet", "BJK_Pathfinder_Pauldrons"};
        weapons[] = {"Put", "Throw"};
        respawnWeapons[] = {"Put", "Throw"};
        magazines[] = {};
        respawnmagazines[] = {};
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Strike_Uniform_Armour_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Pathfinder_Uniform_CO.paa"};
        class HitPoints {
            class HitFace {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.80000001;
                radius = 0.079999998;
                explosionShielding = 0.1;
                minimalHit = 0.0099999998;
            };
            class HitNeck : HitFace {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.80000001;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.0099999998;
            };
            class HitHead : HitNeck {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.80000001;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.0099999998;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis : HitHead {
                armor = 8;
                material = -1;
                name = "pelvis";
                passThrough = 0.80000001;
                radius = 0.23999999;
                explosionShielding = 3;
                visual = "injury_body";
                minimalHit = 0.0099999998;
                depends = "";
            };
            class HitAbdomen : HitPelvis {
                armor = 6;
                material = -1;
                name = "spine1";
                passThrough = 0.80000001;
                radius = 0.16;
                explosionShielding = 3;
                visual = "injury_body";
                minimalHit = 0.0099999998;
            };
            class HitDiaphragm : HitAbdomen {
                armor = 6;
                material = -1;
                name = "spine2";
                passThrough = 0.33000001;
                radius = 0.18000001;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.0099999998;
            };
            class HitChest : HitDiaphragm {
                armor = 8;
                material = -1;
                name = "spine3";
                passThrough = 0.33000001;
                radius = 0.18000001;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.0099999998;
            };
            class HitBody : HitChest {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.0099999998;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms : HitBody {
                armor = 6;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 3;
                visual = "injury_hands";
                minimalHit = 0.0099999998;
                depends = "0";
            };
            class HitHands : HitArms {
                armor = 6;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.0099999998;
                depends = "HitArms";
            };
            class HitLegs : HitHands {
                armor = 6;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.14;
                explosionShielding = 3;
                visual = "injury_legs";
                minimalHit = 0.0099999998;
                depends = "0";
            };
            class Incapacitated : HitLegs {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 3;
                visual = "";
                minimalHit = 0;
                depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };
            class HitLeftArm {
                armor = 6;
                material = -1;
                name = "hand_l";
                passThrough = 1;
                radius = 0.079999998;
                explosionShielding = 3;
                visual = "injury_hands";
                minimalHit = 0.0099999998;
            };
            class HitRightArm : HitLeftArm {
                name = "hand_r";
            };
            class HitLeftLeg {
                armor = 6;
                material = -1;
                name = "leg_l";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 3;
                visual = "injury_legs";
                minimalHit = 0.0099999998;
            };
            class HitRightLeg : HitLeftLeg {
                name = "leg_r";
            };
        };
    };
    class BJK_WC_BodyGuard : BJK_Pathfinder {
        displayName = "Water Caste Body Guard";
        uniformClass = "BJK_WC_BodyGuard_Uniform";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_WC_BodyGuard_Uniform_Armour_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Pathfinder_Uniform_CO.paa"};
    };

    // Gue'vesa Uniforms
    class TIOW_Cad_Kasr836th;
    class BJK_Guevesa_Kasrkin_Base : TIOW_Cad_Kasr836th {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Gue'vesa Kasrkin (No Camo)";
        faction = "BJK_F";
        editorSubcategory = "BJK_M";
        uniformAccessories[] = {};
        uniformClass = "BJK_Guevesa_Kasrkin_Uniform_Base";
        hiddenSelections[] = {"camo", "camoB"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Uniform_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Uniform_NoCamo.paa"};
    };
    class BJK_Guevesa_Kasrkin : BJK_Guevesa_Kasrkin_Base {
        displayName = "Gue'vesa Kasrkin";
        uniformClass = "BJK_Guevesa_Kasrkin_Uniform";
        hiddenSelections[] = {"camo", "camoB"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Kasrkin_Uniform_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_CO2.paa"};
    };
    class BJK_Guevesa_Kasrkin_Alt : BJK_Guevesa_Kasrkin_Base {
        displayName = "Gue'vesa Kasrkin (Alternate)";
        uniformClass = "BJK_Guevesa_Kasrkin_Uniform_Alt";
        hiddenSelections[] = {"camo", "camoB"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Kasrkin_Uniform_CO2.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_CO4.paa"};
    };
    class IC_CAD_inf_836_B;
    class BJK_Guevesa_Base : IC_CAD_inf_836_B {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Gue'vesa";
        uniformClass = "BJK_Guevesa_Uniform";
        hiddenSelections[] = {"camo1", "camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Uniform_Pants_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Uniform_Top_CO.paa"};
    };
    class TIOW_Comissar;
    class BJK_Guevesa_Commandant : TIOW_Comissar {
        displayName = "Gue'vesa Commandant";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        uniformClass = "BJK_Guevesa_Commandant_Uniform";
        faction = "BJK_F";
        editorSubcategory = "BJK_M";
        model = "\TIOW_IG_HQ\Comissar\Krieg_Comissar.p3d";
        weapons[] = {"Throw", "Put", "TIOW_bolt_pistol"};
        respawnWeapons[] = {"Throw", "Put", "TIOW_bolt_pistol"};
        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};
        magazines[] = {"TIOW_IGBoltPistol_Mag", "TIOW_IGBoltPistol_Mag", "TIOW_IGBoltPistol_Mag", "TIOW_IGBoltPistol_Mag"};
        respawnMagazines[] = {"TIOW_IGBoltPistol_Mag", "TIOW_IGBoltPistol_Mag", "TIOW_IGBoltPistol_Mag", "TIOW_IGBoltPistol_Mag"};
        linkedItems[] = {"TIOW_Bionic_Eye", "TIOW_Comissar_Cap"};
        respawnLinkedItems[] = {"TIOW_Bionic_Eye", "TIOW_Comissar_Cap"};
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Commandant_Uniform_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Commandant_Coat_CO.paa"};
    };
    class IC_CadUExtraTan_B;
    class BJK_Guevesa_Stormtrooper : IC_CadUExtraTan_B {
        author = "JCaleb2014";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        linkedItems[] = {"IC_Stormtrooper_helmet", "ic_stormtrooper_Vest1", "ic_StormtrooperMask", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        side = 1;
        faction = "BJK_F";
        editorSubcategory = "BJK_M";
        displayName = "Gue'vesa Stormtrooper";
        uniformClass = "BJK_Guevesa_Stormtrooper_Uniform";
        backpack = "IC_Stormtrooper_Powerpack_01";
        hiddenSelections[] = {"camo1", "camo", "camo2"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Stormtrooper_Uniform_Pants_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Stormtrooper_Uniform_Top_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Guevesa_Stormtrooper_Uniform_Extra_CO.paa"};
    };

    // Admech Uniforms
    class TIOW_AM_Techpriest;
    class BJK_Techpriest : TIOW_AM_Techpriest {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[Ba'Y JK] Tech-Priest";
        faction = "BJK_F";
        editorSubcategory = "BJK_M";
        uniformclass = "BJK_Admech_Alpha_Robes";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Admech_Alpha_Robes_CO.paa"};
        backpack = "BJK_Admech_Tek_Backpack";
        linkedItems[] = {"BJK_Admech_Alpha_Hood", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        RespawnLinkedItems[] = {"BJK_Admech_Alpha_Hood", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"Throw", "Put", "TIOW_ARC_PISTOL_1"};
        respawnWeapons[] = {"Throw", "Put", "TIOW_ARC_PISTOL_1"};
        magazines[] = {"TIOW_Arc_Pistol_Mag", "TIOW_Arc_Pistol_Mag", "TIOW_Arc_Pistol_Mag", "TIOW_Arc_Pistol_Mag"};
        respawnMagazines[] = {"TIOW_Arc_Pistol_Mag", "TIOW_Arc_Pistol_Mag", "TIOW_Arc_Pistol_Mag", "TIOW_Arc_Pistol_Mag"};
    };

    // Renegade Uniforms
    class IC_chaosRenegade_V2_B;
    class BJK_Renegade : IC_chaosRenegade_V2_B {
        author = "JCaleb2014";
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
        linkedItems[] = {"ic_ChaosHelmV2", "", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        side = 0;
        faction = "BJK_IR";
        editorSubcategory = "BJK_M";
        displayName = "Imperial Renegade";
        uniformClass = "BJK_Renegade_Uniform";
        backpack = "";
        hiddenSelections[] = {"camo1", "camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Renegade_Uniform_Pants_CO.paa", "BaY_JKaara_Armoury\bjk_uniform\Textures\BJK_Renegade_Uniform_Top_CO.paa"};
    };

    // Space Marines
    class TIOW_Tactical_DA_1;
    class BJK_SpaceMarine_Mk7_Tactical : TIOW_Tactical_DA_1 {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Tau Tactical Marine (Mk. VII)";
        uniformClass = "BJK_SpaceMarine_Mk7_PowerArmor";
        faction = "BJK_F";
        editorSubcategory = "BJK_SM";
        hiddenSelections[] = {"Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_LostBrother_Body_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_LostBrother_Body2_CO.paa"};
        Items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        RespawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        backpack = "TIOW_Mk4Powerpack_DA";
        linkedItems[] = {"ItemGPS", "BJK_SpaceMarine_Mk7_Pauldrons", "TIOW_MK7Helmet_DA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        RespawnlinkedItems[] = {"ItemGPS", "BJK_SpaceMarine_Mk7_Pauldrons", "TIOW_MK7Helmet_DA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"Throw", "Put", "TIOW_GodwynBoltgun_1"};
        magazines[] = {"TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_sm_frag_grenade_mag", "TIOW_sm_frag_grenade_mag", "TIOW_sm_krak_grenade_mag", "TIOW_sm_smoke_grenade_mag"};
        respawnweapons[] = {"Throw", "Put", "TIOW_GodwynBoltgun_1"};
        respawnMagazines[] = {"TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_30rnd_GodwynBoltgunMag", "TIOW_sm_frag_grenade_mag", "TIOW_sm_frag_grenade_mag", "TIOW_sm_krak_grenade_mag", "TIOW_sm_smoke_grenade_mag"};
    };
};

class CfgMods {
    author = "JCaleb2014";
    timepacked = "1650387927";
};