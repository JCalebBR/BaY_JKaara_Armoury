class CfgPatches {
    class BaY_JKaara_Armory_Markers {
        name = "Ba'Y J'Kaara Armory (Markers)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Ui_F", "Markers"};
    };
};

class CfgMarkerClasses {
    class 40k_markers_bjk {
        displayName = "40k - Ba'Y J'Kaara Markers";
    };
};

class CfgMarkerColors {
    class CadreGold {
        scope = 2;
        name = "Cadre Gold";
        color[] = {0.80, 0.63, 0.21, 1};
    };
    class EarthCaste : CadreGold {
        name = "Earth Caste";
        color[] = {0.84, 0.27, 0.12, 1};
    };
    class WaterCaste : CadreGold {
        name = "Water Caste";
        color[] = {0.39, 0.68, 0.68, 1};
    };
};

class CfgMarkers {
    class 40k_BJK_Marker_Cadre {
        scope = 2;
        name = "Ba'Y J'Kaara Cadre";
        icon = "\BaY_JKaara_Armoury\bjk_markers\Textures\BJK_Marker_Cadre_CO.paa";
        color[] = {1, 1, 1, 1};
        shadow = 0;
        markerClass = "40k_markers_bjk";
        size = 32;
    };
    class 40k_BJK_Marker_Cadre_NoVis : 40k_BJK_Marker_Cadre {
        icon = "\BaY_JKaara_Armoury\bjk_markers\Textures\BJK_Marker_Cadre_NoVis_CO.paa";
        color[] = {0, 0, 0, 1};
    };
    class 40k_BJK_Marker_EarthCaste : 40k_BJK_Marker_Cadre {
        name = "Earth Caste";
        icon = "\BaY_JKaara_Armoury\bjk_markers\Textures\BJK_Marker_EarthCaste_CO.paa";
    };
    class 40k_BJK_Marker_EarthCaste_NoVis : 40k_BJK_Marker_EarthCaste {
        icon = "\BaY_JKaara_Armoury\bjk_markers\Textures\BJK_Marker_EarthCaste_NoVis_CO.paa";
        color[] = {0, 0, 0, 1};
    };
    class 40k_BJK_Marker_WaterCaste : 40k_BJK_Marker_Cadre {
        name = "Water Caste";
        icon = "\BaY_JKaara_Armoury\bjk_markers\Textures\BJK_Marker_WaterCaste_CO.paa";
    };
    class 40k_BJK_Marker_WaterCaste_NoVis : 40k_BJK_Marker_WaterCaste {
        icon = "\BaY_JKaara_Armoury\bjk_markers\Textures\BJK_Marker_WaterCaste_NoVis_CO.paa";
        color[] = {0, 0, 0, 1};
    };
    class 40k_BJK_Marker_EtherealCaste : 40k_BJK_Marker_Cadre {
        name = "Ethereal Caste";
        icon = "\BaY_JKaara_Armoury\bjk_markers\Textures\BJK_Marker_EtherealCaste_CO.paa";
    };
    class 40k_BJK_Marker_EtherealCaste_NoVis : 40k_BJK_Marker_EtherealCaste {
        color[] = {0, 0, 0, 1};
    };
};
