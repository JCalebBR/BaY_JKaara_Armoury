
class BJK_DMCLS_Tau_Coli_1 : ItemCore {
    displayName = "[Ba'Y JK] Holosight (En'vas pattern)";
    author = "Sokolonko & JCaleb2014";
    picture = "BaY_JKaara_Armoury\bjk_dmcls_tau_attachments\coli_1\data\UI_coli1.paa";
    model = "BaY_JKaara_Armoury\bjk_dmcls_tau_attachments\Coli_1\dmcls_coli_1.p3d";
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    descriptionShort = "Holosight";
    weaponInfoType = "RscWeaponZeroing";
    inertia = 0.05;
    class ItemInfo : InventoryOpticsItem_Base_F {
        mass = 4;
        opticType = 1;
        optics = true;
        modelOptics = "\A3\Weapons_F\empty";

        class OpticsModes {
            class bjk_dmcls_optics_1_coli {
                cameraDir = "";
                opticsID = 1;
                useModelOptics = 0;
                opticsPPEffects[] = {""};
                opticsFlare = false;
                opticsDisablePeripherialVision = false;
                opticsZoomMin = 0.375;
                opticsZoomMax = 1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};  /// Can be combined with NVG
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
        };
    };
};