#define _ARMA_
class CBJK_Extended_EventHandlers_base;
class CfgPatches {
    class BaY_JKaara_Armory {
        name = "Ba'Y J'Kaara Armory";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_Tau_Gear", "DMCLS_weapons", "TIOW_40k_Tau", "IC_Cadia", "IC_Guevesa", "IC_weapons_base", "CadFoot"};
        weapons[] = {"BJK_ion_rifle", "BJK_pulse_pistol", "BJK_pulse_pistol_WC", "BJK_DMCLS_pulse_rifle", "BJK_DMCLS_pulse_blaster", "BJK_DMCLS_pulse_burster", "BJK_DMCLS_pulse_carbine", "BJK_DMCLS_rail_rifle", "BJK_Guevesa_PulseRifle", "BJK_Guevesa_PulseRifle_Alt", "BJK_optics_ColiS", "BJK_optics_ColiB", "BJK_optics_ColiB_zoom", "KC_optics_Mk_zoom", "BJK_FireWarrior_Strike_Helmet", "BJK_FireWarrior_Strike_Helmet_Commander", "BJK_FireWarrior_Breacher_Helmet", "BJK_Guevesa_Helmet", "BJK_Guevesa_Helmet_Modified", "BJK_Guevesa_Helmet_Modified_Alt1", "BJK_Guevesa_Helmet_Modified_Alt2", "BJK_Guevesa_Helmet_Modified_Commander", "BJK_Guevesa_Helmet_Modified_Commander_Alt1", "BJK_Guevesa_Helmet_Modified_Commander_Alt2", "BJK_Guevesa_Kasrkin_Helmet", "BJK_Guevesa_Kasrkin_Helmet_Alt", "BJK_SpaceMarine_Mk7_Pauldrons", "BJK_SpaceMarine_Mk7_PowerArmor"};
        magazines[] = {"BJK_ionrifle_shot_mag", "BJK_ionrifle_overcharge_mag", "BJK_ExpSmall_Remote_Mag", "BJK_ExpBig_Remote_Mag", "BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54", "BJK_DMCLS_pulse_blaster_mag_10", "BJK_DMCLS_pulse_blaster_mag_15", "BJK_DMCLS_pulse_blaster_mag_25", "BJK_DMCLS_pulse_blaster_airburst_mag_8", "BJK_DMCLS_pulse_blaster_airburst_mag_12", "BJK_DMCLS_pulse_blaster_airburst_mag_18", "BJK_DMCLS_pulse_blaster_slug_mag_10", "BJK_DMCLS_pulse_blaster_slug_mag_15", "BJK_DMCLS_pulse_blaster_slug_mag_25", "BJK_DMCLS_rail_rifle_mag", "BJK_photon_grenade_mag"};
        ammo[] = {"BJK_ionrifle_shot", "BJK_ionrifle_overcharge", "BJK_ExpSmall_Remote_Ammo", "BJK_ExpSmall_Remote_Ammo_Scripted", "BJK_ExpBig_Remote_Ammo", "BJK_DMCLS_pulse_shot", "BJK_pulse_pistol_shot", "BJK_DMCLS_pulse_blaster_shot", "BJK_DMCLS_pulse_blaster_airburst", "BJK_DMCLS_pulse_blaster_slug", "BJK_DMCLS_pulse_airburst_pellets", "BJK_DMCLS_rail_rifle_shot", "BJK_photon_grenade_ammo"};
        units[] = {"BJK_FireWarrior_Backpack", "BJK_FireWarrior_Medical", "BJK_Guevesa_Kasrkin_Backpack", "BJK_Guevesa_Kasrkin_Cables_Backpack", "BJK_Guevesa_Kasrkin_Cables_Backpack_Alt", "BJK_FireWarrior", "BJK_Guevesa_Kasrkin_Base", "BJK_Guevesa_Kasrkin", "BJK_Guevesa_Kasrkin_Alt", "BJK_Guevesa_Base", "BJK_SpaceMarine_Mk7_Tactical"};
    };
};

class ItemInfo;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;
class SlotInfo;
class CowsSlot_BJK_dmcls_tau : SlotInfo {
    linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
    displayName = "$STR_A3_CowsSlot0";
    compatibleItems[] = {"BJK_DMCLS_Tau_Optics_1", "BJK_DMCLS_Tau_Optics_2", "BJK_DMCLS_Tau_Optics_3", "BJK_DMCLS_Tau_Coli_1", "BJK_DMCLS_Tau_Coli_2"};
};
class CowsSlot_tau : SlotInfo {
    linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
    displayName = "$STR_A3_CowsSlot0";
    compatibleItems[] =
        {"BJK_optics_ColiS", "BJK_optics_ColiB", "BJK_optics_ColiB_zoom", "BJK_optics_Mk_zoom"};
};
class UnderBarrelSlot;
class UnderBarrelSlot_BJK_dmcls_tau : UnderBarrelSlot {
    compatibleItems[] = {"BJK_DMCLS_Tau_Bipod_1"};
};

