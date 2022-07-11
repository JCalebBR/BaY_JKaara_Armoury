#define _ARMA_
class CfgPatches {
    class BaY_JKaara_Armory_Facewear {
        name = "Ba'Y J'Kaara Armory (Facewear)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "IC_Cadia"};
    };
};

class ItemInfo;
class CfgGlasses {
    // Gue'vesa Facewear
    class IC_cad_rebreather_base;
    class BJK_Guevesa_Rebreather : IC_cad_rebreather_base {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Guevesa Rebreather";
        uniformModel = "\IC_Cad_inf\Facewear\ic_cad_rebreather.p3d";
        modelSides[] = {3, 1};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_facewear\Textures\BJK_Guevesa_Rebreather_CO.paa"};
        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 2;
                passThrough = 0.8;
            };
        };
    };
    class BJK_Guevesa_Rebreather_Alt : IC_cad_rebreather_base {
        displayName = "[Ba'Y JK] Guevesa Rebreather (Alternate)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_facewear\Textures\BJK_Guevesa_Rebreather_CO2.paa"};
    };
};

class CfgMods {
    author = "JCaleb2014";
    timepacked = "1650387927";
};