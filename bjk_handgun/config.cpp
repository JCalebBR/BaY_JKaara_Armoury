#define _ARMA_

class CfgPatches {
    class BaY_JKaara_Armory_Handgun {
        name = "Ba'Y J'Kaara Armory (Handgun)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_40k_Tau"};
        weapons[] = {"BJK_pulse_pistol", "BJK_pulse_pistol_WC", "BJK_pulse_pistol_EC"};
    };
};

class Mode_SemiAuto;
class CfgWeapons {
    // Base Weapons
    class Pistol_Base_F;
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_handgun\Textures\BJK_PulsePistol_CO.paa"};
        maxRecoilSway = 0.050000001;
        swayDecaySpeed = 1.5;
        opticsZoomMin = 0.25;
        opticsZoomMax = 1;
        opticsZoomInit = 0.75;
        mass = 30;
        recoil = "recoil_BJK_pulse_pistol";
        magazines[] = {"BJK_pulse_pistol_mag", "TIOW_pulse_pistol_mag"};
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
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_handgun\Textures\BJK_PulsePistol_WC_CO.paa"};
    };
    class BJK_pulse_pistol_EC : BJK_pulse_pistol {
        baseWeapon = "BJK_pulse_pistol_EC";
        displayName = "[Ba'Y JK] Pulse Pistol (Earth Caste)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_handgun\Textures\BJK_PulsePistol_EC_CO.paa"};
    };
};

class EventHandlers;
class CBA_Extended_EventHandlers_base;

class CfgMods {
    author = "JCaleb2014";
    timepacked = "1650387927";
};