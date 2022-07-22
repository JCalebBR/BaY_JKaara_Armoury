#define _ARMA_

class CfgPatches {
    class BaY_JKaara_Armory_Rifle {
        name = "Ba'Y J'Kaara Armory (Rifle)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_40k_Tau", "CadFoot", "TIOW_Admech", "vng_tau_repeater"};
        weapons[] = {"BJK_ion_rifle", "BJK_DMCLS_pulse_rifle", "BJK_DMCLS_pulse_blaster", "BJK_DMCLS_pulse_burster", "BJK_DMCLS_pulse_carbine", "BJK_DMCLS_rail_rifle", "BJK_PulseRepeater", "BJK_Guevesa_PulseRifle", "BJK_Guevesa_PulseRifle_Alt", "BJK_Guevesa_LockeBolter"};
    };
};

class ItemInfo;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;
class CowsSlot_BJK_dmcls_tau;
class UnderBarrelSlot_BJK_dmcls_tau;
class WeaponSlotsInfo;
class Single;
class FullAuto;
class CfgWeapons {
    // Base Weapons
    class Rifle_Base_F;
    class Pistol_Base_F;

    // Tau Weapons
    class DMCLS_ion_rifle_VL;
    class DMCLS_ion_rifle;
    class BJK_ion_rifle : DMCLS_ion_rifle_VL {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_ion_rifle";
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Ion Rifle";
        hiddenSelections[] = {"Camo", "Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_IonRifle_Front_CO.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_IonRifle_Rear_CO.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_IonRifle_Sights_CO.paa"};
        magazines[] = {"BJK_ionrifle_shot_mag"};
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "DMCLS_Tau_Optics_2_VL";
            };
        };
        class DMCLS_ion_rifle : DMCLS_ion_rifle {
            magazines[] = {"BJK_ionrifle_overcharge_mag"};
        };
    };
    class DMCLS_pulse_rifle;
    class BJK_DMCLS_pulse_rifle : DMCLS_pulse_rifle {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_DMCLS_pulse_rifle";
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Pulse Rifle";
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
        magazines[] = {"BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54"};
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_Stock_CA.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_PulseRifle_CA.paa"};
    };
    class DMCLS_pulse_blaster;
    class BJK_DMCLS_pulse_blaster : DMCLS_pulse_blaster {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_DMCLS_pulse_blaster";
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Pulse blaster";
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
        magazines[] = {"BJK_DMCLS_pulse_blaster_mag_10", "BJK_DMCLS_pulse_blaster_mag_15", "BJK_DMCLS_pulse_blaster_mag_25", "BJK_DMCLS_pulse_blaster_airburst_mag_8", "BJK_DMCLS_pulse_blaster_airburst_mag_12", "BJK_DMCLS_pulse_blaster_airburst_mag_18", "BJK_DMCLS_pulse_blaster_slug_mag_10", "BJK_DMCLS_pulse_blaster_slug_mag_15", "BJK_DMCLS_pulse_blaster_slug_mag_25"};
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_Stock_CA.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_PulseBlaster_CA.paa"};
    };
    class DMCLS_pulse_burster;
    class BJK_DMCLS_pulse_burster : DMCLS_pulse_burster {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_DMCLS_pulse_burster";
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Pulse burster";
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
        magazines[] = {"BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54"};
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_Stock_CA.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_PulseBurster_CA.paa"};
    };
    class DMCLS_pulse_carbine;
    class BJK_DMCLS_pulse_carbine : DMCLS_pulse_carbine {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_DMCLS_pulse_carbine";
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Pulse carbine";
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
        magazines[] = {"BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54", "TIOW_pulse_mag"};
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_Stock_CA.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_PulseCarbine_CA.paa"};
    };
    class DMCLS_rail_rifle;
    class BJK_DMCLS_rail_rifle : DMCLS_rail_rifle {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "BJK_DMCLS_rail_rifle";
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Rail Rifle";
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
        magazines[] = {"BJK_DMCLS_rail_rifle_mag", "TIOW_railrifle_mag"};
        hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_RailRifle_Front_CA.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_RailRifle_Back_CA.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_RailRifle_Mag_CA.paa", "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_RailRifle_Details_CA.paa"};
    };
    class vng_repeater_f;
    class BJK_PulseRepeater : vng_repeater_f {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        baseweapon = "BJK_PulseRepeater";
        displayName = "[Ba'Y JK] Pulse Repeater";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_PulseRepeater_CA.paa"};
        hiddenSelectionsMaterials[] = {"BaY_JKaara_Armoury\bjk_rifle\Materials\BJK_PulseRepeater.rvmat"};
        picture = "BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_PulseRepeater_UI.paa";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            allowedSlots[] = {901};
            class CowsSlot : CowsSlot_BJK_dmcls_tau {};
        };
        class Single : Single {
            class StandardSound {
                soundSetShot[] = {"BJK_DMCLS_pulse_burster_Shot_SoundSet", "DMR01_Tail_SoundSet", "DMR01_InteriorTail_SoundSet"};
            };
        };
        class FullAuto : FullAuto {
            class StandardSound {
                soundSetShot[] = {"BJK_DMCLS_pulse_burster_Shot_SoundSet", "DMR01_Tail_SoundSet", "DMR01_InteriorTail_SoundSet"};
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
    class ic_cad_bolter;
    class BJK_Guevesa_LockeBolter : ic_cad_bolter {
        author = "JCaleb2014";
        displayName = "[Ba'Y JK] Locke Pattern Bolter";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_rifle\Textures\BJK_Guevesa_LockeBolter_CO.paa"};
    };
};

class EventHandlers;
class CBA_Extended_EventHandlers_base;

class CfgMods {
    author = "JCaleb2014";
    timepacked = "1650387927";
};