class CfgSoundShaders {
    class TIOW_pulse_rifle_Closure_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle1.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle2.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle3.wss",
                 1}};
        volume = 1;
        range = 5;
    };
    class TIOW_pulse_rifle_closeShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle1.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle2.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle3.wss",
                 1}};
        volume = 1;
        range = 200;
        rangeCurve = "closeShotCurve";
    };
    class TIOW_pulse_rifle_midShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle_mid.wss",
                 1}};
        volume = 1;
        range = 400;
        rangeCurve[] =
            {
                {0, 0},
                {150, 1},
                {350, 0.5},
                {500, 0.25},
                {3000, 0}};
    };
    class TIOW_pulse_rifle_distShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle_dist.wss",
                 1}};
        volume = 1;
        range = 700;
        rangeCurve[] =
            {
                {0, 0},
                {200, 0},
                {350, 0.2},
                {500, 0.40000001},
                {750, 0.80000001},
                {1500, 1}};
    };
    class TIOW_pulse_rifle_farShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle_far.wss",
                 1}};
        volume = 1;
        range = 1000;
        rangeCurve[] =
            {
                {0, 0},
                {200, 0},
                {350, 0},
                {750, 0.25},
                {1500, 0.75},
                {3000, 1}};
    };
    class TIOW_pulse_rifle_tailInterior_SoundShader {
        samples[] =
            {

                {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailInterior",
                 1}};
        volume = "interior";
        range = 75;
        limitation = 0;
    };
    class TIOW_pulse_rifle_tailTrees_SoundShader {
        samples[] =
            {

                {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailTrees",
                 1}};
        volume = "(1 - interior / 1.4)*trees / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_pulse_rifle_tailForest_SoundShader {
        samples[] =
            {

                {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailForest",
                 1}};
        volume = "(1 - interior / 1.4)*forest / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_pulse_rifle_tailMeadows_SoundShader {
        samples[] =
            {

                {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailMeadows",
                 1}};
        volume = "(1 - interior / 1.4)*(meadows / 2 max sea / 2) / 3";
        range = 1000;
        limitation = 1;
    };
    class TIOW_pulse_rifle_tailHouses_SoundShader {
        samples[] =
            {

                {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailHouses",
                 1}};
        volume = "(1 - interior / 1.4)*houses / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_pulse_blaster_Closure_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_blaster\data\blaster.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_blaster\data\blaster1.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_blaster\data\blaster2.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_blaster\data\blaster3.wss",
                 1}};
        volume = 1;
        range = 5;
    };
    class TIOW_pulse_blaster_closeShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_blaster\data\blaster.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_blaster\data\blaster1.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_blaster\data\blaster2.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_blaster\data\blaster3.wss",
                 1}};
        volume = 1;
        range = 200;
        rangeCurve = "closeShotCurve";
    };
    class TIOW_pulse_blaster_midShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle_mid.wss",
                 1}};
        volume = 1;
        range = 400;
        rangeCurve[] =
            {
                {0, 0},
                {150, 1},
                {350, 0.5},
                {500, 0.25},
                {3000, 0}};
    };
    class TIOW_pulse_blaster_distShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle_dist.wss",
                 1}};
        volume = 1;
        range = 700;
        rangeCurve[] =
            {
                {0, 0},
                {200, 0},
                {350, 0.2},
                {500, 0.40000001},
                {750, 0.80000001},
                {1500, 1}};
    };
    class TIOW_pulse_blaster_farShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle_far.wss",
                 1}};
        volume = 1;
        range = 1000;
        rangeCurve[] =
            {
                {0, 0},
                {200, 0},
                {350, 0},
                {750, 0.25},
                {1500, 0.75},
                {3000, 1}};
    };
    class TIOW_pulse_blaster_tailInterior_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "interior";
        range = 75;
        limitation = 0;
    };
    class TIOW_pulse_blaster_tailTrees_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "(1 - interior / 1.4)*trees / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_pulse_blaster_tailForest_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "(1 - interior / 1.4)*forest / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_pulse_blaster_tailMeadows_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "(1 - interior / 1.4)*(meadows / 2 max sea / 2) / 3";
        range = 1000;
        limitation = 1;
    };
    class TIOW_pulse_blaster_tailHouses_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "(1 - interior / 1.4)*houses / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_pulse_carbine_Closure_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_carbine\data\carbine.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_carbine\data\carbine1.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_carbine\data\carbine2.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_carbine\data\carbine3.wss",
                 1}};
        volume = 1;
        range = 5;
    };
    class TIOW_pulse_carbine_closeShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_carbine\data\carbine.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_carbine\data\carbine1.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_carbine\data\carbine2.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_carbine\data\carbine3.wss",
                 1}};
        volume = 1;
        range = 200;
        rangeCurve = "closeShotCurve";
    };
    class TIOW_pulse_carbine_midShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle_mid.wss",
                 1}};
        volume = 1;
        range = 400;
        rangeCurve[] =
            {
                {0, 0},
                {150, 1},
                {350, 0.5},
                {500, 0.25},
                {3000, 0}};
    };
    class TIOW_pulse_carbine_distShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle_dist.wss",
                 1}};
        volume = 1;
        range = 700;
        rangeCurve[] =
            {
                {0, 0},
                {200, 0},
                {350, 0.2},
                {500, 0.40000001},
                {750, 0.80000001},
                {1500, 1}};
    };
    class TIOW_pulse_carbine_farShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Pulse_Rifle\data\rifle_far.wss",
                 1}};
        volume = 1;
        range = 1000;
        rangeCurve[] =
            {
                {0, 0},
                {200, 0},
                {350, 0},
                {750, 0.25},
                {1500, 0.75},
                {3000, 1}};
    };
    class TIOW_pulse_carbine_tailInterior_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "interior";
        range = 75;
        limitation = 0;
    };
    class TIOW_pulse_carbine_tailTrees_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "(1 - interior / 1.4)*trees / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_pulse_carbine_tailForest_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "(1 - interior / 1.4)*forest / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_pulse_carbine_tailMeadows_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "(1 - interior / 1.4)*(meadows / 2 max sea / 2) / 3";
        range = 1000;
        limitation = 1;
    };
    class TIOW_pulse_carbine_tailHouses_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "(1 - interior / 1.4)*houses / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_rail_rifle_Closure_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\rail_Rifle\data\Rail_rifle.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\rail_Rifle\data\Rail_rifle2.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\rail_Rifle\data\Rail_rifle3.wss",
                 1}};
        volume = 1;
        range = 5;
    };
    class TIOW_rail_rifle_closeShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\rail_Rifle\data\Rail_rifle.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\rail_Rifle\data\Rail_rifle2.wss",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\rail_Rifle\data\Rail_rifle3.wss",
                 1}};
        volume = 1;
        range = 200;
        rangeCurve = "closeShotCurve";
    };
    class TIOW_rail_rifle_midShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\rail_Rifle\data\rail_mid.wss",
                 1}};
        volume = 1;
        range = 400;
        rangeCurve[] =
            {
                {0, 0},
                {150, 1},
                {350, 0.5},
                {500, 0.25},
                {3000, 0}};
    };
    class TIOW_rail_rifle_distShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\rail_Rifle\data\rail_dist.wss",
                 1}};
        volume = 1;
        range = 700;
        rangeCurve[] =
            {
                {0, 0},
                {200, 0},
                {350, 0.2},
                {500, 0.40000001},
                {750, 0.80000001},
                {1500, 1}};
    };
    class TIOW_rail_rifle_farShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\rail_Rifle\data\rail_far.wss",
                 1}};
        volume = 1;
        range = 1000;
        rangeCurve[] =
            {
                {0, 0},
                {200, 0},
                {350, 0},
                {750, 0.25},
                {1500, 0.75},
                {3000, 1}};
    };
    class TIOW_rail_rifle_tailInterior_SoundShader {
        samples[] =
            {

                {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailInterior",
                 1}};
        volume = "interior";
        range = 75;
        limitation = 0;
    };
    class TIOW_rail_rifle_tailTrees_SoundShader {
        samples[] =
            {

                {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailTrees",
                 1}};
        volume = "(1 - interior / 1.4)*trees / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_rail_rifle_tailForest_SoundShader {
        samples[] =
            {

                {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailForest",
                 1}};
        volume = "(1 - interior / 1.4)*forest / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_rail_rifle_tailMeadows_SoundShader {
        samples[] =
            {

                {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailMeadows",
                 1}};
        volume = "(1 - interior / 1.4)*(meadows / 2 max sea / 2) / 3";
        range = 1000;
        limitation = 1;
    };
    class TIOW_rail_rifle_tailHouses_SoundShader {
        samples[] =
            {

                {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailHouses",
                 1}};
        volume = "(1 - interior / 1.4)*houses / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_ion_rifle_Closure_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\ion_rifle\data\Rifle_Shot_v2.ogg",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\ion_rifle\data\Rifle_Shot2_v2.ogg",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\ion_rifle\data\Rifle_Shot3_v2.ogg",
                 1}};
        volume = 1;
        range = 5;
    };
    class TIOW_ion_rifle_closeShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\ion_rifle\data\Rifle_Shot_v2.ogg",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\ion_rifle\data\Rifle_Shot2_v2.ogg",
                 1},

                {"\40k_tau\Weapons\Definitions\Sound\ion_rifle\data\Rifle_Shot3_v2.ogg",
                 1}};
        volume = 1;
        range = 200;
        rangeCurve = "closeShotCurve";
    };
    class TIOW_ion_rifle_midShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Ion_Rifle\data\Rifle_ShotClose.ogg",
                 1}};
        volume = 1;
        range = 400;
        rangeCurve[] =
            {
                {0, 0},
                {150, 1},
                {350, 0.5},
                {500, 0.25},
                {3000, 0}};
    };
    class TIOW_ion_rifle_distShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Ion_Rifle\data\Rifle_ShotMid.ogg",
                 1}};
        volume = 1;
        range = 700;
        rangeCurve[] =
            {
                {0, 0},
                {200, 0},
                {350, 0.2},
                {500, 0.40000001},
                {750, 0.80000001},
                {1500, 1}};
    };
    class TIOW_ion_rifle_farShot_SoundShader {
        samples[] =
            {

                {"\40k_tau\Weapons\Definitions\Sound\Ion_Rifle\data\Rifle_ShotDist.ogg",
                 1}};
        volume = 1;
        range = 1000;
        rangeCurve[] =
            {
                {0, 0},
                {200, 0},
                {350, 0},
                {750, 0.25},
                {1500, 0.75},
                {3000, 1}};
    };
    class TIOW_ion_rifle_tailInterior_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "interior";
        range = 75;
        limitation = 0;
    };
    class TIOW_ion_rifle_tailTrees_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "(1 - interior / 1.4)*trees / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_ion_rifle_tailForest_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "(1 - interior / 1.4)*forest / 3";
        range = 300;
        limitation = 1;
    };
    class TIOW_ion_rifle_tailMeadows_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "(1 - interior / 1.4)*(meadows / 2 max sea / 2) / 3";
        range = 1000;
        limitation = 1;
    };
    class TIOW_ion_rifle_tailHouses_SoundShader {
        samples[] =
            {

                {"",
                 1}};
        volume = "(1 - interior / 1.4)*houses / 3";
        range = 300;
        limitation = 1;
    };
};
class CfgSoundSets {
    class TIOW_pulse_rifle_Shot_SoundSet {
        soundShaders[] =
            {
                "TIOW_pulse_rifle_Closure_SoundShader",
                "TIOW_pulse_rifle_closeShot_SoundShader",
                "TIOW_pulse_rifle_midShot_SoundShader",
                "TIOW_pulse_rifle_distShot_SoundShader",
                "TIOW_pulse_rifle_farShot_SoundShader"};
        volumeFactor = 1.35;
        volumeCurve = "inverseSquare3Curve";
        sound3DProcessingType = " TIOW_pulse_rifle_Shot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
        speedOfSound = 1;
    };
    class TIOW_pulse_rifle_Tail_SoundSet {
        soundShaders[] =
            {
                "TIOW_pulse_rifle_tailInterior_SoundShader",
                "TIOW_pulse_rifle_tailTrees_SoundShader",
                "TIOW_pulse_rifle_tailForest_SoundShader",
                "TIOW_pulse_rifle_tailMeadows_SoundShader",
                "TIOW_pulse_rifle_tailHouses_SoundShader"};
        soundShadersLimit = 6;
        volumeFactor = 1.05;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizerMin = 0.0099999998;
        frequencyRandomizer = 0.050000001;
        sound3DProcessingType = "TIOW_pulse_rifle_ShotTail3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
        speedOfSound = 1;
    };
    class TIOW_pulse_blaster_Shot_SoundSet {
        soundShaders[] =
            {
                "TIOW_pulse_blaster_Closure_SoundShader",
                "TIOW_pulse_blaster_closeShot_SoundShader",
                "TIOW_pulse_blaster_midShot_SoundShader",
                "TIOW_pulse_blaster_distShot_SoundShader",
                "TIOW_pulse_blaster_farShot_SoundShader"};
        volumeFactor = 1.35;
        volumeCurve = "inverseSquare3Curve";
        sound3DProcessingType = " TIOW_pulse_blaster_Shot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
        speedOfSound = 1;
    };
    class TIOW_pulse_blaster_Tail_SoundSet {
        soundShaders[] =
            {
                "TIOW_pulse_blaster_tailInterior_SoundShader",
                "TIOW_pulse_blaster_tailTrees_SoundShader",
                "TIOW_pulse_blaster_tailForest_SoundShader",
                "TIOW_pulse_blaster_tailMeadows_SoundShader",
                "TIOW_pulse_blaster_tailHouses_SoundShader"};
        soundShadersLimit = 6;
        volumeFactor = 1.05;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizerMin = 0.0099999998;
        frequencyRandomizer = 0.050000001;
        sound3DProcessingType = "TIOW_pulse_blaster_ShotTail3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
        speedOfSound = 1;
    };
    class TIOW_pulse_carbine_Shot_SoundSet {
        soundShaders[] =
            {
                "TIOW_pulse_carbine_Closure_SoundShader",
                "TIOW_pulse_carbine_closeShot_SoundShader",
                "TIOW_pulse_carbine_midShot_SoundShader",
                "TIOW_pulse_carbine_distShot_SoundShader",
                "TIOW_pulse_carbine_farShot_SoundShader"};
        volumeFactor = 1.35;
        volumeCurve = "inverseSquare3Curve";
        sound3DProcessingType = " TIOW_pulse_carbine_Shot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
        speedOfSound = 1;
    };
    class TIOW_pulse_carbine_Tail_SoundSet {
        soundShaders[] =
            {
                "TIOW_pulse_carbine_tailInterior_SoundShader",
                "TIOW_pulse_carbine_tailTrees_SoundShader",
                "TIOW_pulse_carbine_tailForest_SoundShader",
                "TIOW_pulse_carbine_tailMeadows_SoundShader",
                "TIOW_pulse_carbine_tailHouses_SoundShader"};
        soundShadersLimit = 6;
        volumeFactor = 1.05;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizerMin = 0.0099999998;
        frequencyRandomizer = 0.050000001;
        sound3DProcessingType = "TIOW_pulse_carbine_ShotTail3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
        speedOfSound = 1;
    };
    class TIOW_rail_rifle_Shot_SoundSet {
        soundShaders[] =
            {
                "TIOW_rail_rifle_Closure_SoundShader",
                "TIOW_rail_rifle_closeShot_SoundShader",
                "TIOW_rail_rifle_midShot_SoundShader",
                "TIOW_rail_rifle_distShot_SoundShader",
                "TIOW_rail_rifle_farShot_SoundShader"};
        volumeFactor = 1.35;
        volumeCurve = "inverseSquare3Curve";
        sound3DProcessingType = " TIOW_rail_rifle_Shot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
        speedOfSound = 1;
    };
    class TIOW_rail_rifle_Tail_SoundSet {
        soundShaders[] =
            {
                "TIOW_rail_rifle_tailInterior_SoundShader",
                "TIOW_rail_rifle_tailTrees_SoundShader",
                "TIOW_rail_rifle_tailForest_SoundShader",
                "TIOW_rail_rifle_tailMeadows_SoundShader",
                "TIOW_rail_rifle_tailHouses_SoundShader"};
        soundShadersLimit = 6;
        volumeFactor = 1.05;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizerMin = 0.0099999998;
        frequencyRandomizer = 0.050000001;
        sound3DProcessingType = "TIOW_rail_rifle_ShotTail3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
        speedOfSound = 1;
    };
    class TIOW_ion_rifle_Shot_SoundSet {
        soundShaders[] =
            {
                "TIOW_ion_rifle_Closure_SoundShader",
                "TIOW_ion_rifle_closeShot_SoundShader",
                "TIOW_ion_rifle_midShot_SoundShader",
                "TIOW_ion_rifle_distShot_SoundShader",
                "TIOW_ion_rifle_farShot_SoundShader"};
        volumeFactor = 1.35;
        volumeCurve = "inverseSquare3Curve";
        sound3DProcessingType = " TIOW_ion_rifle_Shot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
        speedOfSound = 1;
    };
    class TIOW_ion_rifle_Tail_SoundSet {
        soundShaders[] =
            {
                "TIOW_ion_rifle_tailInterior_SoundShader",
                "TIOW_ion_rifle_tailTrees_SoundShader",
                "TIOW_ion_rifle_tailForest_SoundShader",
                "TIOW_ion_rifle_tailMeadows_SoundShader",
                "TIOW_ion_rifle_tailHouses_SoundShader"};
        soundShadersLimit = 6;
        volumeFactor = 1.05;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizerMin = 0.0099999998;
        frequencyRandomizer = 0.050000001;
        sound3DProcessingType = "TIOW_ion_rifle_ShotTail3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
        speedOfSound = 1;
    };
};
class cfgSound3DProcessors {
    class TIOW_pulse_rifle_Shot3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 5;
        rangeCurve = "LinearCurve";
    };
    class TIOW_pulse_rifle_ShotTail3DProcessingType {
        type = "panner";
        innerRange = 5;
        range = 160;
        rangeCurve = "InverseSquare1Curve";
    };
    class TIOW_pulse_blaster_Shot3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 5;
        rangeCurve = "LinearCurve";
    };
    class TIOW_pulse_blaster_ShotTail3DProcessingType {
        type = "panner";
        innerRange = 5;
        range = 160;
        rangeCurve = "InverseSquare1Curve";
    };
    class TIOW_pulse_carbine_Shot3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 5;
        rangeCurve = "LinearCurve";
    };
    class TIOW_pulse_carbine_ShotTail3DProcessingType {
        type = "panner";
        innerRange = 5;
        range = 160;
        rangeCurve = "InverseSquare1Curve";
    };
    class TIOW_rail_rifle_Shot3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 5;
        rangeCurve = "LinearCurve";
    };
    class TIOW_rail_rifle_ShotTail3DProcessingType {
        type = "panner";
        innerRange = 5;
        range = 160;
        rangeCurve = "InverseSquare1Curve";
    };
    class TIOW_ion_rifle_Shot3DProcessingType {
        type = "panner";
        innerRange = 0;
        range = 5;
        rangeCurve = "LinearCurve";
    };
    class TIOW_ion_rifle_ShotTail3DProcessingType {
        type = "panner";
        innerRange = 5;
        range = 160;
        rangeCurve = "InverseSquare1Curve";
    };
};
class cfgDistanceFilters {
    class TIOW_pulse_rifle_ShotDistanceFreqAttenuationFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 300;
        qFactor = 1.5;
        innerRange = 10;
        range = 2000;
        powerFactor = 32;
    };
    class TIOW_pulse_rifle_ShotTailDistanceFreqAttenuationFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 500;
        qFactor = 1.5;
        innerRange = 10;
        range = 1400;
        powerFactor = 32;
    };
    class TIOW_pulse_blaster_ShotDistanceFreqAttenuationFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 300;
        qFactor = 1.5;
        innerRange = 10;
        range = 2000;
        powerFactor = 32;
    };
    class TIOW_pulse_blaster_ShotTailDistanceFreqAttenuationFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 500;
        qFactor = 1.5;
        innerRange = 10;
        range = 1400;
        powerFactor = 32;
    };
    class TIOW_pulse_carbine_ShotDistanceFreqAttenuationFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 300;
        qFactor = 1.5;
        innerRange = 10;
        range = 2000;
        powerFactor = 32;
    };
    class TIOW_pulse_carbine_ShotTailDistanceFreqAttenuationFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 500;
        qFactor = 1.5;
        innerRange = 10;
        range = 1400;
        powerFactor = 32;
    };
    class TIOW_rail_rifle_ShotDistanceFreqAttenuationFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 300;
        qFactor = 1.5;
        innerRange = 10;
        range = 2000;
        powerFactor = 32;
    };
    class TIOW_rail_rifle_ShotTailDistanceFreqAttenuationFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 500;
        qFactor = 1.5;
        innerRange = 10;
        range = 1400;
        powerFactor = 32;
    };
    class TIOW_ion_rifle_ShotDistanceFreqAttenuationFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 300;
        qFactor = 1.5;
        innerRange = 10;
        range = 2000;
        powerFactor = 32;
    };
    class TIOW_ion_rifle_ShotTailDistanceFreqAttenuationFilter {
        type = "lowPassFilter";
        minCutoffFrequency = 500;
        qFactor = 1.5;
        innerRange = 10;
        range = 1400;
        powerFactor = 32;
    };
};

