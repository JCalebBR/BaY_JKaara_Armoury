#define _ARMA_

class CfgPatches {
    class BaY_JKaara_Armory_Headgear {
        name = "Ba'Y J'Kaara Armory (Headgear)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_Tau_Gear", "DMCLS_weapons", "TIOW_40k_Tau", "CadFoot", "TIOW_Admech", "TIOW_Comissar", "IC_StormTrooper"};
        weapons[] = {"BJK_FireWarrior_Strike_Helmet", "BJK_FireWarrior_Strike_Helmet_Commander", "BJK_FireWarrior_Strike_Helmet_Ethereal", "BJK_FireWarrior_Strike_Helmet_Medical", "BJK_FireWarrior_Breacher_Helmet", "BJK_Tau_Headset1", "BJK_Tau_Headset2", "BJK_Tau_Headset3", "BJK_Tau_Headset4", "BJK_Tau_Headset5", "BJK_Tau_Headset_Commander1", "BJK_Tau_Headset_Commander2", "BJK_Tau_Headset_Commander3", "BJK_Tau_Headset_Commander4", "BJK_Tau_Headset_Commander5", "BJK_Tau_Headset_Medical1", "BJK_Tau_Headset_Medical2", "BJK_Tau_Headset_Medical3", "BJK_Tau_Headset_Medical4", "BJK_Tau_Headset_Medical5", "BJK_Tau_Headset_EarthCaste1", "BJK_Tau_Headset_EarthCaste2", "BJK_Tau_Headset_EarthCaste3", "BJK_Tau_Headset_EarthCaste4", "BJK_Tau_Headset_EarthCaste5", "BJK_Tau_Headset_EarthCaste_Commander1", "BJK_Tau_Headset_EarthCaste_Commander2", "BJK_Tau_Headset_EarthCaste_Commander3", "BJK_Tau_Headset_EarthCaste_Commander4", "BJK_Tau_Headset_EarthCaste_Commander5", "BJK_Tau_Headset_WaterCaste1", "BJK_Tau_Headset_WaterCaste2", "BJK_Tau_Headset_WaterCaste3", "BJK_Tau_Headset_WaterCaste4", "BJK_Tau_Headset_WaterCaste5", "BJK_Tau_Headset_WaterCaste_Commander1", "BJK_Tau_Headset_WaterCaste_Commander2", "BJK_Tau_Headset_WaterCaste_Commander3", "BJK_Tau_Headset_WaterCaste_Commander4", "BJK_Tau_Headset_WaterCaste_Commander5", "BJK_Guevesa_Helmet", "BJK_Guevesa_Helmet_Modified", "BJK_Guevesa_Helmet_Modified_Alt1", "BJK_Guevesa_Helmet_Modified_Alt2", "BJK_Guevesa_Helmet_Modified_Commander", "BJK_Guevesa_Helmet_Modified_Commander_Alt1", "BJK_Guevesa_Helmet_Modified_Commander_Alt2", "BJK_Guevesa_Kasrkin_Helmet", "BJK_Guevesa_Kasrkin_Helmet_Alt", "BJK_Guevesa_Commandant_Cap", "BJK_Admech_Alpha_Hood"};
    };
};

