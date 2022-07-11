class CfgPatches {
    class BaY_JKaara_Armory_Ammo {
        name = "Ba'Y J'Kaara Armory (Ammo)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_40k_Tau", "DMCLS_weapons_c"};
        magazines[] = {"BJK_ionrifle_shot_mag", "BJK_ionrifle_overcharge_mag", "BJK_ExpSmall_Remote_Mag", "BJK_ExpBig_Remote_Mag", "BJK_DMCLS_pulse_mag_25", "BJK_DMCLS_pulse_mag_36", "BJK_DMCLS_pulse_mag_54", "BJK_DMCLS_pulse_blaster_mag_10", "BJK_DMCLS_pulse_blaster_mag_15", "BJK_DMCLS_pulse_blaster_mag_25", "BJK_DMCLS_pulse_blaster_airburst_mag_8", "BJK_DMCLS_pulse_blaster_airburst_mag_12", "BJK_DMCLS_pulse_blaster_airburst_mag_18", "BJK_DMCLS_pulse_blaster_slug_mag_10", "BJK_DMCLS_pulse_blaster_slug_mag_15", "BJK_DMCLS_pulse_blaster_slug_mag_25", "BJK_DMCLS_rail_rifle_mag", "BJK_photon_grenade_mag"};
    };
};

class CfgMagazines {
    class DMCLS_pulse_mag_25;
    class BJK_DMCLS_pulse_mag_25 : DMCLS_pulse_mag_25 {
        scope = 2;
        displayName = "[Ba'Y JK] Pulse Magazine 25 charges";
        ammo = "BJK_DMCLS_pulse_shot";
    };

    class DMCLS_pulse_mag_36;
    class BJK_DMCLS_pulse_mag_36 : DMCLS_pulse_mag_36 {
        scope = 2;
        displayName = "[Ba'Y JK] Pulse Magazine 36 charges";
        ammo = "BJK_DMCLS_pulse_shot";
    };

    class DMCLS_pulse_mag_54;
    class BJK_DMCLS_pulse_mag_54 : DMCLS_pulse_mag_54 {
        scope = 2;
        displayName = "[Ba'Y JK] Pulse Magazine 54 charges";
        ammo = "BJK_DMCLS_pulse_shot";
    };

    class DMCLS_pulse_blaster_mag_10;
    class BJK_DMCLS_pulse_blaster_mag_10 : DMCLS_pulse_blaster_mag_10 {
        scope = 2;
        displayName = "[Ba'Y JK] CQB Magazine 10 charges";
        ammo = "BJK_DMCLS_pulse_blaster_shot";
    };

    class DMCLS_pulse_blaster_mag_15;
    class BJK_DMCLS_pulse_blaster_mag_15 : DMCLS_pulse_blaster_mag_15 {
        scope = 2;
        displayName = "[Ba'Y JK] CQB Magazine 15 charges";
        ammo = "BJK_DMCLS_pulse_blaster_shot";
    };

    class DMCLS_pulse_blaster_mag_25;
    class BJK_DMCLS_pulse_blaster_mag_25 : DMCLS_pulse_blaster_mag_25 {
        scope = 2;
        displayName = "[Ba'Y JK] CQB Magazine 25 charges";
        ammo = "BJK_DMCLS_pulse_blaster_shot";
    };

    class DMCLS_pulse_blaster_airburst_mag_8;
    class BJK_DMCLS_pulse_blaster_airburst_mag_8 : DMCLS_pulse_blaster_airburst_mag_8 {
        scope = 2;
        displayName = "[Ba'Y JK] Airburst Magazine 8 charges";
        ammo = "BJK_DMCLS_pulse_blaster_airburst";
    };

    class DMCLS_pulse_blaster_airburst_mag_12;
    class BJK_DMCLS_pulse_blaster_airburst_mag_12 : DMCLS_pulse_blaster_airburst_mag_12 {
        scope = 2;
        displayName = "[Ba'Y JK] Airburst Magazine 12 charges";
        ammo = "BJK_DMCLS_pulse_blaster_airburst";
    };

    class DMCLS_pulse_blaster_airburst_mag_18;
    class BJK_DMCLS_pulse_blaster_airburst_mag_18 : DMCLS_pulse_blaster_airburst_mag_18 {
        scope = 2;
        displayName = "[Ba'Y JK] Airburst Magazine 18 charges";
        ammo = "BJK_DMCLS_pulse_blaster_airburst";
    };

    class DMCLS_pulse_blaster_slug_mag_10;
    class BJK_DMCLS_pulse_blaster_slug_mag_10 : DMCLS_pulse_blaster_slug_mag_10 {
        scope = 2;
        displayName = "[Ba'Y JK] Slug Magazine 10 charges";
        ammo = "BJK_DMCLS_pulse_blaster_slug";
    };

    class DMCLS_pulse_blaster_slug_mag_15;
    class BJK_DMCLS_pulse_blaster_slug_mag_15 : DMCLS_pulse_blaster_slug_mag_15 {
        displayName = "[Ba'Y JK] Slug Magazine 15 charges";
        descriptionShort = "Pulse Blaster Slug magazine - 15 charges";
        mass = 8;
        count = 15;
        picture = "\DMCLS\dmcls_tau_weapons\mags\data\UI_36.paa";
        modelSpecial = "\DMCLS\dmcls_tau_weapons\mags\mag36.p3d";
        modelSpecialIsProxy = 1;
        model = "\DMCLS\dmcls_tau_weapons\mags\mag36.p3d";
    };

    class DMCLS_pulse_blaster_slug_mag_25;
    class BJK_DMCLS_pulse_blaster_slug_mag_25 : DMCLS_pulse_blaster_slug_mag_25 {
        scope = 2;
        displayName = "[Ba'Y JK] Slug Magazine 25 charges";
        ammo = "BJK_DMCLS_pulse_blaster_slug";
    };

    class DMCLS_rail_rifle_mag;
    class BJK_DMCLS_rail_rifle_mag : DMCLS_rail_rifle_mag {
        scope = 2;
        displayName = "[Ba'Y JK] Rail Rifle Magazine 18 charges";
        ammo = "BJK_DMCLS_rail_rifle_shot";
    };

    class TIOW_ionrifle_shot_mag;
    class BJK_ionrifle_shot_mag : TIOW_ionrifle_shot_mag {
        scope = 2;
        displayName = "[Ba'Y JK] Ion Rifle Magazine";
        ammo = "BJK_ionrifle_shot";
    };

    class TIOW_ionrifle_overcharge_mag;
    class BJK_ionrifle_overcharge_mag : TIOW_ionrifle_overcharge_mag {
        scope = 2;
        displayName = "[Ba'Y JK]Ion Rifle Magazine [Overcharged]";
        ammo = "BJK_ionrifle_overcharge";
    };

    class TIOW_pulse_pistol_mag;
    class BJK_pulse_pistol_mag : TIOW_pulse_pistol_mag {
        scope = 2;
        displayName = "[Ba'Y JK] Pulse Pistol Magazine";
        ammo = "BJK_pulse_pistol_shot";
    };
    class CA_Magazine;
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

    class DMCLS_tau_photon_grenade_mag;
    class BJK_photon_grenade_mag : DMCLS_tau_photon_grenade_mag {
        displayName = "[Ba'Y JK] Photon Grenade";
    };
};