class CfgAmmo {
    class B_127x99_Ball;
    class BJK_DMCLS_pulse_shot : B_127x99_Ball {
        typicalSpeed = 1000;
        airFriction = -1.9999999e-005;
        model = "\40k_tau\Effects\pulse_tracer\Pulse_tracer.p3d";
        tracerStartTime = 0.001;
        tracerEndTime = 10;
        hit = 50;
        caliber = 4;
        deflecting = 0;
    };
    class BJK_pulse_pistol_shot : B_127x99_Ball {
        typicalSpeed = 1000;
        airFriction = -1.9999999e-005;
        model = "\40k_tau\Effects\pulse_tracer\Pulse_tracer.p3d";
        tracerStartTime = 0.001;
        tracerEndTime = 10;
        hit = 20;
        caliber = 2;
        deflecting = 0;
    };
    class BJK_DMCLS_pulse_blaster_shot : B_127x99_Ball {
        typicalSpeed = 600;
        airFriction = -1e-006;
        model = "\40k_tau\Effects\pulse_tracer\Pulse_tracer.p3d";
        tracerStartTime = 0.001;
        tracerEndTime = 10;
        hit = 60;
        caliber = 3;
        deflecting = 0;
        submunitionAmmo = "DMCLS_pulse_airburst_pellets";
        submunitionConeType[] = {"poissondisc", 14};
        submunitionConeAngle = 2;
        triggerTime = 9.9999997e-006;
        deleteParentWhenTriggered = 1;
    };
    class BJK_DMCLS_pulse_blaster_airburst : B_127x99_Ball {
        typicalSpeed = 400;
        airFriction = -1e-006;
        tracerStartTime = 0.001;
        tracerEndTime = 10;
        hit = 20;
        caliber = 2;
        deflecting = 0;
        submunitionAmmo = "DMCLS_pulse_airburst_pellets";
        submunitionConeType[] = {"poissondisc", 24};
        submunitionConeAngle = 0.80000001;
        triggerTime = 0.079999998;
        deleteParentWhenTriggered = 1;
    };
    class BJK_DMCLS_pulse_blaster_slug : B_127x99_Ball {
        typicalSpeed = 700;
        airFriction = -1.9999999e-005;
        tracerStartTime = 0.001;
        tracerEndTime = 10;
        hit = 50;
        caliber = 3;
        deflecting = 0;
    };
    class BJK_DMCLS_pulse_airburst_pellets : B_127x99_Ball {
        typicalSpeed = 100;
        airFriction = -1e-006;
        tracerStartTime = 0.001;
        tracerEndTime = 10;
        hit = 30;
        caliber = 2;
        deflecting = 0;
    };
    class BJK_DMCLS_rail_rifle_shot : B_127x99_Ball {
        typicalSpeed = 1500;
        airFriction = -7.9999998e-005;
        model = "\40k_tau\Effects\pulse_tracer\Pulse_tracer.p3d";
        tracerStartTime = 0.001;
        tracerEndTime = 10;
        caliber = 5;
        hit = 200;
        deflecting = 0;
    };
    class ammo_Penetrator_Base;
    class ShellBase;
    class BJK_ionrifle_shot : B_127x99_Ball {
        typicalSpeed = 1000;
        airFriction = -1.9999999e-005;
        tracerStartTime = 0.001;
        tracerEndTime = 10;
        tracersevery = 1;
        caliber = 5;
        deflecting = 0;
        hit = 75;
    };
    class BJK_ionrifle_overcharge : ShellBase {
        deflecting = 0;
        hit = 600;
        indirectHit = 20;
        indirectHitRange = 5;
        dangerRadiusHit = 100;
        suppressionRadiusHit = 15;
        typicalSpeed = 1000;
        explosive = 0.5;
        cost = 300;
        airFriction = -1.9999999e-005;
        caliber = 25;
        whistleOnFire = 1;
        whistleDist = 14;
        model = "\40k_tau\Effects\Ion_tracer\Ion_tracer.p3d";
        tracerScale = 1.4;
        tracerStartTime = 0.0099999998;
        tracerEndTime = 3;
        muzzleEffect = "";
        explosionEffects = "TIOW_Ion_ExplosionEffect";
        soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
        soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
        soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
        soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
        multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
        SoundSetExplosion[] =
            {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
    };
    class PipeBombBase;
    class BJK_ExpSmall_Remote_Ammo : PipeBombBase {
        hit = 1500;
        indirectHit = 1500;
        indirectHitRange = 5;
        model = "40k_tau\Explosives\ExplosiveSmall.p3d";
        mineModelDisabled = "40k_tau\Explosives\ExplosiveSmall.p3d";
        defaultMagazine = "TIOW_Tau_ExpSmall_Remote_Mag";
        soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Mines\AT_landmine_explosion_01", 3.1622777, 1, 1500};
        soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Mines\AT_landmine_explosion_02", 3.1622777, 1, 1500};
        multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
        soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a", 1.9952624, 1, 20};
        ExplosionEffects = "MineNondirectionalExplosion";
        CraterEffects = "MineNondirectionalCrater";
        whistleDist = 10;
        mineInconspicuousness = 3;
        mineTrigger = "RemoteTrigger";
        triggerWhenDestroyed = 1;
    };
    class BJK__ExpSmall_Remote_Ammo_Scripted : BJK_ExpSmall_Remote_Ammo {
    };
    class BJK_ExpBig_Remote_Ammo : PipeBombBase {
        hit = 5000;
        indirectHit = 5000;
        indirectHitRange = 15;
        model = "40k_tau\Explosives\ExplosiveBig.p3d";
        mineModelDisabled = "40k_tau\Explosives\ExplosiveBig.p3d";
        defaultMagazine = "TIOW_Tau_ExpBig_Remote_Mag";
        soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Mines\AT_landmine_explosion_01", 3.1622777, 1, 1500};
        soundHit2[] =
            {"A3\Sounds_F\arsenal\explosives\Mines\AT_landmine_explosion_02", 3.1622777, 1, 1500};
        multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
        soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a", 1.9952624, 1, 20};
        ExplosionEffects = "MineNondirectionalExplosion";
        CraterEffects = "MineNondirectionalCrater";
        whistleDist = 10;
        mineInconspicuousness = 3;
        mineTrigger = "RemoteTrigger";
        triggerWhenDestroyed = 1;
    };
    class Grenade;
    class BJK_photon_grenade_ammo : Grenade {
        hit = 10;
        indirectHit = 50;
        indirectHitRange = 10;
        model = "\DMCLS\dmcls_tau_explosives\photon_grenade\photon_grenade.p3d";
        explosionTime = 4;
        SoundSetExplosion[] = {"DMCLS_photon_grenade_Shot_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
    };
};
class CfgMagazines {
    class CA_Magazine;
    class CA_LauncherMagazine;
    class BJK_DMCLS_pulse_mag_25 : CA_Magazine {
        scope = 2;
        displayName = "[Ba'Y JK] Pulse Magazine 25 charges";
        descriptionShort = "Universal pulse weaponry magazine - 25 charges";
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_25.paa";
        mass = 10;
        ammo = "BJK_DMCLS_pulse_shot";
        count = 25;
        initSpeed = 1000;
        tracersEvery = 1;
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag25.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag25.p3d";
    };
    class BJK_DMCLS_pulse_mag_36 : BJK_DMCLS_pulse_mag_25 {
        displayName = "[Ba'Y JK] Pulse Magazine 36 charges";
        descriptionShort = "Universal pulse weaponry magazine - 36 charges";
        mass = 15;
        count = 36;
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_36.paa";
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag36.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag36.p3d";
    };
    class BJK_DMCLS_pulse_mag_54 : BJK_DMCLS_pulse_mag_25 {
        displayName = "[Ba'Y JK] Pulse Magazine 54 charges";
        descriptionShort = "Universal pulse weaponry magazine - 54 charges";
        mass = 20;
        count = 54;
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_54.paa";
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag54.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag54.p3d";
    };
    class BJK_DMCLS_pulse_blaster_mag_10 : CA_Magazine {
        scope = 2;
        displayName = "[Ba'Y JK] CQB Magazine 10 charges";
        descriptionShort = "Pulse Blaster CQB magazine - 10 charges";
        mass = 4;
        ammo = "BJK_DMCLS_pulse_blaster_shot";
        count = 10;
        initSpeed = 150;
        tracersEvery = 1;
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_25.paa";
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag25.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag25.p3d";
    };
    class BJK_DMCLS_pulse_blaster_mag_15 : BJK_DMCLS_pulse_blaster_mag_10 {
        displayName = "[Ba'Y JK] CQB Magazine 15 charges";
        descriptionShort = "Pulse Blaster CQB magazine 15 charges";
        mass = 8;
        count = 15;
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_36.paa";
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag36.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag36.p3d";
    };
    class BJK_DMCLS_pulse_blaster_mag_25 : BJK_DMCLS_pulse_blaster_mag_15 {
        displayName = "[Ba'Y JK] CQB Magazine 25 charges";
        descriptionShort = "Pulse Blaster CQB magazine - 25 charges";
        mass = 10;
        count = 25;
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_54.paa";
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag54.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag54.p3d";
    };
    class BJK_DMCLS_pulse_blaster_airburst_mag_8 : CA_Magazine {
        scope = 2;
        displayName = "[Ba'Y JK] Airburst Magazine 8 charges";
        descriptionShort = "Pulse Blaster Airburst magazine - 8 charges";
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_25.paa";
        mass = 4;
        ammo = "BJK_DMCLS_pulse_blaster_airburst";
        count = 8;
        initSpeed = 200;
        tracersEvery = 1;
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag25.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag25.p3d";
    };
    class BJK_DMCLS_pulse_blaster_airburst_mag_12 : BJK_DMCLS_pulse_blaster_airburst_mag_8 {
        displayName = "[Ba'Y JK] Airburst Magazine 12 charges";
        descriptionShort = "Pulse Blaster Airburst magazine - 12 charges";
        mass = 8;
        count = 12;
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_36.paa";
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag36.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag36.p3d";
    };
    class BJK_DMCLS_pulse_blaster_airburst_mag_18 : BJK_DMCLS_pulse_blaster_airburst_mag_8 {
        displayName = "[Ba'Y JK]Airburst Magazine 18 charges";
        descriptionShort = "Pulse blaster Airburst magazine - 18 charges";
        mass = 10;
        count = 18;
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_54.paa";
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag54.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag54.p3d";
    };
    class BJK_DMCLS_pulse_blaster_slug_mag_10 : CA_Magazine {
        scope = 2;
        displayName = "[Ba'Y JK] Slug Magazine 10 charges";
        descriptionShort = "Pulse Blaster Slug magazine - 10 charges";
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_25.paa";
        mass = 4;
        ammo = "BJK_DMCLS_pulse_blaster_slug";
        count = 10;
        initSpeed = 400;
        tracersEvery = 1;
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag25.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag25.p3d";
    };
    class BJK_DMCLS_pulse_blaster_slug_mag_15 : BJK_DMCLS_pulse_blaster_slug_mag_10 {
        displayName = "[Ba'Y JK] Slug Magazine 15 charges";
        descriptionShort = "Pulse Blaster Slug magazine - 15 charges";
        mass = 8;
        count = 15;
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_36.paa";
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag36.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag36.p3d";
    };
    class BJK_DMCLS_pulse_blaster_slug_mag_25 : BJK_DMCLS_pulse_blaster_slug_mag_10 {
        displayName = "[Ba'Y JK] Slug Magazine 25 charges";
        descriptionShort = "Pulse Blaster Slug magazine - 25 charges";
        mass = 10;
        count = 25;
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_54.paa";
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag54.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag54.p3d";
    };
    class BJK_DMCLS_rail_rifle_mag : CA_Magazine {
        scope = 2;
        displayName = "[Ba'Y JK] Rail Rifle Magazine 18 charges";
        descriptionShort = "Rail Rifle magazine - 18 charges";
        picture = "\DMCLS\dmcls_tau_weapons\rail_rifle\data\UI_railmag.paa";
        mass = 15;
        ammo = "BJK_DMCLS_rail_rifle_shot";
        count = 18;
        initSpeed = 1000;
        tracersEvery = 1;
        model = "\DMCLS\dmcls_tau_weapons\rail_rifle\railmag.p3d";
    };
    class BJK_ionrifle_shot_mag : CA_Magazine {
        scope = 2;
        displayName = "[Ba'Y JK] Ion Rifle Magazine";
        descriptionShort = "Silicon-Ferromagnetic Charges";
        picture = "\40k_tau\Weapons\Definitions\UI\Ion_mag.paa";
        mass = 15;
        ammo = "BJK_ionrifle_shot";
        count = 12;
        initSpeed = 700;
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class BJK_ionrifle_overcharge_mag : CA_Magazine {
        scope = 2;
        displayName = "[Ba'Y JK]Ion Rifle Magazine [Overcharged]";
        descriptionShort = "Overcharged Silicon-Ferromagnetic Charge";
        picture = "\40k_tau\Weapons\Definitions\UI\Ion_mag.paa";
        mass = 80;
        ammo = "BJK_ionrifle_overcharge";
        count = 1;
        initSpeed = 500;
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class BJK_pulse_pistol_mag : CA_Magazine {
        scope = 2;
        displayName = "[Ba'Y JK] Pulse Pistol Magazine";
        descriptionShort = "Silicon-Ferromagnetic Charges";
        picture = "\40k_tau\Weapons\Definitions\UI\Magazine.paa";
        mass = 5;
        ammo = "BJK_pulse_pistol_shot";
        count = 12;
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class BJK_ExpSmall_Remote_Mag : CA_Magazine {
        scope = 2;
        displayName = "[Ba'Y JK] Small Fusion Charge";
        picture = "\40k_tau\Weapons\Definitions\UI\ExpSmall.paa";
        model = "40k_tau\Explosives\ExplosiveSmall.p3d";
        descriptionShort = "Small satchel charge";
        class Library {
            libTextDesc = "[Ba'Y JK] Small Fusion Charge";
        };
        descriptionUse = "$STR_A3_use_charge";
        type = "2*  256";
        allowedSlots[] = {901};
        value = 5;
        ammo = "BJK_ExpSmall_Remote_Ammo";
        mass = 40;
        count = 1;
        initSpeed = 0;
        maxLeadSpeed = 0;
        nameSoundWeapon = "satchelcharge";
        nameSound = "satchelcharge";
        weaponPoolAvailable = 1;
        useAction = 0;
        useActionTitle = "$STR_ACTION_PUTBOMB";
        sound[] = {"A3\sounds_f\dummysound", 0.00031622776, 1, 10};
        ACE_Explosives_Placeable = 1;
        ACE_Explosives_SetupObject = "BJK_ExpSmall";
        ACE_Explosives_DelayTime = 1.5;
        class ACE_Triggers {
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};
            class Timer {
                FuseTime = 0.5;
            };
            class Command {
                FuseTime = 0.5;
            };
            class MK16_Transmitter : Command {
            };
            class DeadmanSwitch : Command {
            };
        };
    };
    class BJK_ExpBig_Remote_Mag : CA_Magazine {
        scope = 2;
        displayName = "[Ba'Y JK] Big Fusion Charge";
        picture = "\40k_tau\Weapons\Definitions\UI\ExpBig.paa";
        model = "40k_tau\Explosives\ExplosiveBig.p3d";
        descriptionShort = "Big satchel charge";
        class Library {
            libTextDesc = "[Ba'Y JK] Big Fusion Charge";
        };
        descriptionUse = "$STR_A3_use_charge";
        type = "2*  256";
        allowedSlots[] = {901};
        value = 5;
        ammo = "BJK_ExpBig_Remote_Ammo";
        mass = 100;
        count = 1;
        initSpeed = 0;
        maxLeadSpeed = 0;
        nameSoundWeapon = "satchelcharge";
        nameSound = "satchelcharge";
        weaponPoolAvailable = 1;
        useAction = 0;
        useActionTitle = "$STR_ACTION_PUTBOMB";
        sound[] = {"A3\sounds_f\dummysound", 0.00031622776, 1, 10};
        ACE_Explosives_Placeable = 1;
        ACE_Explosives_SetupObject = "BJK_ExpBig";
        ACE_Explosives_DelayTime = 1.5;
        class ACE_Triggers {
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};
            class Timer {
                FuseTime = 0.5;
            };
            class Command {
                FuseTime = 0.5;
            };
            class MK16_Transmitter : Command {
            };
            class DeadmanSwitch : Command {
            };
        };
    };
    class HandGrenade;
    class BJK_photon_grenade_mag : HandGrenade {
        displayName = "[Ba'Y JK] Cadre Photon Grenade";
        model = "\DMCLS\dmcls_tau_explosives\photon_grenade\photon_grenade.p3d";
        displayNameShort = "Photon grenade";
        ammo = "DMCLS_tau_photon_grenade_ammo";
        picture = "\DMCLS\dmcls_tau_explosives\photon_grenade\data\UI_photon.paa";
    };
};

class CfgWeapons {
    // Base Weapons
    class Rifle_Base_F;
    class Pistol_Base_F;
    class Launcher_Base_F;
    class ItemCore;
    class InventoryItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class InventoryUnderItem_Base_F;

