class CfgPatches {
    class BaY_JKaara_Armory_Ammo {
        name = "Ba'Y J'Kaara Armory (Ammo)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_40k_Tau"};
        ammo[] = {"BJK_ionrifle_shot", "BJK_ionrifle_overcharge", "BJK_ExpSmall_Remote_Ammo", "BJK_ExpSmall_Remote_Ammo_Scripted", "BJK_ExpBig_Remote_Ammo", "BJK_DMCLS_pulse_shot", "BJK_pulse_pistol_shot", "BJK_DMCLS_pulse_blaster_shot", "BJK_DMCLS_pulse_blaster_airburst", "BJK_DMCLS_pulse_blaster_slug", "BJK_DMCLS_pulse_airburst_pellets", "BJK_DMCLS_rail_rifle_shot", "BJK_photon_grenade_ammo"};
    };
};

class CfgAmmo {
    class B_127x99_Ball;
    class BJK_pulse_pistol_shot : B_127x99_Ball {
        typicalSpeed = 1000;
        airFriction = -1.9999999e-005;
        tracerStartTime = 0.001;
        tracerEndTime = 10;
        hit = 20;
        caliber = 2;
        deflecting = 0;
    };

    class DMCLS_pulse_shot;
    class BJK_DMCLS_pulse_shot : DMCLS_pulse_shot {
        cartridge = "";
    };

    class DMCLS_pulse_blaster_shot;
    class BJK_DMCLS_pulse_blaster_shot : DMCLS_pulse_blaster_shot {
        cartridge = "";
    };

    class DMCLS_pulse_blaster_airburst;
    class BJK_DMCLS_pulse_blaster_airburst : DMCLS_pulse_blaster_airburst {
        cartridge = "";
    };

    class DMCLS_pulse_blaster_slug;
    class BJK_DMCLS_pulse_blaster_slug : DMCLS_pulse_blaster_slug {
        cartridge = "";
    };

    class DMCLS_pulse_airburst_pellets;
    class BJK_DMCLS_pulse_airburst_pellets : DMCLS_pulse_airburst_pellets {
        cartridge = "";
    };

    class DMCLS_rail_rifle_shot;
    class BJK_DMCLS_rail_rifle_shot : DMCLS_rail_rifle_shot {
        cartridge = "";
    };

    class ammo_Penetrator_Base;

    class DMCLS_ion_rifle_shot;
    class BJK_ionrifle_shot : DMCLS_ion_rifle_shot {};

    class DMCLS_ion_rifle_shot_overcharged;
    class BJK_ionrifle_overcharge : DMCLS_ion_rifle_shot_overcharged {};

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
    class BJK__ExpSmall_Remote_Ammo_Scripted : BJK_ExpSmall_Remote_Ammo {};
    class BJK_ExpBig_Remote_Ammo : PipeBombBase {
        hit = 5000;
        indirectHit = 5000;
        indirectHitRange = 15;
        model = "40k_tau\Explosives\ExplosiveBig.p3d";
        mineModelDisabled = "40k_tau\Explosives\ExplosiveBig.p3d";
        defaultMagazine = "TIOW_Tau_ExpBig_Remote_Mag";
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

    class DMCLS_tau_photon_grenade_ammo;
    class BJK_photon_grenade_ammo : DMCLS_tau_photon_grenade_ammo {
        hit = 10;
        indirectHit = 50;
    };
};
