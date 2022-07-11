#define _ARMA_

class CfgPatches {
    class BaY_JKaara_Armory_Rifle {
        name = "Ba'Y J'Kaara Armory (Rifle)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_40k_Tau", "CadFoot", "TIOW_Admech"};
        weapons[] = {"BJK_ion_rifle", "BJK_DMCLS_pulse_rifle", "BJK_DMCLS_pulse_blaster", "BJK_DMCLS_pulse_burster", "BJK_DMCLS_pulse_carbine", "BJK_DMCLS_rail_rifle", "BJK_Guevesa_PulseRifle", "BJK_Guevesa_PulseRifle_Alt"};
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

class CfgWeapons {
    // Base Weapons
    class Rifle_Base_F;
    class Pistol_Base_F;

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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_Ion_Rifle_CA.paa"};
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
    class BJK_DMCLS_pulse_rifle : Rifle_Base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_DMCLS_pulse_rifle";
        Author = "JCaleb2014";
        displayName = "[Ba'Y JK] Pulse Rifle";
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
        magazines[] = {"BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54", "VNG_pulse_rifle_mag"};
        handanim[] = {"OFP2_ManSkeleton", "\DMCLS\dmcls_tau_weapons\pulse_rifle\anims\pulse_rifle_handanim.rtm"};
        reloadAction = "DMCLS_pulse_rifle_reload";
        drySound[] = {"\DMCLS\dmcls_tau_sounds\misc\empty.wss", "db-5", 1, 20};
        reloadMagazineSound[] = {"\DMCLS\dmcls_tau_sounds\reload\reload_rifle.wss", 1, 1, 30};
        changeFiremodeSound[] = {"\DMCLS\dmcls_tau_sounds\misc\firemode.wss", 0.56234133, 1, 20};
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_Stock_CA.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_PulseRifle_CA.paa"};
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
        magazines[] = {"BJK_DMCLS_pulse_blaster_mag_10", "BJK_DMCLS_pulse_blaster_mag_15", "BJK_DMCLS_pulse_blaster_mag_25", "BJK_DMCLS_pulse_blaster_airburst_mag_8", "BJK_DMCLS_pulse_blaster_airburst_mag_12", "BJK_DMCLS_pulse_blaster_airburst_mag_18", "BJK_DMCLS_pulse_blaster_slug_mag_10", "BJK_DMCLS_pulse_blaster_slug_mag_15", "BJK_DMCLS_pulse_blaster_slug_mag_25", "TIOW_pulse_blaster_mag"};
        handanim[] = {"OFP2_ManSkeleton", "\DMCLS\dmcls_tau_weapons\pulse_rifle\anims\pulse_rifle_handanim.rtm"};
        reloadAction = "DMCLS_pulse_rifle_reload";
        drySound[] = {"\DMCLS\dmcls_tau_sounds\misc\empty.wss", "db-5", 1, 20};
        reloadMagazineSound[] = {"\DMCLS\dmcls_tau_sounds\reload\reload_rifle.wss", 1, 1, 30};
        changeFiremodeSound[] = {"\DMCLS\dmcls_tau_sounds\misc\firemode.wss", 0.56234133, 1, 20};
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_Stock_CA.paa",
                                      "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_PulseBlaster_CA.paa"};
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
        magazines[] = {"BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54", "TIOW_pulse_mag"};
        handanim[] = {"OFP2_ManSkeleton", "\DMCLS\dmcls_tau_weapons\pulse_burster\anims\pulse_burster_handanim.rtm"};
        reloadAction = "DMCLS_pulse_rifle_reload";
        drySound[] = {"\DMCLS\dmcls_tau_sounds\misc\empty.wss", "db-5", 1, 20};
        reloadMagazineSound[] = {"\DMCLS\dmcls_tau_sounds\reload\reload_rifle.wss", 1, 1, 30};
        changeFiremodeSound[] = {"\DMCLS\dmcls_tau_sounds\misc\firemode.wss", 0.56234133, 1, 20};
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_Stock_CA.paa",
                                      "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_PulseBurster_CA.paa"};
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
        magazines[] = {"BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54", "TIOW_pulse_mag"};
        handanim[] = {"OFP2_ManSkeleton", "\DMCLS\dmcls_tau_weapons\pulse_carbine\anims\pulse_carbine_handanim.rtm"};
        reloadAction = "DMCLS_pulse_rifle_reload";
        drySound[] = {"\DMCLS\dmcls_tau_sounds\misc\empty.wss", "db-5", 1, 20};
        reloadMagazineSound[] = {
            "\DMCLS\dmcls_tau_sounds\reload\reload_rifle.wss", 1, 1, 30};
        changeFiremodeSound[] = {"\DMCLS\dmcls_tau_sounds\misc\firemode.wss", 0.56234133,
                                 1,
                                 20};
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_Stock_CA.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_PulseCarbine_CA.paa"};
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
        magazines[] = {"BJK_DMCLS_rail_rifle_mag", "TIOW_railrifle_mag"};
        handanim[] = {"OFP2_ManSkeleton", "\DMCLS\dmcls_tau_weapons\rail_rifle\anims\rail_rifle_handanim.rtm"};
        reloadAction = "DMCLS_rail_rifle_reload";
        drySound[] = {"\DMCLS\dmcls_tau_sounds\misc\empty.wss", "db-5", 1, 20};
        reloadMagazineSound[] = {"\DMCLS\dmcls_tau_sounds\reload\reload_rail.wss", 1, 1, 30};
        changeFiremodeSound[] = {"\DMCLS\dmcls_tau_sounds\misc\firemode.wss", 0.56234133, 1, 20};
        hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_RailFront_CA.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_RailBack_CA.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_RailMag_CA.paa", "\DMCLS\dmcls_tau_weapons\rail_rifle\data\details_CA.paa"};
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

    // Gue'vesa Weapons
    class ic_PulseRifle_base;
    class BJK_Guevesa_PulseRifle : ic_PulseRifle_base {
        baseWeapon = "BJK_Guevesa_PulseRifle";
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Gue'vesa Pulse Rifle";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        magazines[] = {"BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54", "VNG_pulse_rifle_mag"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_PulseRifle_Guevesa_CA.paa"};
    };
    class BJK_Guevesa_PulseRifle_Alt : BJK_Guevesa_PulseRifle {
        baseWeapon = "BJK_Guevesa_PulseRifle_Alt";
        displayName = "[Ba'Y JK] Gue'vesa Pulse Rifle (Alternate)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_PulseRifle_Guevesa_CA2.paa"};
    };
};

class EventHandlers;
class CBA_Extended_EventHandlers_base;

class CfgMods {
    author = "JCaleb2014";
    timepacked = "1650387927";
};