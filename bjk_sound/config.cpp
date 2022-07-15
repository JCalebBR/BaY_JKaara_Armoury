#define _ARMA_

class CfgPatches {
    class BaY_JKaara_Armory_Sound {
        name = "Ba'Y J'Kaara Armory (Sound)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_40k_Tau", "CadFoot", "TIOW_Admech", "vng_tau_repeater"};
    };
};

class CfgSoundSets {
    class DMCLS_pulse_burster_Shot_SoundSet;
    class BJK_DMCLS_pulse_burster_Shot_SoundSet : DMCLS_pulse_burster_Shot_SoundSet {};
};