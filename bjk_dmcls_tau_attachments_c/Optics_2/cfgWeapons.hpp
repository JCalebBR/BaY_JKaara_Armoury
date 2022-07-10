
class BJK_DMCLS_Tau_Optics_2 : ItemCore {
    displayName = "[Ba'Y JK] x6-x25 Optics (En'vas pattern)";
    author = "Sokolonko";
    picture = "BaY_JKaara_Armoury\bjk_dmcls_tau_attachments\optics_2\data\UI_optics2.paa";
    model = "BaY_JKaara_Armoury\bjk_dmcls_tau_attachments\Optics_2\dmcls_optics_2.p3d";
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
        modelOptics = "BaY_JKaara_Armoury\bjk_dmcls_tau_attachments\Optics_2\dmcls_optics_2_reticle.p3d";

        class OpticsModes {
            class bjk_dmcls_optics_2_coli {
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
            class bjk_dmcls_optics_2_scope {
                cameraDir = "";
                opticsID = 2;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                opticsFlare = true;
                opticsDisablePeripherialVision = true;
                opticsZoomMin = 0.011;
                opticsZoomMax = 0.045;
                opticsZoomInit = 0.045;
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600};
                memoryPointCamera = "opticView";
                visionMode[] = {};  /// Can be combined with NVG
                discreteDistanceInitIndex = 2;
                distanceZoomMin = 100;
                distanceZoomMax = 500;
            };
        };
    };
};