    // Attachments & Optics
    class BJK_optics_ColiS : ItemCore {
        displayName = "[Ba'Y JK] Kor'Tal Holosight";
        author = "JCaleb2014";
        picture = "\A3\weapons_F\Data\UI\gear_acco_EOTxps3_CA.paa";
        model = "\40k_tau\Attachments\ColiS.p3d";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        descriptionShort = "Circle";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 6;
            modelOptics = "\40k_tau\Attachments\ColiS.p3d";
            class OpticsModes {
                class TIOW_Tau_Colimator {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye_coli";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = {};
                };
            };
        };
        inertia = 0.1;
    };
    class BJK_optics_ColiB : BJK_optics_ColiS {
        displayName = "[Ba'Y JK] Fe'Saan Holosight";
        author = "JCaleb2014";
        model = "\40k_tau\Attachments\ColiB.p3d";
    };
    class BJK_optics_ColiB_zoom : ItemCore {
        displayName = "[Ba'Y JK] Fe'Saan Holosight with magnifier";
        author = "JCaleb2014";
        picture = "\A3\weapons_F\Data\UI\gear_acco_EOTxps3_CA.paa";
        model = "\40k_tau\Attachments\ColiB_zoom.p3d";
        optics = 1;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        descriptionShort = "RedDot";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 16;
            optics = 1;
            modelOptics = "\40k_tau\Attachments\ColiB_optic";
            class OpticsModes {
                class Tau_ScopeB {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsBlur1"};
                    opticsZoomMin = 0.14;
                    opticsZoomMax = 0.125;
                    opticsZoomInit = 0.0625;
                    discreteDistance[] = {100, 200, 300};
                    discreteDistanceInitIndex = 2;
                    distanceZoomMin = 100;
                    distanceZoomMax = 300;
                    discretefov[] = {0.0625, 0.025};
                    discreteInitIndex = 0;
                    modelOptics[] = {"\40k_tau\Attachments\ColiB_optic"};
                    memoryPointCamera = "eye";
                    visionMode[] = {"Normal", "NVG", "TI"};
                    thermalMode[] = {1};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
            };
        };
        inertia = 0.1;
    };
    class BJK_optics_Mk_zoom : ItemCore {
        displayName = "[Ba'Y JK] Yo'Vai Magnifier";
        author = "JCaleb2014";
        picture = "\A3\weapons_F\Data\UI\gear_acco_EOTxps3_CA.paa";
        model = "\40k_tau\Attachments\Mk.p3d";
        optics = 1;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        descriptionShort = "RedDot";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 16;
            optics = 1;
            modelOptics = "\40k_tau\Attachments\Mk_optic";
            class OpticsModes {
                class Tau_ScopeB {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsBlur1"};
                    opticsZoomMin = 0.0625;
                    opticsZoomMax = 0.125;
                    opticsZoomInit = 0.0625;
                    discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600};
                    discreteDistanceInitIndex = 2;
                    distanceZoomMin = 100;
                    distanceZoomMax = 1600;
                    discretefov[] = {0.0625, 0.025};
                    discreteInitIndex = 0;
                    modelOptics[] = {"\40k_tau\Attachments\Mk_optic"};
                    memoryPointCamera = "eye";
                    visionMode[] = {"Normal", "NVG", "TI"};
                    thermalMode[] = {1};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
            };
        };
        inertia = 0.1;
    };
    class BJK_DMCLS_Tau_Optics_1 : ItemCore {
        displayName = "Kauyon x3-x5 Optics";
        author = "Sokolonko";
        picture = "\DMCLS\dmcls_tau_attachments\optics_1\data\UI_optics1.paa";
        model = "\kc_tau_attachments\KC_dmcls_optics_1.p3d";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        descriptionShort = "x4 zoom optics + colimator";
        weaponInfoType = "RscWeaponZeroing";
        inertia = 0.25;
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 8;
            opticType = 1;
            optics = 1;
            modelOptics = "\A3\Weapons_F\empty";
            class OpticsModes {
                class dmcls_optics_1_coli {
                    cameraDir = "";
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                };
                class dmcls_optics_1_scope {
                    cameraDir = "";
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.05;
                    opticsZoomMax = 0.09;
                    opticsZoomInit = 0.09;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    discreteDistance[] = {100, 200, 300, 400, 500};
                    discreteDistanceInitIndex = 2;
                    distanceZoomMin = 100;
                    distanceZoomMax = 500;
                };
            };
        };
    };
    class BJK_DMCLS_Tau_Optics_2 : ItemCore {
        displayName = "Kauyon x6-x25 Optics";
        author = "Sokolonko";
        picture = "\DMCLS\dmcls_tau_attachments\optics_2\data\UI_optics2.paa";
        model = "\kc_tau_attachments\KC_dmcls_optics_2.p3d";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        descriptionShort = "x4 zoom optics + colimator";
        weaponInfoType = "RscWeaponZeroing";
        inertia = 0.25;
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 8;
            opticType = 1;
            optics = 1;
            modelOptics = "DMCLS\dmcls_tau_attachments\Optics_2\dmcls_optics_2_reticle.p3d";
            class OpticsModes {
                class dmcls_optics_2_coli {
                    cameraDir = "";
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                };
                class dmcls_optics_2_scope {
                    cameraDir = "";
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.011;
                    opticsZoomMax = 0.045;
                    opticsZoomInit = 0.045;
                    discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600};
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    discreteDistanceInitIndex = 2;
                    distanceZoomMin = 100;
                    distanceZoomMax = 500;
                };
            };
        };
    };
    class BJK_DMCLS_Tau_Optics_3 : ItemCore {
        displayName = "Kauyon x2-x4 Optics";
        author = "Sokolonko";
        picture = "\DMCLS\dmcls_tau_attachments\optics_3\data\UI_optics3.paa";
        model = "\kc_tau_attachments\KC_dmcls_optics_3.p3d";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        descriptionShort = "x4 zoom optics + colimator";
        weaponInfoType = "RscWeaponZeroing";
        inertia = 0.25;
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 8;
            opticType = 1;
            optics = 1;
            modelOptics = "\A3\Weapons_F\empty";
            class OpticsModes {
                class dmcls_optics_3_coli {
                    cameraDir = "";
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                };
                class dmcls_optics_3_scope {
                    cameraDir = "";
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.08;
                    opticsZoomMax = 0.125;
                    opticsZoomInit = 0.125;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    discreteDistance[] = {100, 200, 300, 400, 500};
                    discreteDistanceInitIndex = 2;
                    distanceZoomMin = 100;
                    distanceZoomMax = 500;
                };
            };
        };
    };
    class BJK_DMCLS_Tau_Coli_1 : ItemCore {
        displayName = "Kauyon Holosight";
        author = "Sokolonko";
        picture = "\DMCLS\dmcls_tau_attachments\coli_1\data\UI_coli1.paa";
        model = "\kc_tau_attachments\kc_dmcls_coli_1.p3d";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        descriptionShort = "Holosight";
        weaponInfoType = "RscWeaponZeroing";
        inertia = 0.05;
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 4;
            opticType = 1;
            optics = 1;
            modelOptics = "\A3\Weapons_F\empty";
            class OpticsModes {
                class dmcls_optics_1_coli {
                    cameraDir = "";
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                };
            };
        };
    };
    class BJK_DMCLS_Tau_Coli_2 : ItemCore {
        displayName = "Kauyon Holosight";
        author = "Sokolonko";
        picture = "\DMCLS\dmcls_tau_attachments\coli_2\data\UI_coli2.paa";
        model = "\kc_tau_attachments\kc_dmcls_coli_2.p3d";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        descriptionShort = "Holosight";
        weaponInfoType = "RscWeaponZeroing";
        inertia = 0.05;
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 4;
            opticType = 1;
            optics = 1;
            modelOptics = "\A3\Weapons_F\empty";
            class OpticsModes {
                class dmcls_optics_2_coli {
                    cameraDir = "";
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                };
            };
        };
    };
    class BJK_DMCLS_Tau_Bipod_1 : ItemCore {
        scope = 2;
        displayName = "[Ba'Y JK] Kauyon Bipod (En'Vas pattern)";
        picture = "\DMCLS\dmcls_tau_attachments\bipod_1\data\UI_bipod.paa";
        model = "\kc_tau_attachments\KC_dmcls_bipod_1.p3d";
        class ItemInfo : InventoryUnderItem_Base_F {
            deployedPivot = "bipod";
            hasBipod = 1;
            mass = 10;
            soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down", "db-3", 1, 20};
            soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up", "db-3", 1, 20};
        };
        inertia = 0.3;
    };

    // Tau Weapons
    class BJK_ion_rifle : Rifle_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_ion_rifle";
        Author = "JCaleb2014";
        displayName = "[Ba'Y JK] Ion Rifle";
        descriptionShort = "A heavy anti-material rifle";
        model = "\40k_tau\Weapons\Ion_Rifle\Ionrifle.p3d";
        picture = "\40k_tau\Weapons\Definitions\UI\Ion_Rifle.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_Ion_Rifle_CA.paa"};
        maxRecoilSway = 0.015;
        swayDecaySpeed = 1.25;
        opticsZoomMin = 0.25;
        opticsZoomMax = 1;
        opticsZoomInit = 0.75;
        mass = 99.199997;
        recoil = "recoil_BJK_ion_rifle";
        magazines[] = {"BJK_ionrifle_shot_mag", "BJK_ionrifle_overcharge_mag"};
        ACE_barrelLength = 605;
        dispersion = 0.001;
        class WeaponSlotsInfo {
            mass = 99.199997;
            allowedSlots[] = {901};
            class CowsSlot : CowsSlot_tau {
            };
        };
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "BJK_optics_ColiB";
            };
        };
        cameraDir = "eye_look";
        memoryPointCamera = "eye";
        discreteDistance[] = {100};
        handanim[] = {"OFP2_ManSkeleton", "\40k_tau\Weapons\Ion_Rifle\anims\Ionrifle_handanim.rtm"};
        selectionFireAnim = "muzzleFlash";
        modes[] = {"Single"};
        class Single : Mode_SemiAuto {
            reloadTime = 0.60000002;
            minRange = 0;
            minRangeProbab = 0.89999998;
            midRange = 250;
            midRangeProbab = 0.69999999;
            maxRange = 600;
            maxRangeProbab = 0.30000001;
            aiRateOfFireDistance = 600;
            aiRateOfFire = 6;
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"TIOW_ion_rifle_Shot_SoundSet",
                                  "TIOW_ion_rifle_Tail_SoundSet"};
            };
        };
        aiDispersionCoefY = 4;
        aiDispersionCoefX = 4;
    };
    class BJK_pulse_pistol : Pistol_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_pulse_pistol";
        Author = "JCaleb2014";
        displayName = "[Ba'Y JK] Pulse Pistol";
        descriptionShort = "Pulse Pistol";
        model = "\40k_tau\Weapons\pulse_pistol\pulse_pistol.p3d";
        picture = "\40k_tau\Weapons\Definitions\UI\Pistol.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Handgun\BJK_Pistol_CA.paa"};
        maxRecoilSway = 0.050000001;
        swayDecaySpeed = 1.5;
        opticsZoomMin = 0.25;
        opticsZoomMax = 1;
        opticsZoomInit = 0.75;
        mass = 30;
        recoil = "recoil_BJK_pulse_pistol";
        magazines[] = {"BJK_pulse_pistol_mag"};
        ACE_barrelLength = 605;
        dispersion = 0.0049999999;
        class WeaponSlotsInfo {
            mass = 99.199997;
            allowedSlots[] = {901};
        };
        cameraDir = "eye_look";
        memoryPointCamera = "eye";
        discreteDistance[] = {100};
        handanim[] = {"OFP2_ManSkeleton", "\40k_tau\Weapons\Pulse_pistol\anims\pulsepistol_handanim.rtm"};
        selectionFireAnim = "muzzleFlash";
        drySound[] = {"\DMCLS\dmcls_tau_sounds\misc\empty.wss", "db-5", 1, 20};
        reloadMagazineSound[] = {
            "\DMCLS\dmcls_tau_sounds\reload\reload_rifle.wss", 1, 1, 30};
        changeFiremodeSound[] = {"\DMCLS\dmcls_tau_sounds\misc\firemode.wss", 0.56234133, 1, 20};
        modes[] = {"Single"};
        class Single : Mode_SemiAuto {
            reloadTime = 0.2;
            minRange = 0;
            minRangeProbab = 0.89999998;
            midRange = 250;
            midRangeProbab = 0.69999999;
            maxRange = 600;
            maxRangeProbab = 0.30000001;
            aiRateOfFireDistance = 50;
            aiRateOfFire = 1;
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"DMCLS_pulse_rifle_Shot_SoundSet", "DMR01_Tail_SoundSet", "DMR01_InteriorTail_SoundSet"};
            };
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
    };
    class BJK_pulse_pistol_WC : BJK_pulse_pistol {
        baseWeapon = "BJK_pulse_pistol_WC";
        displayName = "[Ba'Y JK] Pulse Pistol (Water Caste)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Handgun\BJK_Pistol_WC_CA.paa"};
    };
    class BJK_DMCLS_pulse_rifle : Rifle_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_DMCLS_pulse_rifle";
        Author = "JCaleb2014";
        displayName = "[Ba'Y JK] Cadre Pulse Rifle";
        descriptionShort = "A standard pulse weaponry used by Fire Warriors";
        model = "\DMCLS\dmcls_tau_weapons\pulse_rifle\dmcls_pulse_rifle.p3d";
        selectionFireAnim = "MuzzleFlash";
        picture = "\DMCLS\dmcls_tau_weapons\pulse_rifle\data\UI_rifle.paa";
        opticsZoomMin = 0.25;
        opticsZoomMax = 1;
        opticsZoomInit = 0.75;
        memoryPointCamera = "eye";
        cameraDir = "eye_look";
        discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 100};
        discreteDistanceInitIndex = 0;
        discreteDistanceCameraPoint[] = {"eye"};
        distanceZoomMin = 100;
        distanceZoomMax = 1000;
        class WeaponSlotsInfo {
            mass = 100;
            allowedSlots[] = {901};
            class CowsSlot : CowsSlot_BJK_dmcls_tau {
            };
            class UnderBarrelSlot : UnderBarrelSlot_BJK_dmcls_tau {
            };
        };
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "BJK_DMCLS_Tau_Optics_1";
            };
        };
        maxRecoilSway = 0.0099999998;
        swayDecaySpeed = 3;
        recoil = "DMCLS_recoil_pulse_rifle";
        initSpeed = 1000;
        dexterity = 1.2;
        ACE_barrelLength = 605;
        dispersion = 0.00060000003;
        aiDispersionCoefY = 2;
        aiDispersionCoefX = 2;
        magazines[] = {"BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54"};
        handanim[] = {"OFP2_ManSkeleton", "\DMCLS\dmcls_tau_weapons\pulse_rifle\anims\pulse_rifle_handanim.rtm"};
        reloadAction = "DMCLS_pulse_rifle_reload";
        drySound[] = {"\DMCLS\dmcls_tau_sounds\misc\empty.wss", "db-5", 1, 20};
        reloadMagazineSound[] = {"\DMCLS\dmcls_tau_sounds\reload\reload_rifle.wss", 1, 1, 30};
        changeFiremodeSound[] = {"\DMCLS\dmcls_tau_sounds\misc\firemode.wss", 0.56234133, 1, 20};
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_Stock_CA.paa", "BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_PulseRifle_CA.paa"};
        modes[] = {"Single"};
        class Single : Mode_SemiAuto {
            reloadTime = 0.5;
            minRange = 0;
            minRangeProbab = 0.89999998;
            midRange = 500;
            midRangeProbab = 0.69999999;
            maxRange = 1500;
            maxRangeProbab = 0.30000001;
            aiRateOfFireDistance = 600;
            aiRateOfFire = 3;
            dispersion = 0.00060000003;
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"DMCLS_pulse_rifle_Shot_SoundSet", "DMR01_Tail_SoundSet", "DMR01_InteriorTail_SoundSet"};
            };
        };
    };
    class BJK_DMCLS_pulse_blaster : Rifle_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_DMCLS_pulse_blaster";
        Author = "JCaleb2014";
        displayName = "[Ba'Y JK] Pulse blaster";
        descriptionShort = "Short distance weapon used by Fire Warrior Breacher Squads";
        model = "\DMCLS\dmcls_tau_weapons\pulse_blaster\dmcls_pulse_blaster.p3d";
        selectionFireAnim = "MuzzleFlash";
        picture = "\DMCLS\dmcls_tau_weapons\pulse_blaster\data\UI_blaster.paa";
        opticsZoomMin = 0.25;
        opticsZoomMax = 1;
        opticsZoomInit = 0.75;
        memoryPointCamera = "eye";
        cameraDir = "eye_look";
        discreteDistance[] = {0};
        discreteDistanceInitIndex = 0;
        discreteDistanceCameraPoint[] = {"eye"};
        distanceZoomMin = 0;
        distanceZoomMax = 0;
        class WeaponSlotsInfo {
            mass = 100;
            allowedSlots[] = {901};
            class CowsSlot : CowsSlot_BJK_dmcls_tau {};
            class UnderBarrelSlot : UnderBarrelSlot_BJK_dmcls_tau {};
        };
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "BJK_DMCLS_Tau_Coli_2";
            };
        };
        maxRecoilSway = 0.050000001;
        swayDecaySpeed = 4;
        recoil = "DMCLS_recoil_pulse_blaster";
        dexterity = 1.8;
        ACE_barrelLength = 605;
        dispersion = 0.00019999999;
        aiDispersionCoefY = 2;
        aiDispersionCoefX = 2;
        magazines[] = {"BJK_DMCLS_pulse_blaster_mag_10", "BJK_DMCLS_pulse_blaster_mag_15", "BJK_DMCLS_pulse_blaster_mag_25", "BJK_DMCLS_pulse_blaster_airburst_mag_8", "BJK_DMCLS_pulse_blaster_airburst_mag_12", "BJK_DMCLS_pulse_blaster_airburst_mag_18", "BJK_DMCLS_pulse_blaster_slug_mag_10", "BJK_DMCLS_pulse_blaster_slug_mag_15", "BJK_DMCLS_pulse_blaster_slug_mag_25"};
        handanim[] = {"OFP2_ManSkeleton", "\DMCLS\dmcls_tau_weapons\pulse_rifle\anims\pulse_rifle_handanim.rtm"};
        reloadAction = "DMCLS_pulse_rifle_reload";
        drySound[] = {"\DMCLS\dmcls_tau_sounds\misc\empty.wss", "db-5", 1, 20};
        reloadMagazineSound[] = {"\DMCLS\dmcls_tau_sounds\reload\reload_rifle.wss", 1, 1, 30};
        changeFiremodeSound[] = {"\DMCLS\dmcls_tau_sounds\misc\firemode.wss", 0.56234133, 1, 20};
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_Stock_CA.paa",
                                      "BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_PulseBlaster_CA.paa"};
        modes[] = {"Single"};
        class Single : Mode_SemiAuto {
            reloadTime = 0.5;
            minRange = 0;
            minRangeProbab = 0.94999999;
            midRange = 100;
            midRangeProbab = 0.69999999;
            maxRange = 150;
            maxRangeProbab = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFire = 1;
            dispersion = 0.00019999999;
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"DMCLS_pulse_blaster_Shot_SoundSet", "DMR01_Tail_SoundSet", "DMR01_InteriorTail_SoundSet"};
            };
        };
    };
    class BJK_DMCLS_pulse_burster : Rifle_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_DMCLS_pulse_burster";
        Author = "JCaleb2014";
        displayName = "[Ba'Y JK] Pulse burster";
        descriptionShort = "A compact gun used by vehicle crews and special units";
        model = "\DMCLS\dmcls_tau_weapons\pulse_burster\dmcls_pulse_burster.p3d";
        selectionFireAnim = "MuzzleFlash";
        picture = "\DMCLS\dmcls_tau_weapons\pulse_burster\data\UI_burster.paa";
        opticsZoomMin = 0.25;
        opticsZoomMax = 1;
        opticsZoomInit = 0.75;
        memoryPointCamera = "eye";
        cameraDir = "eye_look";
        discreteDistance[] = {100, 200, 300};
        discreteDistanceInitIndex = 0;
        discreteDistanceCameraPoint[] = {"eye"};
        distanceZoomMin = 100;
        distanceZoomMax = 300;
        class WeaponSlotsInfo {
            mass = 60;
            allowedSlots[] = {901};
            class CowsSlot : CowsSlot_BJK_dmcls_tau {
            };
            class UnderBarrelSlot : UnderBarrelSlot_BJK_dmcls_tau {
            };
        };
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "BJK_DMCLS_Tau_Coli_1";
            };
        };
        maxRecoilSway = 0.029999999;
        swayDecaySpeed = 6;
        recoil = "DMCLS_recoil_pulse_burster";
        dexterity = 2.8;
        ACE_barrelLength = 605;
        dispersion = 0.0080000004;
        aiDispersionCoefY = 2;
        aiDispersionCoefX = 2;
        magazines[] = {"BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54"};
        handanim[] = {"OFP2_ManSkeleton", "\DMCLS\dmcls_tau_weapons\pulse_burster\anims\pulse_burster_handanim.rtm"};
        reloadAction = "DMCLS_pulse_rifle_reload";
        drySound[] = {"\DMCLS\dmcls_tau_sounds\misc\empty.wss", "db-5", 1, 20};
        reloadMagazineSound[] = {"\DMCLS\dmcls_tau_sounds\reload\reload_rifle.wss", 1, 1, 30};
        changeFiremodeSound[] = {"\DMCLS\dmcls_tau_sounds\misc\firemode.wss", 0.56234133, 1, 20};
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_Stock_CA.paa",
                                      "BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_PulseBurster_CA.paa"};
        modes[] = {"Single", "FullAuto", "FullAuto_close", "FullAuto_medium"};
        class Single : Mode_SemiAuto {
            reloadTime = 0.092;
            minRange = 100;
            minRangeProbab = 0.029999999;
            midRange = 200;
            midRangeProbab = 0.07;
            maxRange = 300;
            maxRangeProbab = 0.2;
            aiRateOfFireDistance = 200;
            aiRateOfFire = 2;
            dispersion = 0.0074999998;
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"DMCLS_pulse_burster_Shot_SoundSet", "DMR01_Tail_SoundSet", "DMR01_InteriorTail_SoundSet"};
            };
        };
        class FullAuto : Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 25;
            midRangeProbab = 0.40000001;
            maxRange = 60;
            maxRangeProbab = 0.5;
            aiRateOfFireDistance = 25;
            aiRateOfFire = 1;
            dispersion = 0.0074999998;
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"DMCLS_pulse_burster_Shot_SoundSet",
                                  "DMR01_Tail_SoundSet", "DMR01_InteriorTail_SoundSet"};
            };
        };
        class FullAuto_close : FullAuto {
            showToPlayer = 0;
            burst = 6;
            reloadTime = 0.079999998;
            minRange = 0;
            minRangeProbab = 0.89999998;
            midRange = 25;
            midRangeProbab = 0.80000001;
            maxRange = 50;
            maxRangeProbab = 0.5;
            aiRateOfFireDistance = 20;
            aiRateOfFire = 2;
        };
        class FullAuto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            reloadTime = 0.079999998;
            minRange = 30;
            minRangeProbab = 0.30000001;
            midRange = 100;
            midRangeProbab = 0.80000001;
            maxRange = 150;
            maxRangeProbab = 0.5;
            aiRateOfFireDistance = 100;
            aiRateOfFire = 3;
        };
    };
    class BJK_DMCLS_pulse_carbine : Rifle_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_DMCLS_pulse_carbine";
        Author = "JCaleb2014";
        displayName = "[Ba'Y JK] Pulse carbine";
        descriptionShort = "A compact gun used by vehicle crews and special units";
        model = "\DMCLS\dmcls_tau_weapons\pulse_carbine\dmcls_pulse_carbine.p3d";
        selectionFireAnim = "MuzzleFlash";
        picture = "\DMCLS\dmcls_tau_weapons\pulse_carbine\data\UI_carbine.paa";
        opticsZoomMin = 0.25;
        opticsZoomMax = 1;
        opticsZoomInit = 0.75;
        memoryPointCamera = "eye";
        cameraDir = "eye_look";
        discreteDistance[] = {100, 200, 300};
        discreteDistanceInitIndex = 0;
        discreteDistanceCameraPoint[] = {"eye"};
        distanceZoomMin = 100;
        distanceZoomMax = 300;
        class WeaponSlotsInfo {
            mass = 60;
            allowedSlots[] = {901};
            class CowsSlot : CowsSlot_BJK_dmcls_tau {
            };
            class UnderBarrelSlot : UnderBarrelSlot_BJK_dmcls_tau {
            };
        };
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "BJK_DMCLS_Tau_Optics_3";
            };
        };
        maxRecoilSway = 0.029999999;
        swayDecaySpeed = 6;
        recoil = "DMCLS_recoil_pulse_carbine";
        dexterity = 2.8;
        ACE_barrelLength = 605;
        dispersion = 0.0080000004;
        aiDispersionCoefY = 2;
        aiDispersionCoefX = 2;
        magazines[] = {"BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54"};
        handanim[] = {"OFP2_ManSkeleton", "\DMCLS\dmcls_tau_weapons\pulse_carbine\anims\pulse_carbine_handanim.rtm"};
        reloadAction = "DMCLS_pulse_rifle_reload";
        drySound[] = {"\DMCLS\dmcls_tau_sounds\misc\empty.wss", "db-5", 1, 20};
        reloadMagazineSound[] = {
            "\DMCLS\dmcls_tau_sounds\reload\reload_rifle.wss", 1, 1, 30};
        changeFiremodeSound[] = {"\DMCLS\dmcls_tau_sounds\misc\firemode.wss", 0.56234133,
                                 1,
                                 20};
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_Stock_CA.paa", "BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_PulseCarbine_CA.paa"};
        muzzles[] = {"this", "DMCLS_carbine_UGL"};
        modes[] = {"Single", "Burst"};
        class Single : Mode_SemiAuto {
            reloadTime = 0.1;
            minRange = 0;
            minRangeProbab = 0.89999998;
            midRange = 300;
            midRangeProbab = 0.60000002;
            maxRange = 1000;
            maxRangeProbab = 0.30000001;
            aiRateOfFireDistance = 300;
            aiRateOfFire = 3;
            dispersion = 0.003;
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"DMCLS_pulse_carbine_Shot_SoundSet", "DMR01_Tail_SoundSet", "DMR01_InteriorTail_SoundSet"};
            };
        };
        class Burst : Mode_Burst {
            burst = 3;
            reloadTime = 0.1;
            minRange = 1;
            minRangeProbab = 0.89999998;
            midRange = 50;
            midRangeProbab = 0.89999998;
            maxRange = 100;
            maxRangeProbab = 0.60000002;
            aiRateOfFireDistance = 50;
            aiRateOfFire = 3;
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"DMCLS_pulse_carbine_Shot_SoundSet", "DMR01_Tail_SoundSet", "DMR01_InteriorTail_SoundSet"};
            };
        };
        class DMCLS_carbine_UGL : UGL_F {
            displayName = "Grenade launcher";
            descriptionShort = "Grenade launcher";
            useModelOptics = 0;
            useExternalOptic = 1;
            magazines[] = {"DMCLS_tau_photon_grenade_uglmag", "DMCLS_tau_fusion_grenade_uglmag", "DMCLS_tau_smoke_grenade_uglmag", "DMCLS_tau_smoke_grenade_red_uglmag", "DMCLS_tau_smoke_grenade_green_uglmag", "DMCLS_tau_smoke_grenade_blue_uglmag", "ACE_HuntIR_M203"};
            magazineWell[] = {};
            initSpeed = 300;
            recoil = "DMCLS_recoil_ugl";
            muzzlePos = "gl_muzzle";
            muzzleEnd = "gl_chamber";
            reloadAction = "DMCLS_ugl_reload";
            drySound[] = {"\DMCLS\dmcls_tau_sounds\misc\empty.wss", "db-5", 1, 20};
            changeFiremodeSound[] = {"\DMCLS\dmcls_tau_sounds\misc\firemode.wss", 0.56234133, 1, 20};
            reloadMagazineSound[] = {"\DMCLS\dmcls_tau_sounds\reload\reload_grenade.wss", 1, 1, 30};
            modes[] = {"Single"};
            class Single : Mode_SemiAuto {
                reloadTime = 0.2;
                minRange = 50;
                minRangeProbab = 0.60000002;
                midRange = 100;
                midRangeProbab = 0.89999998;
                maxRange = 300;
                maxRangeProbab = 0.60000002;
                aiRateOfFireDistance = 300;
                aiRateOfFire = 10;
                dispersion = 0.0099999998;
                sounds[] = {"StandardSound"};
                class StandardSound {
                    soundSetShot[] =
                        {
                            "DMCLS_ugl_Shot_SoundSet",
                            "UGL_Tail_SoundSet",
                            "UGL_InteriorTail_SoundSet"};
                };
            };
        };
    };
    class BJK_DMCLS_rail_rifle : Rifle_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_DMCLS_rail_rifle";
        Author = "JCaleb2014";
        displayName = "[Ba'Y JK] Rail Rifle";
        descriptionShort = "Light armour piercing weapon";
        model = "\DMCLS\dmcls_tau_weapons\rail_rifle\dmcls_rail_rifle.p3d";
        selectionFireAnim = "MuzzleFlash";
        picture = "\DMCLS\dmcls_tau_weapons\rail_rifle\data\UI_rail.paa";
        opticsZoomMin = 0.25;
        opticsZoomMax = 1;
        opticsZoomInit = 0.75;
        memoryPointCamera = "eye";
        cameraDir = "eye_look";
        discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 100};
        discreteDistanceInitIndex = 0;
        discreteDistanceCameraPoint[] = {"eye"};
        distanceZoomMin = 100;
        distanceZoomMax = 1000;
        class WeaponSlotsInfo {
            mass = 100;
            allowedSlots[] = {901};
            class CowsSlot : CowsSlot_BJK_dmcls_tau {
            };
            class UnderBarrelSlot : UnderBarrelSlot_BJK_dmcls_tau {
            };
        };
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "BJK_DMCLS_Tau_Optics_2";
            };
        };
        maxRecoilSway = 0.016000001;
        swayDecaySpeed = 3;
        recoil = "DMCLS_recoil_rail_rifle";
        initSpeed = 1000;
        dexterity = 0.60000002;
        ACE_barrelLength = 605;
        dispersion = 0.00060000003;
        aiDispersionCoefY = 2;
        aiDispersionCoefX = 2;
        magazines[] = {"BJK_DMCLS_rail_rifle_mag"};
        handanim[] = {"OFP2_ManSkeleton", "\DMCLS\dmcls_tau_weapons\rail_rifle\anims\rail_rifle_handanim.rtm"};
        reloadAction = "DMCLS_rail_rifle_reload";
        drySound[] = {"\DMCLS\dmcls_tau_sounds\misc\empty.wss", "db-5", 1, 20};
        reloadMagazineSound[] = {"\DMCLS\dmcls_tau_sounds\reload\reload_rail.wss", 1, 1, 30};
        changeFiremodeSound[] = {"\DMCLS\dmcls_tau_sounds\misc\firemode.wss", 0.56234133, 1, 20};
        hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_RailFront_CA.paa", "BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_RailBack_CA.paa", "BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_RailMag_CA.paa", "\DMCLS\dmcls_tau_weapons\rail_rifle\data\details_CA.paa"};
        modes[] = {"Single"};
        class Single : Mode_SemiAuto {
            reloadTime = 0.5;
            minRange = 0;
            minRangeProbab = 0.89999998;
            midRange = 500;
            midRangeProbab = 0.69999999;
            maxRange = 1500;
            maxRangeProbab = 0.30000001;
            aiRateOfFireDistance = 600;
            aiRateOfFire = 5;
            dispersion = 0.00060000003;
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"DMCLS_rail_rifle_Shot_SoundSet", "DMR01_Tail_SoundSet", "DMR01_InteriorTail_SoundSet"};
            };
        };
    };
    class Default;
    class Put : Default {
        muzzles[] +=
            {"DemoChargeMuzzle", "PipeBombMuzzle", "MineMuzzle", "DirectionalMineRemoteMuzzle",
             "ClassicMineRangeMuzzle", "BoundingMineRangeMuzzle", "DirectionalMineRangeMuzzle", "ClassicMineWireMuzzle"};
        displayName = "$STR_A3_CfgWeapons_Put0";
        class PutMuzzle;
        class PipeBombMuzzle : PutMuzzle {
            autoreload = 0;
            displayName = "$STR_A3_cfgMagazines_PipeBomb0";
            magazines[] += {"SatchelCharge_Remote_Mag", "IEDUrbanBig_Remote_Mag", "IEDLandBig_Remote_Mag", "BJK_ExpSmall_Remote_Mag", "BJK_ExpBig_Remote_Mag"};
            enableAttack = 1;
            showToPlayer = 0;
        };
    };

    // Gue'vesa Weapons
    class ic_PulseRifle_base;
    class BJK_Guevesa_PulseRifle : ic_PulseRifle_base {
        baseWeapon = "BJK_Guevesa_PulseRifle";
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Gue'vesa Pulse Rifle";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        magazines[] = {"BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_PulseRifle_Guevesa_CA.paa"};
    };
    class BJK_Guevesa_PulseRifle_Alt : BJK_Guevesa_PulseRifle {
        baseWeapon = "BJK_Guevesa_PulseRifle_Alt";
        displayName = "[Ba'Y JK] Gue'vesa Pulse Rifle (Alternate)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Rifle\BJK_PulseRifle_Guevesa_CA2.paa"};
    };
    // Tau Headgear
    class HeadgearItem;
    class H_HelmetO_ViperSP_hex_F;
    class BJK_FireWarrior_Strike_Helmet : H_HelmetO_ViperSP_hex_F {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Helmet (Strike)";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = "\40k_tau\Weapons\Definitions\UI\Helmet.paa";
        model = "\40k_tau\Headgear\HelmetS.p3d";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_FireWarrior_Strike_Helmet_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_FireWarrior_Helmet_Headset_CO.paa"};
        subItems[] = {};
        class ItemInfo : HeadgearItem {
            mass = 10;
            uniformModel = "\40k_tau\Headgear\HelmetS.p3d";
            hiddenSelections[] = {"camo", "camo1"};
            subItems[] = {"Integrated_NVG_F"};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 80;
                    passThrough = 0.1;
                };
            };
        };
    };
    class BJK_FireWarrior_Strike_Helmet_Commander : H_HelmetO_ViperSP_hex_F {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Helmet (Strike, Shas'Ui)";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = "\40k_tau\Weapons\Definitions\UI\Helmet.paa";
        model = "\40k_tau\Headgear\HelmetS.p3d";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_FireWarrior_Strike_Helmet_Commander_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_FireWarrior_Helmet_Headset_CO.paa"};
        subItems[] = {};
        class ItemInfo : HeadgearItem {
            mass = 10;
            uniformModel = "\40k_tau\Headgear\HelmetS.p3d";
            hiddenSelections[] = {"camo", "camo1"};
            subItems[] = {"Integrated_NVG_F"};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 80;
                    passThrough = 0.1;
                };
            };
        };
    };

    class BJK_FireWarrior_Breacher_Helmet : H_HelmetO_ViperSP_hex_F {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Helmet (Breacher)";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = "\40k_tau\Weapons\Definitions\UI\Helmet.paa";
        model = "\40k_tau\Headgear\HelmetB2.p3d";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_FireWarrior_Breacher_Helmet_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_FireWarrior_Helmet_Headset_CO.paa"};
        subItems[] = {};
        class ItemInfo : HeadgearItem {
            mass = 10;
            uniformModel = "\40k_tau\Headgear\HelmetB2.p3d";
            hiddenSelections[] = {"camo", "camo1"};
            subItems[] = {"Integrated_NVG_F"};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 80;
                    passThrough = 0.1;
                };
            };
        };
    };

    // Gue'vesa Headgear
    class IC_cad_helmet_BASE;
    class BJK_Guevesa_Helmet : IC_cad_helmet_BASE {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Gue'vesa Helmet";
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Helmet_CO.paa"};
        class ItemInfo : ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 40;
                    passThrough = 0.35;
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Helmet_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_HelmetCover_CO.paa"};
        class ItemInfo : ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 50;
                    passThrough = 0.25;
                };
            };
        };
    };
    class BJK_Guevesa_Helmet_Modified_Alt1 : BJK_Guevesa_Helmet_Modified {
        displayName = "[Ba'Y JK] Gue'vesa Helmet (Modified, Alternate)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Helmet_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_HelmetCover_CO2.paa"};
    };
    class BJK_Guevesa_Helmet_Modified_Alt2 : BJK_Guevesa_Helmet_Modified {
        displayName = "[Ba'Y JK] Gue'vesa Helmet (Modified, Alternate 2)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Helmet_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_HelmetCover_CO3.paa"};
    };
    class BJK_Guevesa_Helmet_Modified_Commander : BJK_Guevesa_Helmet_Modified {
        displayName = "[Ba'Y JK] Gue'vesa Helmet (Modified, Commander)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Helmet_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_HelmetCover_Commander_CO.paa"};
    };
    class BJK_Guevesa_Helmet_Modified_Commander_Alt1 : BJK_Guevesa_Helmet_Modified {
        displayName = "[Ba'Y JK] Gue'vesa Helmet (Modified, Commander, Alternate)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Helmet_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_HelmetCover_Commander_CO2.paa"};
    };
    class BJK_Guevesa_Helmet_Modified_Commander_Alt2 : BJK_Guevesa_Helmet_Modified {
        displayName = "[Ba'Y JK] Gue'vesa Helmet (Modified, Commander, Alternate 2)";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Helmet_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_HelmetCover_Commander_CO3.paa"};
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Kasrkin_Helmet_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Kasrkin_Rebreather_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_CO2.paa"};
        class ItemInfo : HeadgearItem {
            mass = 45;
            uniformModel = "\CadFoot\Model\CadianKasrkinHelmet.p3d";
            allowedSlots[] = {801, 901, 701, 605};
            modelSides[] = {3, 1};
            hiddenSelections[] = {"camo", "camoB", "Camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Kasrkin_Helmet_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Kasrkin_Rebreather_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_CO2.paa"};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 50;
                    passThrough = 0.05;
                };
            };
        };
        subItems[] = {"Integrated_NVG_TI_1_F"};
    };
    class BJK_Guevesa_Kasrkin_Helmet_Alt : Cad_Inf_Helm2 {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Helmet (Alternate)";
        picture = "\CadFoot\Icon\CadianKasrkinHelmet_ca.paa";
        model = "\CadFoot\Model\CadianKasrkinHelmet.p3d";
        hiddenSelections[] = {"camo", "camoB", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Kasrkin_Helmet_CO2.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Kasrkin_Rebreather_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_CO2.paa"};
        class ItemInfo : HeadgearItem {
            mass = 45;
            uniformModel = "\CadFoot\Model\CadianKasrkinHelmet.p3d";
            allowedSlots[] = {801, 901, 701, 605};
            modelSides[] = {3, 1};
            hiddenSelections[] = {"camo", "camoB", "Camo1"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Kasrkin_Helmet_CO2.paa", "BaY_JKaara_Armoury\Data\Textures\Headgear\BJK_Guevesa_Kasrkin_Rebreather_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_CO2.paa"};
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 50;
                    passThrough = 0.05;
                };
            };
        };
        subItems[] = {"Integrated_NVG_TI_1_F"};
    };

    // Tau Uniforms
    class U_I_CombatUniform;
    class UniformItem;
    class BJK_FireWarrior_Uniform : U_I_CombatUniform {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Fire Warrior Uniform";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        picture = "\40k_tau\Weapons\Definitions\UI\Uniform.paa";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_FireWarrior_Uniform_Armour_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_FireWarrior_Uniform_Cloth_CO.paa"};
        class ItemInfo : UniformItem {
            uniformModel = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
            uniformClass = "BJK_FireWarrior";
            containerClass = "Supply150";
            mass = 40;
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_Guevesa_Uniform_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Uniform_NoCamo.paa"};
        class ItemInfo : UniformItem {
            uniformClass = "BJK_Guevesa_Kasrkin_Base";
            containerClass = "Supply150";
            mass = 40;
        };
    };
    class BJK_Guevesa_Kasrkin_Uniform : BJK_Guevesa_Kasrkin_Uniform_Base {
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Uniform";
        hiddenSelections[] = {"camo", "camoB"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_Guevesa_Kasrkin_Uniform_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_CO2.paa"};
        class ItemInfo : UniformItem {
            uniformClass = "BJK_Guevesa_Kasrkin";
            containerClass = "Supply250";
            mass = 60;
        };
    };
    class BJK_Guevesa_Kasrkin_Uniform_Alt : BJK_Guevesa_Kasrkin_Uniform_Base {
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Uniform (Alternate)";
        hiddenSelections[] = {"camo", "camoB"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_Guevesa_Kasrkin_Uniform_CO2.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_CO4.paa"};
        class ItemInfo : UniformItem {
            uniformClass = "BJK_Guevesa_Kasrkin_Alt";
            containerClass = "Supply250";
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_Guevesa_Uniform_Pants_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_Guevesa_Uniform_Top_CO.paa"};
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "BJK_Guevesa_Base";
            containerClass = "Supply150";
            mass = 80;
        };
    };
    // Tau Vests
    class V_PlateCarrier1_rgr;
    class VestItem;
    class iteminfo;
    class BJK_FireWarrior_Pauldrons : V_PlateCarrier1_rgr {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[Ba'Y JK] Fire Warrior Pauldrons";
        picture = "\40k_tau\Weapons\Definitions\UI\Gear.paa";
        model = "\40k_tau\Gear\Belt.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_FireWarrior_Pauldrons_CO.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\40k_tau\Gear\Belt.p3d";
            containerClass = "Supply140";
            hiddenSelections[] = {"camo"};
            mass = 80;
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 30;
                    passThrough = 0.30000001;
                };
                class Arms {
                    hitpointName = "HitArms";
                    armor = 30;
                    passThrough = 0.30000001;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 30;
                    passThrough = 0.30000001;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 30;
                    passThrough = 0.30000001;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 30;
                    passThrough = 0.30000001;
                };
                class Pelvis {
                    hitpointName = "HitPelvis";
                    armor = 30;
                    passThrough = 0.30000001;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 30;
                    passThrough = 0.30000001;
                };
            };
        };
    };
    class BJK_FireWarrior_Pauldrons_Commander : BJK_FireWarrior_Pauldrons {
        displayName = "[Ba'Y JK] Fire Warrior Pauldrons (Shas'Ui)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_FireWarrior_Pauldrons_Commander_CO.paa"};
    };
    class BJK_FireWarrior_Pauldrons_Medical : BJK_FireWarrior_Pauldrons {
        displayName = "[Ba'Y JK] Fire Warrior Pauldrons (Medical)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_FireWarrior_Pauldrons_Medical_CO.paa"};
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_CO2.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_Icons_CO.paa"};
        class ItemInfo : ItemInfo {
            containerClass = "Supply150";
            overlaySelectionsInfo[] = {"ghillie_hide"};
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 200;
                    passThrough = 0.05;
                };
                class Arms {
                    hitpointName = "HitArms";
                    armor = 200;
                    passThrough = 0.05;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 225;
                    passThrough = 0.06;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 180;
                    passThrough = 0.06;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 150;
                    passThrough = 0.03;
                };
                class Pelvis {
                    hitpointName = "HitPelvis";
                    armor = 225;
                    passThrough = 0.03;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 250;
                    passThrough = 0.06;
                };
            };
        };
    };
    class BJK_Guevesa_Kasrkin_Armor_Alt1 : Cad_KasrGear667th {
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Armor (Alternate)";
        hiddenSelections[] = {"camo", "camoB", "RegimentCamo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_CO3.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_CO4.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_Icons_CO.paa"};
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_CO2.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_CO3.paa"};
        class ItemInfo : ItemInfo {
            uniformModel = "\IC_Departmento_Munitorum\IC_Guevesa\ic_GuevesaArmour.p3d";
            containerClass = "Supply120";
            mass = 25;
            overlaySelectionsInfo[] = {};
            hiddenSelections[] = {"camo", "camo1", "camo3"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_CO2.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_CO3.paa"};
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 60;
                    passThrough = 0.15;
                };
                class Arms {
                    hitpointName = "HitArms";
                    armor = 60;
                    passThrough = 0.25;
                };
                class Chest {
                    hitpointName = "HitChest";
                    armor = 70;
                    passThrough = 0.3;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 50;
                    passThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 70;
                    passThrough = 0.2;
                };
                class Pelvis {
                    hitpointName = "HitPelvis";
                    armor = 50;
                    passThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
                class Legs {
                    hitpointName = "HitLegs";
                    armor = 50;
                    passThrough = 0.1;
                };
            };
        };
    };
    class BJK_Guevesa_Medical_Vest : BJK_Guevesa_Vest {
        displayName = "[Ba'Y JK] Gue'vesa Armor (Medical)";
        hiddenSelections[] = {"camo", "camo1", "camo3"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_Medical_CO2.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_Medical_CO3.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo", "camo1", "camo3"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_Medical_CO2.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_Medical_CO3.paa"};
        };
    };
    class BJK_Guevesa_Commander_Vest : BJK_Guevesa_Vest {
        displayName = "[Ba'Y JK] Gue'vesa Armor (Shas'Ui)";
        hiddenSelections[] = {"camo", "camo1", "camo3"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_CO2.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_Commander_CO3.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"camo", "camo1", "camo3"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_CO1.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_CO2.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Armor_Commander_CO3.paa"};
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_LostBrother_Body2_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_LostBrother_Body_CO.paa"};
        class ItemInfo : ItemInfo {
            hiddenSelections[] = {"Camo1", "Camo2"};
            hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_LostBrother_Body2_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_LostBrother_Body_CO.paa"};
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_LostBrother_Body_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_LostBrother_Body2_CO.paa"};
        class ItemInfo : ItemInfo {
            uniformClass = "BJK_SpaceMarine_Mk7_Tactical";
        };
    };
};

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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Facewear\BJK_Guevesa_Rebreather_CO.paa"};
        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 40;
                passThrough = 0.2;
            };
        };
    };
    class BJK_Guevesa_Rebreather_Alt : IC_cad_rebreather_base {
        displayName = "[Ba'Y JK] Guevesa Rebreather (Alternate)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Facewear\BJK_Guevesa_Rebreather_CO2.paa"};
    };
};

