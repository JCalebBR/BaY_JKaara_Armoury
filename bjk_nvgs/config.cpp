#define _ARMA_

class CfgPatches {
    class BaY_JKaara_Armory_NVGs {
        name = "Ba'Y J'Kaara Armory (NVGs)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "Dos_Cosmetics", "IC_Cadia", "CadFoot"};
        weapons[] = {"BJK_ServoSkull", "BJK_ServoSkull_Alt", "BJK_InvisibleNVG"};
    };
};

class CfgWeapons {
    // NVGs
    class Binocular;
    class NVGoggles : Binocular {
        class ItemInfo;
    };
    class BJK_ServoSkull : NVGoggles {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        nameSound = "nvgoggles";
        simulation = "NVGoggles";
        showEmpty = 0;
        value = 5;
        opticsZoomMin = 1;
        opticsZoomMax = 1;
        muzzlePos = "usti hlavne";
        muzzleEnd = "konec hlavne";
        modelOptics = "\A3\weapons_f\empty.p3d";
        model = "Dos_Cosmetics\models\Mr_Servo_Human.p3d";
        picture = "\CadFoot\Icon\Goggles_ca.paa";
        displayName = "[Ba'Y JK] Mr. Servo (Human)";
        visionMode[] = {"Normal", "NVG", "TI"};
        hiddenSelections[] = {"camo"};
        descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
        class ItemInfo : ItemInfo {
            type = 616;
            hmdType = 0;
            uniformModel = "Dos_Cosmetics\models\Mr_Servo_Human.p3d";
            modelOff = "Dos_Cosmetics\models\Mr_Servo_Human.p3d";
            hiddenSelections[] = {"camo"};
            mass = 10;
        };
    };
    class BJK_InvisibleNVG : BJK_ServoSkull {
        displayName = "[Ba'Y JK] Invisible NVG";
        model = "IC_cad_inf\Headgear\empty.p3d";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {""};
        class ItemInfo : ItemInfo {
            uniformModel = "IC_cad_inf\Headgear\empty.p3d";
            modelOff = "IC_cad_inf\Headgear\empty.p3d";
            hiddenSelections[] = {""};
            hiddenSelectionsTextures[] = {""};
        };
    };
};

class EventHandlers;
class CBA_Extended_EventHandlers_base;

class CfgMods {
    author = "JCaleb2014";
    timepacked = "1650387927";
};