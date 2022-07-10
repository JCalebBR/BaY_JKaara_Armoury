
class BJK_DMCLS_Tau_Optics_3 : ItemCore {
    displayName = "[Ba'Y JK] x2-x4 Optics (En'vas pattern)";
    author = "Sokolonko";
    picture = "BaY_JKaara_Armoury\bjk_dmcls_tau_attachments\optics_3\data\UI_optics3.paa";
    model = "BaY_JKaara_Armoury\bjk_dmcls_tau_attachments\Optics_3\dmcls_optics_3.p3d";
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
            class bjk_dmcls_optics_3_coli {
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
            class bjk_dmcls_optics_3_scope {
                cameraDir = "";
                opticsID = 2;
                useModelOptics = 0;
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsFlare = true;
                opticsDisablePeripherialVision = true;
                opticsZoomMin = 0.08;
                opticsZoomMax = 0.125;
                opticsZoomInit = 0.125;
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