class CfgFactionClasses {
    class BJK_F {
        displayName = "Ba'Y J'Kaara Cadre";
        priority = 1;
        side = 2;
    };
};
class CfgEditorCategories {
    class BJK_Tau {
        displayName = "Ba'Y Cadre";
    };
};
class CfgEditorSubcategories {
    class BJK_M {
        displayName = "Men";
    };
    class BJK_SM {
        displayName = "Space Marines";
    };
    class BJK_V {
        displayName = "Vehicles";
    };
    class BJK_DR {
        displayName = "Drones";
    };
};
class EventHandlers;
class CfgVehicles {
    // LR Radio & Backpacks
    class Bag_Base;
    class BJK_FireWarrior_Backpack : Bag_Base {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Backpack";
        isbackpack = 1;
        reversed = 1;
        scopeArsenal = 2;
        scope = 2;
        picture = "\40k_tau\Weapons\Definitions\UI\Backpack.paa";
        model = "40k_tau\Backpack\Strike_backpack.p3d";
        maximumLoad = 260;
        mass = 50;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Backpack\BJK_FireWarrior_Backpack_CO.paa"};
        _generalMacro = "BJK_FireWarrior_Backpack";
        tf_dialog = "rt1523g_radio_dialog";
        // clang-format off
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        // clang-format on
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "digital_lr";
    };
    class BJK_FireWarrior_Medical : Bag_Base {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Fire Warrior Backpack (Medical)";
        isbackpack = 1;
        reversed = 1;
        scopeArsenal = 2;
        scope = 2;
        picture = "\40k_tau\Weapons\Definitions\UI\Backpack.paa";
        model = "40k_tau\Backpack\Strike_backpack.p3d";
        maximumLoad = 260;
        mass = 50;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Backpack\BJK_FireWarrior_Backpack_Medical_CO.paa"};
        _generalMacro = "BJK_FireWarrior_Medical";
        tf_dialog = "rt1523g_radio_dialog";
        // clang-format off
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        // clang-format on
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "digital_lr";
    };
    class BJK_Guevesa_Kasrkin_Backpack : Bag_Base {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        isbackpack = 1;
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Powerpack";
        picture = "\CadFoot\Icon\KasrkinBackpack_ca.paa";
        model = "\CadFoot\Model\CadianKasrkinBackpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Backpack\BJK_Guevesa_Kasrkin_Backpack_CO.paa"};
        maximumLoad = 260;
        _generalMacro = "BJK_Guevesa_Kasrkin_Backpack";
        tf_dialog = "rt1523g_radio_dialog";
        // clang-format off
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        // clang-format on
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
    };
    class BJK_Guevesa_Kasrkin_Cables_Backpack : Bag_Base {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        isbackpack = 1;
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Powerpack (Cables)";
        picture = "\IC_CAD_inf\Backpacks\data\kasr_pack_ca.paa";
        model = "\IC_CAD_inf\Backpacks\ic_cad_kasr_pack";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Backpack\BJK_Guevesa_Kasrkin_Backpack_Cables_CO.paa"};
        maximumLoad = 260;
        _generalMacro = "BJK_Guevesa_Kasrkin_Cables_Backpack";
        tf_dialog = "rt1523g_radio_dialog";
        // clang-format off
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        // clang-format on
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
    };
    class BJK_Guevesa_Kasrkin_Cables_Backpack_Alt : Bag_Base {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        isbackpack = 1;
        displayName = "[Ba'Y JK] Gue'vesa Kasrkin Powerpack (Cables, Alternate)";
        picture = "\IC_CAD_inf\Backpacks\data\kasr_pack_ca.paa";
        model = "\IC_CAD_inf\Backpacks\ic_cad_kasr_pack";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Backpack\BJK_Guevesa_Kasrkin_Backpack_Cables_CO2.paa"};
        maximumLoad = 260;
        _generalMacro = "BJK_Guevesa_Kasrkin_Cables_Backpack";
        tf_dialog = "rt1523g_radio_dialog";
        // clang-format off
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        // clang-format on
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
    };

    class IC_CAD_assaultpack_beige_03;
    class BJK_Guevesa_Backpack : IC_CAD_assaultpack_beige_03 {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        isbackpack = 1;
        displayName = "[Ba'Y JK] Gue'vesa Backpack";
        model = "\IC_CAD_inf\Backpacks\Assault_pack_03";
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Backpack\BJK_Guevesa_Backpack_CO.paa"};
    };
    class BJK_Guevesa_Backpack_Medical : IC_CAD_assaultpack_beige_03 {
        maximumLoad = 360;
        displayName = "[Ba'Y JK] Gue'vesa Backpack (Medical)";
        model = "\IC_CAD_inf\Backpacks\Assault_pack_03";
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Backpack\BJK_Guevesa_Backpack_Medical_CO.paa"};
    };

    // Tau Men
    class I_soldier_base_F;
    class I_Soldier_F : I_soldier_base_F {
        class HitPoints;
    };
    class BJK_FireWarrior : I_Soldier_F {
        author = "JCaleb2014";
        scope = 2;
        displayName = "Fire Warrior";
        faction = "BJK_F";
        editorSubcategory = "BJK_M";
        identityTypes[] = {"Tau", "LanguageENGB_F"};
        uniformClass = "BJK_FireWarrior_Uniform";
        backpack = "BA_Fire_Warrior_BCK";
        model = "\40k_tau\Fire_Warrior\Fire_Warrior.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_FireWarrior_Uniform_Armour_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_FireWarrior_Uniform_Cloth_CO.paa"};

        linkedItems[] = {"ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "BJK_FireWarrior_Strike_Helmet", "BA_Fire_Warrior_Vest"};
        respawnLinkedItems[] = {"ItemMap", "ItemRadio", "ItemCompass", "ItemWatch", "BJK_FireWarrior_Strike_Helmet", "BA_Fire_Warrior_Vest"};
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_Guevesa_Uniform_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Uniform_NoCamo.paa"};
    };
    class BJK_Guevesa_Kasrkin : BJK_Guevesa_Kasrkin_Base {
        displayName = "Gue'vesa Kasrkin";
        uniformClass = "BJK_Guevesa_Kasrkin_Uniform";
        hiddenSelections[] = {"camo", "camoB"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_Guevesa_Kasrkin_Uniform_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_CO2.paa"};
    };
    class BJK_Guevesa_Kasrkin_Alt : BJK_Guevesa_Kasrkin_Base {
        displayName = "Gue'vesa Kasrkin (Alternate)";
        uniformClass = "BJK_Guevesa_Kasrkin_Uniform_Alt";
        hiddenSelections[] = {"camo", "camoB"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_Guevesa_Kasrkin_Uniform_CO2.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_Guevesa_Kasrkin_Armor_CO4.paa"};
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_Guevesa_Uniform_Pants_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Uniform\BJK_Guevesa_Uniform_Top_CO.paa"};
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\Data\Textures\Vest\BJK_LostBrother_Body_CO.paa", "BaY_JKaara_Armoury\Data\Textures\Vest\BJK_LostBrother_Body2_CO.paa"};
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