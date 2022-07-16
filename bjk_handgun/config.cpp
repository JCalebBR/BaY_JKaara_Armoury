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

class Single;
class WeaponSlotsInfo;
class CfgWeapons {
    // Base Weapons
    class TIOW_pulse_pistol;
    class BJK_pulse_pistol : TIOW_pulse_pistol {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_pulse_pistol";
        displayName = "[Ba'Y JK] Pulse Pistol";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_handgun\Textures\BJK_PulsePistol_CO.paa"};
        magazines[] = {"BJK_pulse_pistol_mag", "TIOW_pulse_pistol_mag"};
        recoil = "DMCLS_recoil_pulse_rifle";
        class WeaponSlotsInfo : WeaponSlotsInfo {};
        class Single : Single {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"DMCLS_pulse_rifle_Shot_SoundSet", "DMR01_Tail_SoundSet", "DMR01_InteriorTail_SoundSet"};
            };
        };
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