class ItemInfo;
class CfgWeapons {
    // Tau Headgear
    class HeadgearItem;
    class H_HelmetO_ViperSP_hex_F;
    class BJK_FireWarrior_Strike_Helmet : H_HelmetO_ViperSP_hex_F {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Strike Helmet";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = "\40k_tau\Weapons\Definitions\UI\Helmet.paa";
        model = "\40k_tau\Headgear\HelmetS.p3d";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_FireWarrior_Strike_Helmet_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_CO.paa"};
        subItems[] = {"BJK_InvisibleNVG"};
        class ItemInfo : HeadgearItem {
            mass = 10;
            uniformModel = "\40k_tau\Headgear\HelmetS.p3d";
            hiddenSelections[] = {"camo", "camo1"};
            subItems[] = {"BJK_InvisibleNVG"};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 50;
                    passThrough = 0.1;
                };
            };
        };
    };
    class BJK_FireWarrior_Strike_Helmet_Commander : BJK_FireWarrior_Strike_Helmet {
        displayName = "[Ba'Y JK] Fire Warrior Strike Helmet (Shas'Ui)";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_FireWarrior_Strike_Helmet_Commander_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Commander_CO.paa"};
    };
    class BJK_FireWarrior_Strike_Helmet_Ethereal : BJK_FireWarrior_Strike_Helmet_Commander {
        displayName = "[Ba'Y JK] Fire Warrior Strike Helmet (Aun'La)";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_FireWarrior_Strike_Helmet_Ethereal_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Commander_CO.paa"};
        hiddenSelectionsMaterials[] = {"BaY_JKaara_Armoury\bjk_headgear\Materials\BJK_FireWarrior_Strike_Helmet_Ethereal.rvmat"};
    };
    class BJK_FireWarrior_Strike_Helmet_Medical : BJK_FireWarrior_Strike_Helmet {
        displayName = "[Ba'Y JK] Fire Warrior Strike Helmet (Medical)";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_FireWarrior_Strike_Helmet_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Medical_CO.paa"};
    };
    class BJK_FireWarrior_Breacher_Helmet : BJK_FireWarrior_Strike_Helmet {
        displayName = "[Ba'Y JK] Fire Warrior Breacher Helmet";
        model = "\40k_tau\Headgear\HelmetB2.p3d";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_FireWarrior_Breacher_Helmet_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_CO.paa"};
        class ItemInfo : HeadgearItem {
            uniformModel = "\40k_tau\Headgear\HelmetB2.p3d";
        };
    };
    class TIOW_Tau_Hset1;
    class BJK_Tau_Headset1 : TIOW_Tau_Hset1 {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Tau Headset 1";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_CO.paa"};
        subItems[] = {"BJK_InvisibleNVG"};
        class ItemInfo : ItemInfo {
            subItems[] = {"BJK_InvisibleNVG"};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 50;
                    passThrough = 0.1;
                };
            };
        };
    };
    class TIOW_Tau_Hset2;
    class BJK_Tau_Headset2 : TIOW_Tau_Hset2 {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Tau Headset 2";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_CO.paa"};
        subItems[] = {"BJK_InvisibleNVG"};
        class ItemInfo : ItemInfo {
            subItems[] = {"BJK_InvisibleNVG"};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 50;
                    passThrough = 0.1;
                };
            };
        };
    };
    class TIOW_Tau_Hset3;
    class BJK_Tau_Headset3 : TIOW_Tau_Hset3 {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Tau Headset 3";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_CO.paa"};
        subItems[] = {"BJK_InvisibleNVG"};
        class ItemInfo : ItemInfo {
            subItems[] = {"BJK_InvisibleNVG"};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 50;
                    passThrough = 0.1;
                };
            };
        };
    };
    class TIOW_Tau_Hset4;
    class BJK_Tau_Headset4 : TIOW_Tau_Hset4 {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Tau Headset 4";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_CO.paa"};
        subItems[] = {"BJK_InvisibleNVG"};
        class ItemInfo : ItemInfo {
            subItems[] = {"BJK_InvisibleNVG"};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 50;
                    passThrough = 0.1;
                };
            };
        };
    };
    class TIOW_Tau_Hset5;
    class BJK_Tau_Headset5 : TIOW_Tau_Hset5 {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Tau Headset 5";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_CO.paa"};
        subItems[] = {"BJK_InvisibleNVG"};
        class ItemInfo : ItemInfo {
            subItems[] = {"BJK_InvisibleNVG"};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 50;
                    passThrough = 0.1;
                };
            };
        };
    };
    class BJK_Tau_Headset_Commander1 : BJK_Tau_Headset1 {
        displayName = "[Ba'Y JK] Tau Headset 1 (Shas'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_Commander2 : BJK_Tau_Headset2 {
        displayName = "[Ba'Y JK] Tau Headset 2 (Shas'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_Commander3 : BJK_Tau_Headset3 {
        displayName = "[Ba'Y JK] Tau Headset 3 (Shas'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_Commander4 : BJK_Tau_Headset4 {
        displayName = "[Ba'Y JK] Tau Headset 4 (Shas'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_Commander5 : BJK_Tau_Headset5 {
        displayName = "[Ba'Y JK] Tau Headset 5 (Shas'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_Medical1 : BJK_Tau_Headset1 {
        displayName = "[Ba'Y JK] Tau Headset 1 (Medical)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Medical_CO.paa"};
    };
    class BJK_Tau_Headset_Medical2 : BJK_Tau_Headset2 {
        displayName = "[Ba'Y JK] Tau Headset 2 (Medical)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Medical_CO.paa"};
    };
    class BJK_Tau_Headset_Medical3 : BJK_Tau_Headset3 {
        displayName = "[Ba'Y JK] Tau Headset 3 (Medical)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Medical_CO.paa"};
    };
    class BJK_Tau_Headset_Medical4 : BJK_Tau_Headset4 {
        displayName = "[Ba'Y JK] Tau Headset 4 (Medical)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Medical_CO.paa"};
    };
    class BJK_Tau_Headset_Medical5 : BJK_Tau_Headset5 {
        displayName = "[Ba'Y JK] Tau Headset 5 (Medical)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_Medical_CO.paa"};
    };
    class BJK_Tau_Headset_EarthCaste1 : BJK_Tau_Headset1 {
        displayName = "[Ba'Y JK] Tau Headset 1 (Earth Caste)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_EC_CO.paa"};
    };
    class BJK_Tau_Headset_EarthCaste2 : BJK_Tau_Headset2 {
        displayName = "[Ba'Y JK] Tau Headset 2 (Earth Caste)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_EC_CO.paa"};
    };
    class BJK_Tau_Headset_EarthCaste3 : BJK_Tau_Headset3 {
        displayName = "[Ba'Y JK] Tau Headset 3 (Earth Caste)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_EC_CO.paa"};
    };
    class BJK_Tau_Headset_EarthCaste4 : BJK_Tau_Headset4 {
        displayName = "[Ba'Y JK] Tau Headset 4 (Earth Caste)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_EC_CO.paa"};
    };
    class BJK_Tau_Headset_EarthCaste5 : BJK_Tau_Headset5 {
        displayName = "[Ba'Y JK] Tau Headset 5 (Earth Caste)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_EC_CO.paa"};
    };
    class BJK_Tau_Headset_EarthCaste_Commander1 : BJK_Tau_Headset1 {
        displayName = "[Ba'Y JK] Tau Headset 1 (Earth Caste, Fio'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_EC_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_EarthCaste_Commander2 : BJK_Tau_Headset2 {
        displayName = "[Ba'Y JK] Tau Headset 2 (Earth Caste, Fio'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_EC_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_EarthCaste_Commander3 : BJK_Tau_Headset3 {
        displayName = "[Ba'Y JK] Tau Headset 3 (Earth Caste, Fio'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_EC_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_EarthCaste_Commander4 : BJK_Tau_Headset4 {
        displayName = "[Ba'Y JK] Tau Headset 4 (Earth Caste, Fio'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_EC_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_EarthCaste_Commander5 : BJK_Tau_Headset5 {
        displayName = "[Ba'Y JK] Tau Headset 5 (Earth Caste, Fio'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_EC_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_WaterCaste1 : BJK_Tau_Headset1 {
        displayName = "[Ba'Y JK] Tau Headset 1 (Water Caste)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_WC_CO.paa"};
    };
    class BJK_Tau_Headset_WaterCaste2 : BJK_Tau_Headset2 {
        displayName = "[Ba'Y JK] Tau Headset 2 (Water Caste)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_WC_CO.paa"};
    };
    class BJK_Tau_Headset_WaterCaste3 : BJK_Tau_Headset3 {
        displayName = "[Ba'Y JK] Tau Headset 3 (Water Caste)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_WC_CO.paa"};
    };
    class BJK_Tau_Headset_WaterCaste4 : BJK_Tau_Headset4 {
        displayName = "[Ba'Y JK] Tau Headset 4 (Water Caste)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_WC_CO.paa"};
    };
    class BJK_Tau_Headset_WaterCaste5 : BJK_Tau_Headset5 {
        displayName = "[Ba'Y JK] Tau Headset 5 (Water Caste)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_WC_CO.paa"};
    };
    class BJK_Tau_Headset_WaterCaste_Commander1 : BJK_Tau_Headset1 {
        displayName = "[Ba'Y JK] Tau Headset 1 (Water Caste, Por'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_WC_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_WaterCaste_Commander2 : BJK_Tau_Headset2 {
        displayName = "[Ba'Y JK] Tau Headset 2 (Water Caste, Por'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_WC_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_WaterCaste_Commander3 : BJK_Tau_Headset3 {
        displayName = "[Ba'Y JK] Tau Headset 3 (Water Caste, Por'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_WC_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_WaterCaste_Commander4 : BJK_Tau_Headset4 {
        displayName = "[Ba'Y JK] Tau Headset 4 (Water Caste, Por'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_WC_Commander_CO.paa"};
    };
    class BJK_Tau_Headset_WaterCaste_Commander5 : BJK_Tau_Headset5 {
        displayName = "[Ba'Y JK] Tau Headset 5 (Water Caste, Por'Ui)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Tau_Headset_WC_Commander_CO.paa"};
    };

    // Gue'vesa Headgear
    class IC_cad_helmet_BASE;
    class BJK_Guevesa_Helmet : IC_cad_helmet_BASE {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Gue'vesa Helmet";
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Helmet_CO.paa"};
        class ItemInfo : ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 13;
                    passThrough = 0.2;
                };
            };
        };
    };
    class H_HelmetB;
    class IC_Guevesa_helmet_BASE;
    class BJK_Guevesa_Helmet_Modified : IC_Guevesa_helmet_BASE {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Gue'vesa Helmet (Modified)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Helmet_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_HelmetCover_CO.paa"};
        class ItemInfo : ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 13;
                    passThrough = 0.2;
                };
            };
        };
    };
    class BJK_Guevesa_Helmet_Modified_Alt1 : BJK_Guevesa_Helmet_Modified {
        displayName = "[Ba'Y JK] Gue'vesa Helmet (Modified, Alternate)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Helmet_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_HelmetCover_CO2.paa"};
    };
    class BJK_Guevesa_Helmet_Modified_Alt2 : BJK_Guevesa_Helmet_Modified {
        displayName = "[Ba'Y JK] Gue'vesa Helmet (Modified, Alternate 2)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Helmet_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_HelmetCover_CO3.paa"};
    };
    class BJK_Guevesa_Helmet_Modified_Commander : BJK_Guevesa_Helmet_Modified {
        displayName = "[Ba'Y JK] Gue'vesa Helmet (Modified, Commander)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Helmet_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_HelmetCover_Commander_CO.paa"};
    };
    class BJK_Guevesa_Helmet_Modified_Commander_Alt1 : BJK_Guevesa_Helmet_Modified {
        displayName = "[Ba'Y JK] Gue'vesa Helmet (Modified, Commander, Alternate)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Helmet_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_HelmetCover_Commander_CO2.paa"};
    };
    class BJK_Guevesa_Helmet_Modified_Commander_Alt2 : BJK_Guevesa_Helmet_Modified {
        displayName = "[Ba'Y JK] Gue'vesa Helmet (Modified, Commander, Alternate 2)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Helmet_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_HelmetCover_Commander_CO3.paa"};
    };
    class Cad_Inf_Helm2;
    class BJK_Guevesa_Kasrkin_Helmet : Cad_Inf_Helm2 {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Helmet";
        picture = "\CadFoot\Icon\CadianKasrkinHelmet_ca.paa";
        model = "\CadFoot\Model\CadianKasrkinHelmet.p3d";
        hiddenSelections[] = {"camo", "camoB", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Kasrkin_Helmet_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Kasrkin_Rebreather_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_CO2.paa"};
        class ItemInfo : HeadgearItem {
            mass = 45;
            uniformModel = "\CadFoot\Model\CadianKasrkinHelmet.p3d";
            allowedSlots[] = {801, 901, 701, 605};
            modelSides[] = {3, 1};
            hiddenSelections[] = {"camo", "camoB", "Camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Kasrkin_Helmet_CO.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Kasrkin_Rebreather_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_CO2.paa"};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 13;
                    passThrough = 0.2;
                };
            };
        };
        subItems[] = {"Integrated_NVG_TI_1_F"};
    };
    class BJK_Guevesa_Kasrkin_Helmet_Alt : BJK_Guevesa_Kasrkin_Helmet {
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Helmet (Alternate)";
        hiddenSelections[] = {"camo", "camoB", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Kasrkin_Helmet_CO2.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Kasrkin_Rebreather_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_CO2.paa"};
        class ItemInfo : HeadgearItem {
            hiddenSelections[] = {"camo", "camoB", "Camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Kasrkin_Helmet_CO2.paa", "BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Kasrkin_Rebreather_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_CO2.paa"};
        };
        subItems[] = {"Integrated_NVG_TI_1_F"};
    };
    class TIOW_Comissar_Cap;
    class BJK_Guevesa_Commandant_Cap : TIOW_Comissar_Cap {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Gue'vesa Commandant Cap";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Commandant_Cap_CO.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Guevesa_Commandant_Cap_CO.paa"};
        };
    };

    // Admech Headgear
    class TIOW_AM_HOOD_ALPHA;
    class BJK_Admech_Alpha_Hood : TIOW_AM_HOOD_ALPHA {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[Ba'Y JK] Alpha Hood ";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Admech_Alpha_Hood_CO.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_headgear\Textures\BJK_Admech_Alpha_Hood_CO.paa"};
        };
    };
};

class EventHandlers;
class CBA_Extended_EventHandlers_base;

class CfgMods {
    author = "JCaleb2014";
    timepacked = "1650387927";
};