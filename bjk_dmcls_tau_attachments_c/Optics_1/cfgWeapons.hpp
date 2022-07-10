
class BJK_DMCLS_Tau_Optics_1 : ItemCore {
    displayName = "[Ba'Y JK] x3-x5 Optics (En'vas pattern)";
    author = "Sokolonko & JCaleb2014";
    picture = "BaY_JKaara_Armoury\bjk_dmcls_tau_attachments\optics_1\data\UI_optics1.paa";
    model = "BaY_JKaara_Armoury\bjk_dmcls_tau_attachments\Optics_1\dmcls_optics_1.p3d";
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    descriptionShort = "x4 zoom optics + colimator";
    weaponInfoType = "RscWeaponZeroing";
    inertia = 0.25;

    class ItemInfo : InventoryOpticsItem_Base_F {
        mass = 8;
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
            class bjk_dmcls_optics_1_scope {
                cameraDir = "";
                opticsID = 2;
                useModelOptics = 0;
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsFlare = true;
                opticsDisablePeripherialVision = true;
                opticsZoomMin = 0.05;
                opticsZoomMax = 0.09;
                opticsZoomInit = 0.09;
                memoryPointCamera = "opticView";
                visionMode[] = {};  /// Can be combined with NVG
                discreteDistance[] = {100, 200, 300, 400, 500};
                discreteDistanceInitIndex = 2;
                distanceZoomMin = 100;
                distanceZoomMax = 500;
            };
        };
    };
};

class BJK_DMCLS_Tau_Optics_1_VL : BJK_DMCLS_Tau_Optics_1 {};