#define _ARMA_

class CfgPatches {
    class BaY_JKaara_Armory {
        name = "Ba'Y J'Kaara Armory";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_Tau_Gear", "TIOW_40k_Tau", "IC_Cadia", "IC_Guevesa", "CadFoot", "TIOW_Admech", "TIOW_Comissar"};
        weapons[] = {};
    };
};

class ItemInfo;
class CfgWeapons {
    // Tau Vests
    class TIOW_Tau_Belt;
    class BJK_Strike_Pauldrons : TIOW_Tau_Belt {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Strike Pauldrons";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Strike_Pauldrons_CA.paa"};
        hiddenSelectionsMaterials[] = {"BaY_JKaara_Armoury\bjk_vest\Materials\BJK_Strike_Pauldrons.rvmat"};
        class ItemInfo : ItemInfo {
            containerClass = "Supply500";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Strike_Pauldrons_CA.paa"};
            hiddenSelectionsMaterials[] = {"BaY_JKaara_Armoury\bjk_vest\Materials\BJK_Strike_Pauldrons.rvmat"};
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 13;
                    passThrough = 0.5;
                };
                class Arms {
                    hitpointName = "HitArms";
                    armor = 13;
                    passThrough = 0.5;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 13;
                    passThrough = 0.7;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 13;
                    passThrough = 0.7;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Pelvis {
                    hitpointName = "HitPelvis";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs {
                    hitpointName = "HitLegs";
                    armor = 13;
                    passThrough = 0.5;
                };
            };
        };
    };
    class BJK_Strike_Pauldrons_Commander : BJK_Strike_Pauldrons {
        displayName = "[Ba'Y JK] Strike Pauldrons (Shas'Ui)";
        model = "40k_tau\Gear\Belt_shasui.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Strike_Pauldrons_Commander_CA.paa"};
        class ItemInfo : ItemInfo {
            uniformModel = "40k_tau\Gear\Belt_shasui.p3d";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Strike_Pauldrons_Commander_CA.paa"};
        };
    };
    class BJK_Strike_Pauldrons_Commander_Alt : BJK_Strike_Pauldrons {
        displayName = "[Ba'Y JK] Strike Pauldrons (Assistant)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Strike_Pauldrons_Commander_Alt_CA.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Strike_Pauldrons_Commander_Alt_CA.paa"};
        };
    };
    class BJK_Strike_Pauldrons_Medical : BJK_Strike_Pauldrons {
        displayName = "[Ba'Y JK] Strike Pauldrons (Medical)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Strike_Pauldrons_Medical_CA.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Strike_Pauldrons_Medical_CA.paa"};
        };
    };
    class BJK_Strike_Pauldrons_Medical_Alt : BJK_Strike_Pauldrons_Commander {
        displayName = "[Ba'Y JK] Strike Pauldrons (Medical, Alternate)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Strike_Pauldrons_Medical_Alt_CA.paa"};
    };
    class BJK_Strike_Pauldrons_Ethereal : BJK_Strike_Pauldrons_Commander {
        displayName = "[Ba'Y JK] Strike Pauldrons (Aun'La)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Strike_Pauldrons_Ethereal_CA.paa"};
        hiddenSelectionsMaterials[] = {"BaY_JKaara_Armoury\bjk_vest\Materials\BJK_Strike_Pauldrons_Ethereal.rvmat"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Strike_Pauldrons_Ethereal_CA.paa"};
            hiddenSelectionsMaterials[] = {"BaY_JKaara_Armoury\bjk_vest\Materials\BJK_Strike_Pauldrons_Ethereal.rvmat"};
        };
    };

    class TIOW_Tau_BeltP;
    class BJK_EarthCaste_Pauldrons : TIOW_Tau_BeltP {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Earth Caste Pauldrons";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_EarthCaste_Pauldrons_CO.paa"};
        hiddenSelectionsMaterials[] = {"BaY_JKaara_Armoury\bjk_vest\Materials\BJK_Strike_Pauldrons.rvmat"};
        class ItemInfo : ItemInfo {
            containerClass = "Supply500";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_EarthCaste_Pauldrons_CO.paa"};
            hiddenSelectionsMaterials[] = {"BaY_JKaara_Armoury\bjk_vest\Materials\BJK_Strike_Pauldrons.rvmat"};
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 13;
                    passThrough = 0.5;
                };
                class Arms {
                    hitpointName = "HitArms";
                    armor = 13;
                    passThrough = 0.5;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 13;
                    passThrough = 0.7;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 13;
                    passThrough = 0.7;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Pelvis {
                    hitpointName = "HitPelvis";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs {
                    hitpointName = "HitLegs";
                    armor = 13;
                    passThrough = 0.5;
                };
            };
        };
    };
    class BJK_WaterCaste_Pauldrons : BJK_EarthCaste_Pauldrons {
        displayName = "[Ba'Y JK] Water Caste Pauldrons";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_WaterCaste_Pauldrons_CO.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_WaterCaste_Pauldrons_CO.paa"};
        };
    };

    class BJK_Breacher_Pauldrons : BJK_Strike_Pauldrons {
        displayName = "[Ba'Y JK] Breacher Pauldrons";
        model = "40k_tau\Gear\BeltB.p3d";
        class ItemInfo : ItemInfo {
            uniformModel = "40k_tau\Gear\BeltB.p3d";
        };
    };
    class BJK_Breacher_Pauldrons_Commander_Alt : BJK_Strike_Pauldrons_Commander_Alt {
        model = "40k_tau\Gear\BeltB_Photon.p3d";
        displayName = "[Ba'Y JK] Breacher Pauldrons (Assistant)";

        class ItemInfo : ItemInfo {
            uniformModel = "40k_tau\Gear\BeltB_Photon.p3d";
        };
    };
    class BJK_Breacher_Pauldrons_Commander : BJK_Strike_Pauldrons_Commander {
        model = "40k_tau\Gear\BeltB_Shasui.p3d";
        displayName = "[Ba'Y JK] Breacher Pauldrons (Shas'Ui)";
        class ItemInfo : ItemInfo {
            uniformModel = "40k_tau\Gear\BeltB_Shasui.p3d";
        };
    };
    class BJK_Breacher_Pauldrons_Commander_Alt1 : BJK_Breacher_Pauldrons_Commander {
        displayName = "[Ba'Y JK] Breacher Pauldrons (Shas'Ui, Shadow 1-1)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Breacher_Pauldrons_CA1.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Breacher_Pauldrons_CA1.paa"};
        };
    };
    class BJK_Breacher_Pauldrons_Commander_Alt2 : BJK_Breacher_Pauldrons_Commander {
        displayName = "[Ba'Y JK] Breacher Pauldrons (Shas'Ui, Shadow 1-2)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Breacher_Pauldrons_CA2.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Breacher_Pauldrons_CA2.paa"};
        };
    };
    class BJK_Breacher_Pauldrons_Commander_Alt3 : BJK_Breacher_Pauldrons_Commander {
        displayName = "[Ba'Y JK] Breacher Pauldrons (Shas'Ui, Shadow 1-3)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Breacher_Pauldrons_CA3.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Breacher_Pauldrons_CA3.paa"};
        };
    };

    class BJK_Pathfinder_Pauldrons : BJK_Strike_Pauldrons {
        model = "40k_tau\Gear\BeltP.p3d";
        displayName = "[Ba'Y JK] Pathfinder Pauldrons";
        class ItemInfo : ItemInfo {
            uniformModel = "40k_tau\Gear\BeltP.p3d";
        };
    };
    class BJK_Pathfinder_Pauldrons_Commander_Alt : BJK_Strike_Pauldrons_Commander_Alt {
        model = "40k_tau\Gear\BeltP_photon.p3d";
        displayName = "[Ba'Y JK] Pathfinder Pauldrons (Assistant)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Pathfinder_Pauldrons_Commander_Alt_CA.paa"};
        hiddenSelectionsMaterials[] = {};
        class ItemInfo : ItemInfo {
            uniformModel = "40k_tau\Gear\BeltP_photon.p3d";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Pathfinder_Pauldrons_Commander_Alt_CA.paa"};
        };
    };
    class BJK_Pathfinder_Pauldrons_Commander : BJK_Strike_Pauldrons_Commander {
        model = "40k_tau\Gear\BeltP_shasui.p3d";
        displayName = "[Ba'Y JK] Pathfinder Pauldrons (Shas'Ui)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Pathfinder_Pauldrons_Commander_CA.paa"};
        class ItemInfo : ItemInfo {
            uniformModel = "40k_tau\Gear\BeltP_shasui.p3d";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Pathfinder_Pauldrons_Commander_CA.paa"};
        };
    };

    // Gue'vesa Vests
    class Cad_KasrGear667th;
    class BJK_Guevesa_Kasrkin_Armor : Cad_KasrGear667th {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Armor";
        hiddenSelections[] = {"camo", "camoB", "RegimentCamo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_CO2.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_Icons_CO.paa"};
        class ItemInfo : ItemInfo {
            containerClass = "Supply500";
            overlaySelectionsInfo[] = {"ghillie_hide"};
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 13;
                    passThrough = 0.5;
                };
                class Arms {
                    hitpointName = "HitArms";
                    armor = 13;
                    passThrough = 0.5;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 13;
                    passThrough = 0.7;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 13;
                    passThrough = 0.7;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Pelvis {
                    hitpointName = "HitPelvis";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs {
                    hitpointName = "HitLegs";
                    armor = 13;
                    passThrough = 0.5;
                };
            };
        };
    };
    class BJK_Guevesa_Kasrkin_Armor_Alt1 : Cad_KasrGear667th {
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Armor (Alternate)";
        hiddenSelections[] = {"camo", "camoB", "RegimentCamo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_CO3.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_CO4.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Kasrkin_Armor_Icons_CO.paa"};
    };
    class ic_guevesa_Vest1;
    class BJK_Guevesa_Vest : Cad_KasrGear667th {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[Ba'Y JK] Gue'vesa Armor";
        picture = "\IC_cad_inf\Vest\Data\CAD_vest_ca.paa";
        model = "\IC_Departmento_Munitorum\IC_Guevesa\ic_GuevesaArmour.p3d";
        hiddenSelections[] = {"camo", "camo1", "camo3"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO2.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO3.paa"};
        class ItemInfo : ItemInfo {
            uniformModel = "\IC_Departmento_Munitorum\IC_Guevesa\ic_GuevesaArmour.p3d";
            containerClass = "Supply500";
            mass = 25;
            overlaySelectionsInfo[] = {};
            hiddenSelections[] = {"camo", "camo1", "camo3"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO2.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO3.paa"};
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 13;
                    passThrough = 0.5;
                };
                class Arms {
                    hitpointName = "HitArms";
                    armor = 13;
                    passThrough = 0.5;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 13;
                    passThrough = 0.7;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 13;
                    passThrough = 0.7;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Pelvis {
                    hitpointName = "HitPelvis";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs {
                    hitpointName = "HitLegs";
                    armor = 13;
                    passThrough = 0.5;
                };
            };
        };
    };
    class BJK_Guevesa_Medical_Vest : BJK_Guevesa_Vest {
        displayName = "[Ba'Y JK] Gue'vesa Armor (Medical)";
        hiddenSelections[] = {"camo", "camo1", "camo3"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_Medical_CO2.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_Medical_CO3.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo", "camo1", "camo3"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_Medical_CO2.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_Medical_CO3.paa"};
        };
    };
    class BJK_Guevesa_Alt_Vest : BJK_Guevesa_Vest {
        displayName = "[Ba'Y JK] Gue'vesa Armor (Assistant)";
        hiddenSelections[] = {"camo", "camo1", "camo3"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO2.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO3_Alt.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo", "camo1", "camo3"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO2.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO3_Alt.paa"};
        };
    };
    class BJK_Guevesa_Commander_Vest : BJK_Guevesa_Vest {
        displayName = "[Ba'Y JK] Gue'vesa Armor (Shas'Ui)";
        hiddenSelections[] = {"camo", "camo1", "camo3"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO2.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_Commander_CO3.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo", "camo1", "camo3"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_CO2.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Armor_Commander_CO3.paa"};
        };
    };
    class ic_stormtrooper_Vest2;
    class BJK_Guevesa_Stormtrooper_Armor : ic_stormtrooper_Vest2 {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[Ba'Y JK] Gue'vesa Stormtrooper Armor";
        descriptionShort = "Stormtrooper Armour";
        hiddenSelections[] = {"camo", "camo1", "camo2"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Stormtrooper_Armor_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Stormtrooper_Armor_CO2.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Stormtrooper_Braces_CO.paa"};
        class ItemInfo : ItemInfo {
            uniformModel = "\IC_Departmento_Munitorum\ICP_StormTrooper\ic_StormtrooperV2.p3d";
            containerClass = "Supply500";
            hiddenSelections[] = {"camo", "camo1", "camo2"};
            hiddenSelectionsTextures[] = {"\IC_Departmento_Munitorum\ICP_StormTrooper\data\ic_Stormtrooper1_co.paa", "\IC_Departmento_Munitorum\ICP_StormTrooper\data\ic_Stormtrooper2_co.paa", "\IC_Departmento_Munitorum\ICP_StormTrooper\data\ic_StormtrooperBraces_co.paa"};
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 13;
                    passThrough = 0.5;
                };
                class Arms {
                    hitpointName = "HitArms";
                    armor = 13;
                    passThrough = 0.5;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 13;
                    passThrough = 0.7;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 13;
                    passThrough = 0.7;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Pelvis {
                    hitpointName = "HitPelvis";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs {
                    hitpointName = "HitLegs";
                    armor = 13;
                    passThrough = 0.5;
                };
            };
        };
    };

    class ic_ThracianRanger_Vest1;
    class BJK_Guevesa_Breacher_Armor : ic_ThracianRanger_Vest1 {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[Ba'Y JK] Gue'vesa Breacher Armor";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO2.paa"};
        hiddenSelectionsMaterials[] = {"", "BaY_JKaara_Armoury\bjk_vest\Materials\BJK_Guevesa_Breacher_Armor.rvmat"};
        class ItemInfo : ItemInfo {
            containerClass = "Supply500";
            hiddenSelections[] = {"camo", "camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO2.paa"};
            hiddenSelectionsMaterials[] = {"", "BaY_JKaara_Armoury\bjk_vest\Materials\BJK_Guevesa_Breacher_Armor.rvmat"};
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 13;
                    passThrough = 0.5;
                };
                class Arms {
                    hitpointName = "HitArms";
                    armor = 13;
                    passThrough = 0.5;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 13;
                    passThrough = 0.7;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 13;
                    passThrough = 0.7;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Pelvis {
                    hitpointName = "HitPelvis";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs {
                    hitpointName = "HitLegs";
                    armor = 13;
                    passThrough = 0.5;
                };
            };
        };
    };
    class BJK_Guevesa_Breacher_Armor_Anarchy : BJK_Guevesa_Breacher_Armor {
        displayName = "[Ba'Y JK] Gue'vesa Breacher Armor (Anarchy)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_Anarchy_CO2.paa"};
        hiddenSelectionsMaterials[] = {"", "BaY_JKaara_Armoury\bjk_vest\Materials\BJK_Guevesa_Breacher_Armor_Anarchy.rvmat"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo", "camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_Anarchy_CO2.paa"};
            hiddenSelectionsMaterials[] = {"", "BaY_JKaara_Armoury\bjk_vest\Materials\BJK_Guevesa_Breacher_Armor_Anarchy.rvmat"};
        };
    };
    class BJK_Guevesa_Breacher_Armor_Alt : BJK_Guevesa_Breacher_Armor {
        displayName = "[Ba'Y JK] Gue'vesa Breacher Armor (Alternate)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO2.paa"};
        model = "\IC_Departmento_Munitorum\IC_ThracianRangers\ic_thracianArmourV5.p3d";
        class ItemInfo : ItemInfo {
            uniformModel = "\IC_Departmento_Munitorum\IC_ThracianRangers\ic_thracianArmourV5.p3d";
            hiddenSelections[] = {"camo", "camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO2.paa"};
        };
    };
    class BJK_Guevesa_Breacher_Armor_Alt2 : BJK_Guevesa_Breacher_Armor {
        displayName = "[Ba'Y JK] Gue'vesa Breacher Armor (Alternate 2)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO2.paa"};
        model = "\IC_Departmento_Munitorum\IC_ThracianRangers\ic_thracianArmourV3.p3d";
        class ItemInfo : ItemInfo {
            uniformModel = "\IC_Departmento_Munitorum\IC_ThracianRangers\ic_thracianArmourV3.p3d";
            hiddenSelections[] = {"camo", "camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO2.paa"};
        };
    };
    class BJK_Guevesa_Breacher_Armor_Light : BJK_Guevesa_Breacher_Armor {
        displayName = "[Ba'Y JK] Gue'vesa Breacher Armor (Light)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO2.paa"};
        model = "\IC_Departmento_Munitorum\IC_ThracianRangers\ic_thracianArmourV2.p3d";
        class ItemInfo : ItemInfo {
            uniformModel = "\IC_Departmento_Munitorum\IC_ThracianRangers\ic_thracianArmourV2.p3d";
            hiddenSelections[] = {"camo", "camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO2.paa"};
        };
    };
    class BJK_Guevesa_Breacher_Armor_Light_Alt : BJK_Guevesa_Breacher_Armor {
        displayName = "[Ba'Y JK] Gue'vesa Breacher Armor (Light, Alternate)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO2.paa"};
        model = "\IC_Departmento_Munitorum\IC_ThracianRangers\ic_thracianArmourV4.p3d";
        class ItemInfo : ItemInfo {
            uniformModel = "\IC_Departmento_Munitorum\IC_ThracianRangers\ic_thracianArmourV4.p3d";
            hiddenSelections[] = {"camo", "camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO2.paa"};
        };
    };
    class BJK_Guevesa_Breacher_Armor_Light_Alt2 : BJK_Guevesa_Breacher_Armor {
        displayName = "[Ba'Y JK] Gue'vesa Breacher Armor (Light, Alternate 2)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO2.paa"};
        model = "\IC_Departmento_Munitorum\IC_ThracianRangers\ic_thracianArmourV6.p3d";
        class ItemInfo : ItemInfo {
            uniformModel = "\IC_Departmento_Munitorum\IC_ThracianRangers\ic_thracianArmourV6.p3d";
            hiddenSelections[] = {"camo", "camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO1.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Guevesa_Breacher_Armor_CO2.paa"};
        };
    };

    // Renegade Vests
    class ic_Bloodpact_Vest1;
    class BJK_Renegade_Vest_Flak : ic_Bloodpact_Vest1 {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Renegade Flak Armor";
        descriptionShort = "Renegade Armour";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Renegade_Vest_Flak_CO.paa"};
        class ItemInfo : ItemInfo {
            containerClass = "Supply500";
            mass = 25;
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Renegade_Vest_Flak_CO.paa"};
        };
    };
    class BJK_Renegade_Vest_Grenadier : BJK_Renegade_Vest_Flak {
        displayName = "[Ba'Y JK] Renegade Grenadier Vest";
        model = "\IC_Departmento_Munitorum\IC_BloodPact\Bloodpact_vest_02.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Renegade_Vest_Grenadier_CO.paa"};
        class ItemInfo : ItemInfo {
            uniformModel = "\IC_Departmento_Munitorum\IC_BloodPact\Bloodpact_vest_02.p3d";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Renegade_Vest_Grenadier_CO.paa"};
        };
    };
    class BJK_Renegade_Vest_Chainmail : BJK_Renegade_Vest_Flak {
        displayName = "[Ba'Y JK] Renegade Chainmail";
        model = "\IC_Departmento_Munitorum\IC_Chaos\ic_ChaosArmourV1.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Renegade_Vest_Chainmail_CO.paa", ""};
        class ItemInfo : ItemInfo {
            uniformModel = "\IC_Departmento_Munitorum\IC_Chaos\ic_ChaosArmourV1.p3d";
            hiddenSelections[] = {"camo", "camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Renegade_Vest_Chainmail_CO.paa", ""};
        };
    };
    class BJK_Renegade_Vest_Chainmail_Armor : BJK_Renegade_Vest_Flak {
        displayName = "[Ba'Y JK] Renegade Chainmail Armor";
        model = "\IC_Departmento_Munitorum\IC_Chaos\ic_ChaosArmourV2.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Renegade_Vest_Chainmail_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Renegade_Vest_Chainmail_Armor_CO.paa"};
        class ItemInfo : ItemInfo {
            uniformModel = "\IC_Departmento_Munitorum\IC_Chaos\ic_ChaosArmourV2.p3d";
            hiddenSelections[] = {"camo", "camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Renegade_Vest_Chainmail_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_Renegade_Vest_Chainmail_Armor_CO.paa"};
        };
    };

    // Space Marine Gear
    class TIOW_Mk7Limbs_DA;
    class BJK_SpaceMarine_Mk7_Pauldrons : TIOW_Mk7Limbs_DA {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Mk 7 Pauldrons";
        hiddenSelections[] = {"Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_LostBrother_Body2_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_LostBrother_Body_CO.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"Camo1", "Camo2"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vest\Textures\BJK_LostBrother_Body2_CO.paa", "BaY_JKaara_Armoury\bjk_vest\Textures\BJK_LostBrother_Body_CO.paa"};
        };
    };
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

class CfgMods {
    author = "JCaleb2014";
    timepacked = "1650387927";
};