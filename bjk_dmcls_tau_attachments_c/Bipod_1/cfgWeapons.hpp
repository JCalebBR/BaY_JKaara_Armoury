class BJK_DMCLS_Tau_Bipod_1 : ItemCore {
    author = "Sokolonko & JCaleb2014";
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
    displayName = "[Ba'Y JK] Bipod (En'vas pattern)";
    picture = "BaY_JKaara_Armoury\bjk_dmcls_tau_attachments\bipod_1\data\UI_bipod.paa";
    model = "BaY_JKaara_Armoury\bjk_dmcls_tau_attachments\bipod_1\dmcls_bipod_1.p3d";

    class ItemInfo : InventoryUnderItem_Base_F {
        deployedPivot = "bipod";
        hasBipod = true;  /// bipod obviously has a bipod
        mass = 10;
        soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down", db - 3, 1, 20};
        soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up", db - 3, 1, 20};
    };
    inertia = 0.3;
};