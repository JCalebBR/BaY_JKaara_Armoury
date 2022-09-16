#define _ARMA_

class CfgPatches {
    class BaY_JKaara_Armory_Vehicles {
        name = "Ba'Y J'Kaara Armory (Vehicles)";
        author = "JCaleb2014";
        requiredVersion = 1.6;
        requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Mark", "A3_Characters_F", "A3_Data_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "TIOW_40k_Tau", "WHtracked_TIOW_LR_Battlecannon"};
        units[] = {"BJK_LR_Vanquisher_Modified", "BJK_HammerHead_Railgun_VD", "BJK_HammerHead_Railgun_GD", "BJK_HammerHead_Railgun_MD", "BJK_HammerHead_Railgun_SMD", "BJK_HammerHead_Railgun_UAV", "BJK_HammerHead_Twinburst_VD", "BJK_HammerHead_Twinburst_GD", "BJK_HammerHead_Twinburst_MD", "BJK_HammerHead_Twinburst_SMD", "BJK_HammerHead_Twinburst_UAV", "BJK_HammerHead_IonCannon_VD", "BJK_HammerHead_IonCannon_GD", "BJK_HammerHead_IonCannon_MD", "BJK_HammerHead_IonCannon_SMD", "BJK_HammerHead_IonCannon_UAV", "BJK_Tau_Drone_Marker_UAV", "BJK_ServoSkull_UAV", "BJK_PP_UAV_1", "BJK_PP_UAV_2", "BJK_Tau_Drone_Gun", "BJK_Tau_Drone_Marker", "BJK_Tau_Drone_Missile", "BJK_Tau_Drone_SmartMissile", "BJK_Tau_Drone_Sniper", "BJK_Tau_Drone_Vehicle", "BJK_Sentinel_AC", "BJK_Sentinel_CS", "BJK_Sentinel_HB", "BJK_Sentinel_LC", "BJK_Sentinel_MLA", "BJK_Sentinel_ML", "BJK_Sentinel_PC"};
    };
};

class ItemInfo;
class EventHandlers;
class CBA_Extended_EventHandlers_base;
class CfgVehicles {
    class Man;
    class CAManBase : Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class BJK_Deploy {
                    displayName = "Deploy";
                    statement = "";
                    exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
                    showDisabled = 0;
                    priority = 0;
                    class BJK_Deploy_Tau_Drone_UAV {
                        displayName = "Marker Drone";
                        condition = "'BJK_Tau_Drone_Marker_UAV_Packed' in (items _player)";
                        statement = "['BJK_Tau_Drone_Marker_UAV_Packed',_player] call itc_land_packable_fnc_unPack";
                        priority = 1;
                        showDisabled = 1;
                        exceptions[] = {"isNotInside", "isNotSitting"};
                        enableInside = 0;
                    };
                    class BJK_Deploy_ServoSkull_UAV {
                        displayName = "Servo Skull";
                        condition = "'BJK_ServoSkull_UAV_Packed' in (items _player)";
                        statement = "['BJK_ServoSkull_UAV_Packed',_player] call itc_land_packable_fnc_unPack";
                        priority = 1;
                        showDisabled = 1;
                        exceptions[] = {"isNotInside", "isNotSitting"};
                        enableInside = 0;
                    };
                };
            };
        };
    };

    // Gue'vesa Modified Vehicles
    class LandVehicle;
    class Tank : LandVehicle {
        class NewTurret;
        class Sounds;
        class HitPoints;
    };
    class Tank_F : Tank {
        class Turrets {
            class MainTurret : NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
        class AnimationSources;
        class ViewPilot;
        class ViewOptics;
        class ViewCargo;
        class HeadLimits;
        class HitPoints : HitPoints {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
        class Sounds : Sounds {
            class Engine;
            class Movement;
        };
        class EventHandlers;
    };
    class TIOW_LR_BattleCannon : Tank_F {
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        displayName = "Leman Russ MkIV";
        model = "\WHtracked\LRMIV\model\TIOW_LR_BattleCannon";
        picture = "";
        Icon = "\WHtracked\LRMIV\icon\Icon_lemanrus_01.paa";
        mapSize = 12;
        tracksSpeed = 1.0;
        tankTurnForceAngSpd = 0.91;
        tankTurnForceAngMinSpd = 0.6;
        brakeDistance = 15;
        brakeIdleSpeed = 0.1;
        simulation = "tankX";
        enginePower = 582;
        maxOmega = 276;
        peakTorque = 4832;
        torqueCurve[] = {{0, 0}, {"(1600/2640)", "(2650/2850)"}, {"(1800/2640)", "(2800/2850)"}, {"(1900/2640)", "(2850/2850)"}, {"(2000/2640)", "(2800/2850)"}, {"(2200/2640)", "(2750/2850)"}, {"(2400/2640)", "(2600/2850)"}, {"(2640/2640)", "(2350/2850)"}};
        thrustDelay = 0.1;
        clutchStrength = 180.0;
        fuelCapacity = 1885;
        latency = 0.1;
        tankTurnForce = 600000;
        idleRpm = 700;
        redRpm = 2640;
        engineLosses = 25;
        transmissionLosses = 15;
        class complexGearbox {
            GearboxRatios[] = {"R2", -3.9, "N", 0, "D1", 4.7, "D2", 3.5, "D3", 2.6, "D4", 2.0, "D5", 1.5, "D6", 1.125, "D7", 0.85};
            TransmissionRatios[] = {"High", 15};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.1;
        };
        class Wheels {
            class L2 {
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                damping = 75.0;
                steering = 0;
                side = "left";
                weight = 150;
                mass = 150;
                MOI = 25;
                latStiffX = 25;
                latStiffY = 280;
                longitudinalStiffnessPerUnitGravity = 100000;
                maxBrakeTorque = 40000;
                sprungMass = 4000.0;
                springStrength = 324000;
                springDamperRate = 36000;
                dampingRate = 1.0;
                dampingRateInAir = 8830.0;
                dampingRateDamaged = 10.0;
                dampingRateDestroyed = 10000.0;
                maxDroop = 0.15;
                maxCompression = 0.15;
            };
            class L3 : L2 {
                boneName = "wheel_podkolol2";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4 : L2 {
                boneName = "wheel_podkolol3";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5 : L2 {
                boneName = "wheel_podkolol4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6 : L2 {
                boneName = "wheel_podkolol5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7 : L2 {
                boneName = "wheel_podkolol6";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
            };
            class L9 : L2 {
                boneName = "wheel_podkolol9";
                center = "wheel_1_9_axis";
                boundary = "wheel_1_9_bound";
                sprungMass = 1500.0;
                springStrength = 37500;
                springDamperRate = 7500;
                maxDroop = 0;
                maxCompression = 0;
            };
            class L1 : L2 {
                boneName = "";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                sprungMass = 1500.0;
                springStrength = 37500;
                springDamperRate = 7500;
                maxDroop = 0;
                maxCompression = 0;
            };
            class R2 : L2 {
                boneName = "wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
            };
            class R3 : R2 {
                boneName = "wheel_podkolop2";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
            };
            class R4 : R2 {
                boneName = "wheel_podkolop3";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
            };
            class R5 : R2 {
                boneName = "wheel_podkolop4";
                center = "wheel_2_5_axis";
                boundary = "wheel_2_5_bound";
            };
            class R6 : R2 {
                boneName = "wheel_podkolop5";
                center = "wheel_2_6_axis";
                boundary = "wheel_2_6_bound";
            };
            class R7 : R2 {
                boneName = "wheel_podkolop6";
                center = "wheel_2_7_axis";
                boundary = "wheel_2_7_bound";
            };
            class R9 : R2 {
                boneName = "wheel_podkolop9";
                center = "wheel_2_9_axis";
                boundary = "wheel_2_9_bound";
                sprungMass = 1500.0;
                springStrength = 37500;
                springDamperRate = 7500;
                maxDroop = 0;
                maxCompression = 0;
            };
            class R1 : R2 {
                boneName = "";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                sprungMass = 1500.0;
                springStrength = 37500;
                springDamperRate = 7500;
                maxDroop = 0;
                maxCompression = 0;
            };
        };
        ejectDamageLimit = 0.99;
        armor = 1500;
        minTotalDamageThreshold = 100;
        explosionShielding = 0.1;
        armorStructural = 6;
        destrType = "DestructWreck";
        damageResistance = 0.0015;
        cost = 1500000;
        viewDriverInExternal = 1;
        driverForceOptics = 0;
        forceHideDriver = 0;
        proxyType = "CPDriver";
        proxyIndex = 1;
        lodTurnedIn = 1100;
        driverAction = "TIOW_LR_Driver";
        driverInAction = "TIOW_LR_Driver";
        class HitPoints : HitPoints {
            class HitHull : HitHull {
                armor = 1.0;
                material = -1;
                name = "hull";
                visual = "zbytek";
                passThrough = 1;
                minimalHit = 0.175;
                explosionShielding = 0.1;
                radius = 0.15;
            };
            class HitEngine : HitEngine {
                armor = 1.0;
                material = -1;
                name = "engine";
                passThrough = 0.8;
                minimalHit = 0.175;
                explosionShielding = 0.1;
                radius = 0.15;
            };
            class HitLTrack : HitLTrack {
                armor = 0.75;
                material = -1;
                name = "left_track";
                visual = "pas_L";
                passThrough = 0;
                minimalHit = 0.175;
                explosionShielding = 0.4;
                radius = 0.1;
            };
            class HitRTrack : HitRTrack {
                armor = 0.75;
                material = -1;
                name = "right_track";
                visual = "pas_P";
                passThrough = 0;
                minimalHit = 0.175;
                explosionShielding = 0.4;
                radius = 0.1;
            };
        };
        class RenderTargets {
            class FrontGunner {
                RenderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "FrontSponsonPiP";
                    pointDirection = "FrontSponsonPiP_dir";
                    renderVisionMode = 4;
                    renderQuality = 2;
                    fov = 0.7;
                };
            };
            class LeftGunner {
                RenderTarget = "rendertarget1";
                class CameraView1 {
                    pointPosition = "LeftSponsonPiP";
                    pointDirection = "LeftSponsonPiP_dir";
                    renderVisionMode = 4;
                    renderQuality = 2;
                    fov = -0.7;
                };
            };
            class RightGunner {
                RenderTarget = "rendertarget2";
                class CameraView1 {
                    pointPosition = "RightSponsonPiP";
                    pointDirection = "RightSponsonPiP_dir";
                    renderVisionMode = 4;
                    renderQuality = 2;
                    fov = 0.7;
                };
            };
        };
        class compartmentsLights {
            class Comp1 {
                class Light1 {
                    color[] = {50, 5, 5};
                    ambient[] = {0, 0, 0};
                    intensity = 4.5;
                    size = 6;
                    useFlare = 0;
                    flareSize = 0;
                    flareMaxDistance = 0;
                    dayLight = 0;
                    blinking = 0;
                    class Attenuation {
                        start = 0;
                        constant = 0;
                        linear = 1;
                        quadratic = 70;
                        hardLimitStart = 0.15;
                        hardLimitEnd = 1.15;
                    };
                    point = "light1";
                };
                class Light2 : Light1 {
                    point = "light2";
                };
            };
        };
        maxSpeed = 35;
        driverOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
        driverOpticsEffect[] = {};
        driverCanEject = 1;
        supplyRadius = 5;
        insideSoundCoef = 0.9;
        threat[] = {1, 1, 0.3};
        attenuationEffectType = "TankAttenuation";
        soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out", 0.56234133, 1};
        soundGetOut[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out", 0.56234133, 1, 20};
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_int_start", 0.63095737, 1.0};
        soundEngineOnExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_ext_start", 0.7943282, 1.0, 200};
        soundEngineOffInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_int_stop", 0.63095737, 1.0};
        soundEngineOffExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_ext_stop", 0.7943282, 1.0, 200};
        buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
        buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
        buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
        buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
        soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
        WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
        WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
        WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
        WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
        WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01", 1.0, 1, 200};
        WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
        soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
        ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
        ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
        ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
        ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
        soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
        class Sounds {
            class Idle_ext {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_1", 0.7943282, 1, 200};
                frequency = "0.95 + ((rpm/ 2600) factor[(400/ 2600),(750/ 2600)])*0.15";
                volume = "engineOn*camPos*(((rpm/ 2600) factor[(100/ 2600),(200/ 2600)]) * ((rpm/ 2600) factor[(850/ 2600),(700/ 2600)]))";
            };
            class Engine {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_2", 0.8912509, 1, 240};
                frequency = "0.8 + ((rpm/ 2600) factor[(620/ 2600),(910/ 2600)])*0.2";
                volume = "engineOn*camPos*(((rpm/ 2600) factor[(720/ 2600),(790/ 2600)]) * ((rpm/ 2600) factor[(950/ 2600),(850/ 2600)]))";
            };
            class Engine1_ext {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_3", 1.1220185, 1, 280};
                frequency = "0.8 + ((rpm/ 2600) factor[(800/ 2600),(1150/ 2600)])*0.2";
                volume = "engineOn*camPos*(((rpm/ 2600) factor[(830/ 2600),(940/ 2600)]) * ((rpm/ 2600) factor[(1200/ 2600),(1000/ 2600)]))";
            };
            class Engine2_ext {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_4", 1.2589254, 1, 320};
                frequency = "0.8 + ((rpm/ 2600) factor[(960/ 2600),(1500/ 2600)])*0.2";
                volume = "engineOn*camPos*(((rpm/ 2600) factor[(950/ 2600),(1100/ 2600)]) * ((rpm/ 2600) factor[(1500/ 2600),(1250/ 2600)]))";
            };
            class Engine3_ext {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_5", 1.4125376, 1, 360};
                frequency = "0.8 + ((rpm/ 2600) factor[(1200/ 2600),(1700/ 2600)])*0.1";
                volume = "engineOn*camPos*(((rpm/ 2600) factor[(1250/ 2600),(1450/ 2600)]) * ((rpm/ 2600) factor[(1700/ 2600),(1560/ 2600)]))";
            };
            class Engine4_ext {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_6", 1.5848932, 1, 400};
                frequency = "0.8 + ((rpm/ 2600) factor[(1520/ 2600),(2000/ 2600)])*0.1";
                volume = "engineOn*camPos*(((rpm/ 2600) factor[(1570/ 2600),(1670/ 2600)]) * ((rpm/ 2600) factor[(2200/ 2600),(1900/ 2600)]))";
            };
            class Engine5_ext {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_7", 1.7782794, 1, 440};
                frequency = "0.8 + ((rpm/ 2600) factor[(1800/ 2600),(2300/ 2600)])*0.1";
                volume = "engineOn*camPos*((rpm/ 2600) factor[(1950/ 2600),(2170/ 2600)])";
            };
            class IdleThrust {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_1", 1.1220185, 1, 200};
                frequency = "0.8 + ((rpm/ 2600) factor[(400/ 2600),(750/ 2600)])*0.15";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(100/ 2600),(200/ 2600)]) * ((rpm/ 2600) factor[(850/ 2600),(700/ 2600)]))";
            };
            class EngineThrust {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_2", 1.4125376, 1, 200};
                frequency = "0.8 + ((rpm/ 2600) factor[(620/ 2600),(910/ 2600)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(720/ 2600),(790/ 2600)]) * ((rpm/ 2600) factor[(950/ 2600),(850/ 2600)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_3", 1.7782794, 1, 230};
                frequency = "0.8 + ((rpm/ 2600) factor[(800/ 2600),(1150/ 2600)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(830/ 2600),(940/ 2600)]) * ((rpm/ 2600) factor[(1200/ 2600),(1000/ 2600)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_4", 1.9952624, 1, 290};
                frequency = "0.8 + ((rpm/ 2600) factor[(960/ 2600),(1500/ 2600)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(950/ 2600),(1100/ 2600)]) * ((rpm/ 2600) factor[(1500/ 2600),(1250/ 2600)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_5", 1.7782794, 1, 350};
                frequency = "0.8 + ((rpm/ 2600) factor[(1200/ 2600),(1700/ 2600)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(1250/ 2600),(1450/ 2600)]) * ((rpm/ 2600) factor[(1700/ 2600),(1560/ 2600)]))";
            };
            class Engine4_Thrust_ext {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_6", 2.2387211, 1, 400};
                frequency = "0.8 + ((rpm/ 2600) factor[(1520/ 2600),(2000/ 2600)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(1570/ 2600),(1670/ 2600)]) * ((rpm/ 2600) factor[(2200/ 2600),(1900/ 2600)]))";
            };
            class Engine5_Thrust_ext {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_7", 2.5118864, 1, 450};
                frequency = "0.8 + ((rpm/ 2600) factor[(1800/ 2600),(2300/ 2600)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2600) factor[(1950/ 2600),(2170/ 2600)])";
            };
            class Idle_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_1", 0.5011872, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(400/ 2600),(750/ 2600)])*0.15";
                volume = "engineOn*(1-camPos)*(((rpm/ 2600) factor[(100/ 2600),(200/ 2600)]) * ((rpm/ 2600) factor[(850/ 2600),(700/ 2600)]))";
            };
            class Engine_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_2", 0.3548134, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(620/ 2600),(910/ 2600)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/ 2600) factor[(720/ 2600),(790/ 2600)]) * ((rpm/ 2600) factor[(950/ 2600),(850/ 2600)]))";
            };
            class Engine1_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_3", 0.39810717, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(800/ 2600),(1150/ 2600)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/ 2600) factor[(830/ 2600),(940/ 2600)]) * ((rpm/ 2600) factor[(1200/ 2600),(1000/ 2600)]))";
            };
            class Engine2_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_4", 0.4466836, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(960/ 2600),(1500/ 2600)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/ 2600) factor[(950/ 2600),(1100/ 2600)]) * ((rpm/ 2600) factor[(1500/ 2600),(1250/ 2600)]))";
            };
            class Engine3_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_5", 0.5011872, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(1200/ 2600),(1700/ 2600)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/ 2600) factor[(1250/ 2600),(1450/ 2600)]) * ((rpm/ 2600) factor[(1700/ 2600),(1560/ 2600)]))";
            };
            class Engine4_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_6", 0.56234133, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(1520/ 2600),(2000/ 2600)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/ 2600) factor[(1570/ 2600),(1670/ 2600)]) * ((rpm/ 2600) factor[(2200/ 2600),(1900/ 2600)]))";
            };
            class Engine5_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_7", 0.63095737, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(1800/ 2600),(2300/ 2600)])*0.1";
                volume = "engineOn*(1-camPos)*((rpm/ 2600) factor[(1950/ 2600),(2170/ 2600)])";
            };
            class IdleThrust_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_1", 0.63095737, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(400/ 2600),(750/ 2600)])*0.15";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(100/ 2600),(200/ 2600)]) * ((rpm/ 2600) factor[(850/ 2600),(700/ 2600)]))";
            };
            class EngineThrust_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_2", 0.39810717, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(620/ 2600),(910/ 2600)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(720/ 2600),(790/ 2600)]) * ((rpm/ 2600) factor[(950/ 2600),(850/ 2600)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_3", 0.4466836, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(800/ 2600),(1150/ 2600)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(830/ 2600),(940/ 2600)]) * ((rpm/ 2600) factor[(1200/ 2600),(1000/ 2600)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_4", 0.4466836, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(960/ 2600),(1500/ 2600)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(950/ 2600),(1100/ 2600)]) * ((rpm/ 2600) factor[(1500/ 2600),(1250/ 2600)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_5", 0.5011872, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(1200/ 2600),(1700/ 2600)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(1250/ 2600),(1450/ 2600)]) * ((rpm/ 2600) factor[(1700/ 2600),(1560/ 2600)]))";
            };
            class Engine4_Thrust_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_6", 0.56234133, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(1520/ 2600),(2000/ 2600)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(1570/ 2600),(1670/ 2600)]) * ((rpm/ 2600) factor[(2200/ 2600),(1900/ 2600)]))";
            };
            class Engine5_Thrust_int {
                sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_7", 0.63095737, 1};
                frequency = "0.8 + ((rpm/ 2600) factor[(1800/ 2600),(2300/ 2600)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2600) factor[(1950/ 2600),(2170/ 2600)])";
            };
            class NoiseInt {
                sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_int_1", 0.5011872, 1.0};
                frequency = "1";
                volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
            };
            class NoiseExt {
                sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_ext_1", 0.8912509, 1.0, 50};
                frequency = "1";
                volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
            };
            class ThreadsOutH0 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_1", 0.39810717, 1.0, 140};
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-0) max 0)/ 65),(((-5) max 5)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-15) max 15)/ 65),(((-10) max 10)/ 65)]))";
            };
            class ThreadsOutH1 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_2", 0.4466836, 1.0, 160};
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-11) max 11)/ 65),(((-15) max 15)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-25) max 25)/ 65),(((-20) max 20)/ 65)]))";
            };
            class ThreadsOutH2 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_3", 0.5011872, 1.0, 180};
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-21) max 21)/ 65),(((-25) max 25)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-35) max 35)/ 65),(((-30) max 30)/ 65)]))";
            };
            class ThreadsOutH3 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_4", 0.56234133, 1.0, 200};
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-31) max 31)/ 65),(((-35) max 35)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-45) max 45)/ 65),(((-40) max 40)/ 65)]))";
            };
            class ThreadsOutH4 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_5", 0.56234133, 1.0, 220};
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 65) factor[(((-41) max 41)/ 65),(((-50) max 50)/ 65)])";
            };
            class ThreadsOutS0 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_1", 0.31622776, 1.0, 120};
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-0) max 0)/ 65),(((-5) max 5)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-15) max 15)/ 65),(((-10) max 10)/ 65)]))";
            };
            class ThreadsOutS1 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_2", 0.3548134, 1.0, 140};
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-11) max 11)/ 65),(((-15) max 15)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-25) max 25)/ 65),(((-20) max 20)/ 65)]))";
            };
            class ThreadsOutS2 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_3", 0.39810717, 1.0, 160};
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-21) max 21)/ 65),(((-25) max 25)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-35) max 35)/ 65),(((-30) max 30)/ 65)]))";
            };
            class ThreadsOutS3 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_4", 0.4466836, 1.0, 180};
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-31) max 31)/ 65),(((-35) max 35)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-45) max 45)/ 65),(((-40) max 40)/ 65)]))";
            };
            class ThreadsOutS4 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_5", 0.5011872, 1.0, 200};
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 65) factor[(((-41) max 41)/ 65),(((-50) max 50)/ 65)])";
            };
            class ThreadsInH0 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_1", 0.25118864, 1.0};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-0) max 0)/ 65),(((-5) max 5)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-15) max 15)/ 65),(((-10) max 10)/ 65)]))";
            };
            class ThreadsInH1 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_2", 0.2818383, 1.0};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-11) max 11)/ 65),(((-15) max 15)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-25) max 25)/ 65),(((-20) max 20)/ 65)]))";
            };
            class ThreadsInH2 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_3", 0.31622776, 1.0};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-21) max 21)/ 65),(((-25) max 25)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-35) max 35)/ 65),(((-30) max 30)/ 65)]))";
            };
            class ThreadsInH3 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_4", 0.3548134, 1.0};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-31) max 31)/ 65),(((-35) max 35)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-45) max 45)/ 65),(((-40) max 40)/ 65)]))";
            };
            class ThreadsInH4 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_5", 0.39810717, 1.0};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 65) factor[(((-41) max 41)/ 65),(((-50) max 50)/ 65)])";
            };
            class ThreadsInS0 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_1", 0.31622776, 1.0};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-0) max 0)/ 65),(((-5) max 5)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-15) max 15)/ 65),(((-10) max 10)/ 65)]))";
            };
            class ThreadsInS1 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_2", 0.31622776, 1.0};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-11) max 11)/ 65),(((-15) max 15)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-25) max 25)/ 65),(((-20) max 20)/ 65)]))";
            };
            class ThreadsInS2 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_3", 0.3548134, 1.0};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-21) max 21)/ 65),(((-25) max 25)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-35) max 35)/ 65),(((-30) max 30)/ 65)]))";
            };
            class ThreadsInS3 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_4", 0.3548134, 1.0};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-31) max 31)/ 65),(((-35) max 35)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-45) max 45)/ 65),(((-40) max 40)/ 65)]))";
            };
            class ThreadsInS4 {
                sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_5", 0.39810717, 1.0};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 65) factor[(((-41) max 41)/ 65),(((-50) max 50)/ 65)])";
            };
        };
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerName = "Turret Gunner";
                gunnerAction = "mbt2_slot2b_out";
                gunnerInAction = "TIOW_LR_Gunner";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                isPersonTurret = 0;
                gunnerGetInAction = "GetInHigh";
                gunnerGetOutAction = "GetOutHigh";
                weapons[] = {"TIOW_BattleCannon120mm"};
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGun = "kulas";
                magazines[] = {"TIOW_Battlecannon_120mm_HEAT_Mag", "TIOW_Battlecannon_120mm_APCBC_Mag", "TIOW_Battlecannon_120mm_HE_Mag"};
                soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", 0.17782794, 1.0};
                turretInfoType = "RscOptics_TIOW_Russ_Gunner";
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400};
                discreteDistanceInitIndex = 5;
                proxyType = "CPGunner";
                proxyIndex = 1;
                gunnerOpticsModel = "APCs\AutocannonOptic.p3d";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsEffect[] = {};
                stabilizedInAxes = "StabilizedInAxesBoth";
                minElev = -6;
                maxElev = 22;
                initElev = 0;
                gunnerForceOptics = 0;
                primaryGunner = 1;
                gunnerOpticsEffect[] = {};
                viewGunnerInExternal = 1;
                forceHideGunner = 1;
                forceHideCommander = 1;
                lodTurnedIn = 1100;
                class HitPoints : HitPoints {
                    class HitTurret {
                        armor = 1.0;
                        material = -1;
                        name = "turret";
                        visual = "commander_turret_hit";
                        passThrough = 0.1;
                        minimalHit = 0.175;
                        explosionShielding = 0.1;
                        radius = 0.15;
                    };
                    class HitGun {
                        armor = 1.0;
                        material = -1;
                        name = "mainGun";
                        visual = "commander_gun_hit";
                        passThrough = 0.1;
                        minimalHit = 0.175;
                        explosionShielding = 0.1;
                        radius = 0.25;
                    };
                };
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.2;
                    minFov = 0.025;
                    maxFov = 0.2;
                };
                class ViewGunner {
                    initAngleX = 5;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class Turrets : Turrets {
                    class CommanderOptics : NewTurret {
                        weapons[] = {};
                        magazines[] = {};
                        gunBeg = "gun_muzzle";
                        gunEnd = "gun_chamber";
                        body = "ObsTurret";
                        gun = "ObsGun";
                        gunnerAction = "TIOW_LR_CommanderTurnOut";
                        gunnerInAction = "TIOW_LR_Commander";
                        gunnerGetInAction = "GetInHigh";
                        gunnerGetOutAction = "GetOutHigh";
                        stabilizedInAxes = 3;
                        minElev = -10;
                        maxElev = 20;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        isPersonTurret = 1;
                        personTurretAction = "vehicle_turnout_1_Aim";
                        gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
                        gunnerOutOpticsModel = "";
                        gunnerOutOpticsColor[] = {0, 0, 0, 1};
                        gunnerOutForceOptics = 0;
                        gunnerOutOpticsShowCursor = 1;
                        gunnerForceOptics = 0;
                        startEngine = 1;
                        memoryPointGunnerOutOptics = "CommanderViewOut";
                        memoryPointGunnerOptics = "commanderview";
                        memoryPointsGetInGunner = "pos commander";
                        memoryPointsGetInGunnerDir = "pos commander dir";
                        memoryPointGun = "gun_muzzle";
                        gunnerOpticsEffect[] = {};
                        class Turrets : Turrets {};
                        class ViewOptics {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.3;
                            minFov = 0.015;
                            maxFov = 0.3;
                        };
                        class ViewGunner {
                            initAngleX = 5;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", 0.17782794, 1.0};
                        turretInfoType = "";
                        discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400};
                        discreteDistanceInitIndex = 5;
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 1;
                        proxyType = "CPCommander";
                        proxyIndex = 1;
                        gunnerName = "Commander";
                        primaryGunner = 0;
                        primaryObserver = 1;
                        animationSourceBody = "ObsTurret";
                        animationSourceGun = "ObsGun";
                        animationSourceHatch = "hatchCommander";
                        commanding = 2;
                        viewGunnerInExternal = 1;
                        forceHideGunner = 0;
                        forceHideCommander = 0;
                        lodTurnedIn = 1100;
                    };
                };
            };
            class FrontGunner : NewTurret {
                gunnerName = "Front Gunner";
                gunnerInAction = "TIOW_LR_FrontGunner";
                proxyType = "CPGunner";
                proxyIndex = 4;
                hasCrew = 1;
                gunBeg = "frontgunner_muzzle";
                gunEnd = "frontgunner_chamber";
                body = "frontgunnerturret";
                gun = "frontgunnergun";
                gunnerOpticsModel = "\DKoK_Weapons\Type14_Optic.p3d";
                animationSourceBody = "frontgunnerturret";
                animationSourceGun = "frontgunnergun";
                memoryPointGun = "FrontGunner_muzzle";
                memoryPointGunnerOptics = "FrontGunnerview";
                weapons[] = {"TIOW_LemanRuss_Lascannon"};
                magazines[] = {"TIOW_LemanRuss_Lascannon_Mag"};
                startEngine = 1;
                stabilizedInAxes = 3;
                minElev = -16;
                maxElev = 16;
                initElev = 0;
                minTurn = -16;
                maxTurn = 16;
                initTurn = 0;
                gunnerForceOptics = 0;
                viewGunnerInExternal = 1;
                forceHideGunner = 1;
                forceHideCommander = 0;
                lodTurnedIn = 1100;
                primaryGunner = 0;
                usePip = 1;
                turretInfoType = "RscOptics_TIOW_Russ_Gunner";
                class Turrets : Turrets {};
                class HitPoints : HitPoints {
                    class HitTurret {
                        armor = 0.5;
                        material = -1;
                        name = "frontTurret";
                        visual = "commander_turret_hit";
                        passThrough = 0.0;
                        minimalHit = 0.33;
                        explosionShielding = 0.1;
                        radius = 0.25;
                    };
                    class HitGun {
                        armor = 0.5;
                        material = -1;
                        name = "frontGun";
                        visual = "commander_gun_hit";
                        passThrough = 0.0;
                        minimalHit = 0.33;
                        explosionShielding = 0.1;
                        radius = 0.25;
                    };
                };
            };
            class LHBGunner : NewTurret {
                gunnerName = "Sponson Left";
                gunnerInAction = "TIOW_LR_LeftGunner";
                proxyType = "CPGunner";
                proxyIndex = 3;
                hasCrew = 1;
                gunBeg = "LHBMuz";
                gunEnd = "LHBBrch";
                body = "LHBturret";
                gun = "LHBgn";
                gunnerOpticsModel = "APCs\AutocannonOptic.p3d";
                gunnerOpticsEffect[] = {};
                animationSourceBody = "LHBturret";
                animationSourceGun = "LHBgn";
                memoryPointGun = "LHBMuz";
                memoryPointGunnerOptics = "LHBview";
                weapons[] = {"Left_TIOW_IG_HeavyBolter"};
                magazines[] = {"TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag"};
                startEngine = 1;
                stabilizedInAxes = 3;
                minElev = -16;
                maxElev = 16;
                initElev = 0;
                minTurn = 0;
                maxTurn = 80;
                initTurn = 0;
                gunnerForceOptics = 0;
                viewGunnerInExternal = 1;
                forceHideGunner = 1;
                forceHideCommander = 0;
                lodTurnedIn = 1100;
                primaryGunner = 0;
                usePip = 1;
                turretInfoType = "RscOptics_TIOW_Russ_Gunner";
                class Turrets : Turrets {};
                class HitPoints : HitPoints {
                    class HitTurret {
                        armor = 0.5;
                        material = -0.0;
                        name = "leftTurret";
                        visual = "commander_turret_hit";
                        passThrough = 1;
                        minimalHit = 0.33;
                        explosionShielding = 0.1;
                        radius = 0.15;
                    };
                    class HitGun {
                        armor = 0.5;
                        material = -0.0;
                        name = "leftGun";
                        visual = "commander_gun_hit";
                        passThrough = 1;
                        minimalHit = 0.33;
                        explosionShielding = 0.1;
                        radius = 0.25;
                    };
                };
            };
            class RHBGunner : NewTurret {
                gunnerName = "Sponson Right";
                gunnerInAction = "TIOW_LR_RightGunner";
                proxyType = "CPGunner";
                proxyIndex = 2;
                hasCrew = 1;
                gunBeg = "RHBMuz";
                gunEnd = "RHBBrch";
                body = "RHBturret";
                gun = "RHBgn";
                gunnerOpticsModel = "APCs\AutocannonOptic.p3d";
                gunnerOpticsEffect[] = {};
                animationSourceBody = "RHBturret";
                animationSourceGun = "RHBgn";
                memoryPointGun = "RHBMuz";
                memoryPointGunnerOptics = "RHBview";
                weapons[] = {"Right_TIOW_IG_HeavyBolter"};
                magazines[] = {"TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag"};
                startEngine = 1;
                stabilizedInAxes = 3;
                minElev = -16;
                maxElev = 16;
                initElev = 0;
                minTurn = -80;
                maxTurn = 0;
                initTurn = 0;
                gunnerForceOptics = 0;
                viewGunnerInExternal = 1;
                forceHideGunner = 1;
                forceHideCommander = 0;
                lodTurnedIn = 1100;
                primaryGunner = 0;
                usePip = 1;
                turretInfoType = "RscOptics_TIOW_Russ_Gunner";
                class Turrets : Turrets {};
                class HitPoints : HitPoints {
                    class HitTurret {
                        armor = 0.5;
                        material = -0.0;
                        name = "rightTurret";
                        visual = "commander_turret_hit";
                        passThrough = 1;
                        minimalHit = 0.33;
                        explosionShielding = 0.1;
                        radius = 0.15;
                    };
                    class HitGun {
                        armor = 0.5;
                        material = -0.0;
                        name = "rightGun";
                        visual = "commander_gun_hit";
                        passThrough = 1;
                        minimalHit = 0.33;
                        explosionShielding = 0.1;
                        radius = 0.25;
                    };
                };
            };
        };
        class Exhausts {
            class Exhaust1 {
                position = "exhaust_1";
                direction = "exhaust_1_dir";
                effect = "ExhaustsEffectBig";
            };
            class Exhaust2 {
                position = "exhaust_2";
                direction = "exhaust_2_dir";
                effect = "ExhaustsEffectBig";
            };
            class Exhaust3 {
                position = "exhaust_3";
                direction = "exhaust_3_dir";
                effect = "ExhaustsEffectBig";
            };
            class Exhaust4 {
                position = "exhaust_4";
                direction = "exhaust_4_dir";
                effect = "ExhaustsEffectBig";
            };
        };
        type = 1;
        class Damage {
            tex[] = {};
            mat[] = {};
        };
        class AnimationSources {
            class mainGun_muzzle_source {
                source = "reload";
                weapon = "TIOW_BattleCannon120mm";
            };
            class mainGun_muzzle_source_rot {
                source = "ammorandom";
                weapon = "TIOW_BattleCannon120mm";
            };
            class recoil_mainGun {
                source = "reload";
                weapon = "TIOW_BattleCannon120mm";
            };
            class frontGun_muzzleflash {
                source = "reload";
                weapon = "TIOW_LemanRuss_Lascannon";
            };
            class frontGun_muzzleflashRot {
                source = "ammorandom";
                weapon = "TIOW_LemanRuss_Lascannon";
            };
            class leftGun_muzzleflash {
                source = "reload";
                weapon = "Left_TIOW_IG_HeavyBolter";
            };
            class leftGun_muzzleflashRot {
                source = "ammorandom";
                weapon = "Left_TIOW_IG_HeavyBolter";
            };
            class rightGun_muzzleflash {
                source = "reload";
                weapon = "Right_TIOW_IG_HeavyBolter";
            };
            class rightGun_muzzleflashRot {
                source = "ammorandom";
                weapon = "Right_TIOW_IG_HeavyBolter";
            };
        };
        hiddenSelections[] = {"markings", "Camo"};
        hiddenSelectionsTextures[] = {"APCs\data\Textures\ChimeraInsignia1491st_ca.paa", "WHtracked\LRMIV\Data\LR_Cad836th_co.paa"};
        class Eventhandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            killed = "_this execVM '\WHtracked\LRMIV\scripts\killed.sqf';";
        };
        class Reflectors {
            class Left {
                color[] = {1900, 1900, 1900};
                ambient[] = {5, 5, 5};
                position = "Light_L";
                direction = "Light_L_end";
                hitpoint = "Light_L";
                selection = "Light_L";
                size = 1;
                innerAngle = 100;
                outerAngle = 179;
                coneFadeCoef = 10;
                intensity = 1;
                useFlare = 0;
                dayLight = 0;
                flareSize = 1.0;
                class Attenuation {
                    start = 1.0;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class Left2 : Left {
                position = "light_L_flare";
                useFlare = 1;
            };
        };
        aggregateReflectors[] = {{"Left", "Left2"}};
    };

    class BJK_LR_Vanquisher_Modified : TIOW_LR_BattleCannon {
        author = "JCaleb2014";
        vehicleClass = "Armored";
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        side = 1;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        crew = "TIOW_Cad_Tnk836th";
        displayName = "Leman Russ Vanquisher (Modified)";
        model = "\WHtracked\LRMIV\model\TIOW_LR_Vanquisher";
        hiddenSelections[] = {"markings", "Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_Markings_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_CO.paa"};
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                weapons[] = {"TIOW_Tau_Railgun", "TIOW_Tau_BurstCannon"};
                magazines[] = {"TIOW_Tau_Railgun_AP_mag", "TIOW_Tau_Railgun_AP_mag", "TIOW_Tau_Railgun_AP_mag", "TIOW_Tau_Railgun_AP_mag", "TIOW_Tau_Railgun_AP_mag", "TIOW_Tau_Railgun_AP_mag", "TIOW_Tau_Railgun_AP_mag", "TIOW_Tau_Railgun_AP_mag", "TIOW_Tau_Railgun_Airburst_mag", "TIOW_Tau_Railgun_Airburst_mag", "TIOW_Tau_BurstCannon_mag", "TIOW_Tau_BurstCannon_mag", "TIOW_Tau_BurstCannon_mag"};
                gunnerOpticsModel = "\40k_tau\Vehicles\Hammerhead\reticle\Hammerhead_optic_railgun";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsColor[] = {0, 0, 0, 1};
                gunnerOutForceOptics = 0;
                gunnerFireAlsoInInternalCamera = 0;
                gunnerOutOpticsShowCursor = 0;
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        weapons[] = {};
                        magazines[] = {};
                    };
                };
            };
            class FrontGunner : FrontGunner {
                weapons[] = {"TIOW_IG_HeavyBolter"};
                magazines[] = {"TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag"};
            };
            class LHBGunner : LHBGunner {
                weapons[] = {"TIOW_Tau_BurstCannon"};
                magazines[] = {"TIOW_Tau_BurstCannon_mag", "TIOW_Tau_BurstCannon_mag", "TIOW_Tau_BurstCannon_mag", "TIOW_Tau_BurstCannon_mag", "TIOW_Tau_BurstCannon_mag", "TIOW_Tau_BurstCannon_mag"};
                gunnerOpticsModel = "\40k_tau\Vehicles\Hammerhead\reticle\Hammerhead_optic_railgun";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsColor[] = {0, 0, 0, 1};
                gunnerOutForceOptics = 0;
                gunnerFireAlsoInInternalCamera = 0;
                gunnerOutOpticsShowCursor = 0;
            };
            class RHBGunner : RHBGunner {
                weapons[] = {"TIOW_Tau_BurstCannon"};
                magazines[] = {"TIOW_Tau_BurstCannon_mag", "TIOW_Tau_BurstCannon_mag", "TIOW_Tau_BurstCannon_mag", "TIOW_Tau_BurstCannon_mag", "TIOW_Tau_BurstCannon_mag", "TIOW_Tau_BurstCannon_mag"};
                gunnerOpticsModel = "\40k_tau\Vehicles\Hammerhead\reticle\Hammerhead_optic_railgun";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsColor[] = {0, 0, 0, 1};
                gunnerOutForceOptics = 0;
                gunnerFireAlsoInInternalCamera = 0;
                gunnerOutOpticsShowCursor = 0;
            };
        };
        class AnimationSources {
            class mainGun_muzzle_source {
                source = "reload";
                weapon = "TIOW_Tau_RailGun";
            };
            class mainGun_muzzle_source_rot {
                source = "ammorandom";
                weapon = "TIOW_Tau_RailGun";
            };
            class recoil_mainGun {
                source = "reload";
                weapon = "TIOW_Tau_RailGun";
            };
            class frontGun_muzzleflash {
                source = "reload";
                weapon = "TIOW_IG_HeavyBolter";
            };
            class frontGun_muzzleflashRot {
                source = "ammorandom";
                weapon = "TIOW_IG_HeavyBolter";
            };
            class leftGun_muzzleflash {
                source = "reload";
                weapon = "TIOW_Tau_BurstCannon";
            };
            class leftGun_muzzleflashRot {
                source = "ammorandom";
                weapon = "TIOW_Tau_BurstCannon";
            };
            class rightGun_muzzleflash {
                source = "reload";
                weapon = "TIOW_Tau_BurstCannon";
            };
            class rightGun_muzzleflashRot {
                source = "ammorandom";
                weapon = "TIOW_Tau_BurstCannon";
            };
        };
    };

    // Gue'vesa Regular Vehicles
    class BJK_LR_Battlecannon : TIOW_LR_Battlecannon {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Leman Russ Battlecannon";
        author = "JCaleb2014";
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        crew = "TIOW_Cad_Tnk836th";
        side = 1;
        hiddenSelections[] = {"markings", "Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_Markings_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_CO.paa"};
    };
    class TIOW_LR_Vanquisher;
    class BJK_LR_Vanquisher : TIOW_LR_Vanquisher {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Leman Russ Vanquisher";
        author = "JCaleb2014";
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        crew = "TIOW_Cad_Tnk836th";
        side = 1;
        hiddenSelections[] = {"markings", "Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_Markings_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_CO.paa"};
    };
    class TIOW_LR_Demolisher;
    class BJK_LR_Demolisher : TIOW_LR_Demolisher {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Leman Russ Demolisher";
        author = "JCaleb2014";
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        crew = "TIOW_Cad_Tnk836th";
        side = 1;
        hiddenSelections[] = {"markings", "Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_Markings_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_CO.paa"};
    };
    class TIOW_LR_Conqueror;
    class BJK_LR_Conqueror : TIOW_LR_Conqueror {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Leman Russ Conqueror";
        author = "JCaleb2014";
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        crew = "TIOW_Cad_Tnk836th";
        side = 1;
        hiddenSelections[] = {"markings", "Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_Markings_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_CO.paa"};
    };
    class TIOW_LR_Exterminator;
    class BJK_LR_Exterminator : TIOW_LR_Exterminator {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Leman Russ Exterminator";
        author = "JCaleb2014";
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        crew = "TIOW_Cad_Tnk836th";
        side = 1;
        hiddenSelections[] = {"markings", "Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_Markings_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_CO.paa"};
    };
    class TIOW_LR_Executioner;
    class BJK_LR_Executioner : TIOW_LR_Executioner {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Leman Russ Executioner";
        author = "JCaleb2014";
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        crew = "TIOW_Cad_Tnk836th";
        side = 1;
        hiddenSelections[] = {"markings", "Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_Markings_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_CO.paa"};
    };
    class TIOW_LR_Annihilator;
    class BJK_LR_Annihilator : TIOW_LR_Annihilator {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Leman Russ Annihilator";
        author = "JCaleb2014";
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        crew = "TIOW_Cad_Tnk836th";
        side = 1;
        hiddenSelections[] = {"markings", "Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_Markings_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_CO.paa"};
    };
    class TIOW_LR_Punisher;
    class BJK_LR_Punisher : TIOW_LR_Punisher {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Leman Russ Punisher";
        author = "JCaleb2014";
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        crew = "TIOW_Cad_Tnk836th";
        side = 1;
        hiddenSelections[] = {"markings", "Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_Markings_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Executioner_Modified_CO.paa"};
    };

    class TIOW_CadianTrojan_667;
    class BJK_Trojan : TIOW_CadianTrojan_667 {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Trojan";
        side = 1;
        author = "JCaleb2014";
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        crew = "TIOW_Cad_Tnk836th";
        hiddenSelections[] = {"HULL_TEX", "markings", "TrojanParts"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Trojan_Camo_CO.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Trojan_Markings_CA.png", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Trojan_Parts_CO.png"};
    };
    class TIOW_CadianChimAuto_667;
    class BJK_Chimera : TIOW_CadianChimAuto_667 {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Chimera";
        side = 1;
        author = "JCaleb2014";
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        crew = "TIOW_Cad_Tnk836th";
        hiddenSelections[] = {"HULL_TEX", "markings", "TRACKS_TEX"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Trojan_Camo_CO.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Chimera_Markings_CA.png", "APCs\Data\Textures\Chimera_Track_co.paa"};
    };

    class IC_Taurox_BattleCannon;
    class BJK_TauroxPrime_BattleCannon : IC_Taurox_BattleCannon {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        hiddenSelections[] = {"camo1", "camo2", "Armor_plates"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_TauroxPrime_CO.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_TauroxPrime_Turrets_CO.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_TauroxPrime_Armor_CO.paa"};
        hiddenSelectionsMaterials[] = {"BaY_JKaara_Armoury\bjk_vehicles\Materials\BJK_TauroxPrime.rvmat"};
    };
    class BJK_TauroxPrime_GatlingGun : BJK_TauroxPrime_BattleCannon {
        displayName = "Taurox Prime (Gatling Gun)";
        model = "\IC_Taurox\Model\IC_Taurox_GG.p3d";
    };
    class BJK_TauroxPrime_AutoCannon : BJK_TauroxPrime_BattleCannon {
        displayName = "Taurox Prime (Auto Cannon)";
        model = "\IC_Taurox\Model\IC_Taurox_AC.p3d";
    };
    
    class Sentinel_AC_1491th_1;
    class BJK_Sentinel_AC : Sentinel_AC_1491th_1 {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Sentinel (Assault Cannon)";
        vehicleClass = "Armored";
        faction = "BJK_F";
        editorCategory = "";
        editorSubcategory = "BJK_V";
        side = 1;
        hiddenSelections[] = {"target_monitor","body_upper_part","body_lower_part","whole_body_section","weapons_part","weapons2_part","plasmacannon_part"};
        hiddenSelectionsTextures[] = {"#(argb,256,512,1)r2t(Sight_HDR_x0,1.0)","BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_UpperBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowerBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowRes_CA.paa", "WHwalkers\sentinel\data\weapons_dkok1491th_ca.paa","WHwalkers\sentinel\data\weapons2_dkok1491th_ca.paa","WHwalkers\sentinel\data\plasmacannon_dkok1491th_ca.paa"};
    };
    class Sentinel_CS_1491th_1;
    class BJK_Sentinel_CS : Sentinel_CS_1491th_1 {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Sentinel (Chainsaw)";
        vehicleClass = "Armored";
        faction = "BJK_F";
        editorCategory = "";
        editorSubcategory = "BJK_V";
        side = 1;
        hiddenSelections[] = {"target_monitor","body_upper_part","body_lower_part","whole_body_section","weapons_part","weapons2_part","plasmacannon_part"};
        hiddenSelectionsTextures[] = {"#(argb,256,512,1)r2t(Sight_HDR_x0,1.0)","BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_UpperBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowerBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowRes_CA.paa", "WHwalkers\sentinel\data\weapons_dkok1491th_ca.paa","WHwalkers\sentinel\data\weapons2_dkok1491th_ca.paa","WHwalkers\sentinel\data\plasmacannon_dkok1491th_ca.paa"};
    };
    class Sentinel_HB_1491th_1;
    class BJK_Sentinel_HB : Sentinel_HB_1491th_1 {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Sentinel (Heavy Bolter)";
        vehicleClass = "Armored";
        faction = "BJK_F";
        editorCategory = "";
        editorSubcategory = "BJK_V";
        side = 1;
        hiddenSelections[] = {"target_monitor","body_upper_part","body_lower_part","whole_body_section","weapons_part","weapons2_part","plasmacannon_part"};
        hiddenSelectionsTextures[] = {"#(argb,256,512,1)r2t(Sight_HDR_x0,1.0)","BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_UpperBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowerBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowRes_CA.paa", "WHwalkers\sentinel\data\weapons_dkok1491th_ca.paa","WHwalkers\sentinel\data\weapons2_dkok1491th_ca.paa","WHwalkers\sentinel\data\plasmacannon_dkok1491th_ca.paa"};
    };
    class Sentinel_LC_1491th_1;
    class BJK_Sentinel_LC : Sentinel_LC_1491th_1 {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Sentinel (Lascannon)";
        crew = "TIOW_Cad_Tnk836th";
        vehicleClass = "Armored";
        faction = "BJK_F";
        editorCategory = "";
        editorSubcategory = "BJK_V";
        side = 1;
        hiddenSelections[] = {"target_monitor","body_upper_part","body_lower_part","whole_body_section","weapons_part","weapons2_part","plasmacannon_part"};
        hiddenSelectionsTextures[] = {"#(argb,256,512,1)r2t(Sight_HDR_x0,1.0)","BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_UpperBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowerBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowRes_CA.paa", "WHwalkers\sentinel\data\weapons_dkok1491th_ca.paa","WHwalkers\sentinel\data\weapons2_dkok1491th_ca.paa","WHwalkers\sentinel\data\plasmacannon_dkok1491th_ca.paa"};
    };
    class Sentinel_MLA_1491th_1;
    class BJK_Sentinel_MLA : Sentinel_MLA_1491th_1 {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Sentinel (Missile Launcher)";
        crew = "TIOW_Cad_Tnk836th";
        vehicleClass = "Armored";
        faction = "BJK_F";
        editorCategory = "";
        editorSubcategory = "BJK_V";
        side = 1;
        hiddenSelections[] = {"target_monitor","body_upper_part","body_lower_part","whole_body_section","weapons_part","weapons2_part","plasmacannon_part"};
        hiddenSelectionsTextures[] = {"#(argb,256,512,1)r2t(Sight_HDR_x0,1.0)","BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_UpperBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowerBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowRes_CA.paa", "WHwalkers\sentinel\data\weapons_dkok1491th_ca.paa","WHwalkers\sentinel\data\weapons2_dkok1491th_ca.paa","WHwalkers\sentinel\data\plasmacannon_dkok1491th_ca.paa"};
    };
    class Sentinel_ML_1491th_1;
    class BJK_Sentinel_ML : Sentinel_ML_1491th_1 {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Sentinel (Multilaser)";
        crew = "TIOW_Cad_Tnk836th";
        vehicleClass = "Armored";
        faction = "BJK_F";
        editorCategory = "";
        editorSubcategory = "BJK_V";
        side = 1;
        hiddenSelections[] = {"target_monitor","body_upper_part","body_lower_part","whole_body_section","weapons_part","weapons2_part","plasmacannon_part"};
        hiddenSelectionsTextures[] = {"#(argb,256,512,1)r2t(Sight_HDR_x0,1.0)","BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_UpperBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowerBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowRes_CA.paa", "WHwalkers\sentinel\data\weapons_dkok1491th_ca.paa","WHwalkers\sentinel\data\weapons2_dkok1491th_ca.paa","WHwalkers\sentinel\data\plasmacannon_dkok1491th_ca.paa"};
    };
    class Sentinel_PC_1491th_1;
    class BJK_Sentinel_PC : Sentinel_PC_1491th_1 {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Sentinel (Plasma Cannon)";
        crew = "TIOW_Cad_Tnk836th";
        vehicleClass = "Armored";
        faction = "BJK_F";
        editorCategory = "";
        editorSubcategory = "BJK_V";
        side = 1;
        hiddenSelections[] = {"target_monitor","body_upper_part","body_lower_part","whole_body_section","weapons_part","weapons2_part","plasmacannon_part"};
        hiddenSelectionsTextures[] = {"#(argb,256,512,1)r2t(Sight_HDR_x0,1.0)","BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_UpperBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowerBody_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Sentinel_LowRes_CA.paa", "WHwalkers\sentinel\data\weapons_dkok1491th_ca.paa","WHwalkers\sentinel\data\weapons2_dkok1491th_ca.paa","WHwalkers\sentinel\data\plasmacannon_dkok1491th_ca.paa"};
    };
    
    // Tau Vehicles
    class TIOW_Tau_Hammerhead_TA;
    class BJK_HammerHead_Railgun_VD : TIOW_Tau_Hammerhead_TA {
        author = "JCaleb2014";
        vehicleClass = "Armored";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        displayName = "Hammerhead (Railgun)";
        crew = "BJK_EarthCaste_Crewman";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Devilfish_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_HammerHead_Railgun_CA.paa"};
        class UserActions {
            class Attach_drones {
                displayName = "Attach Drones";
                position = "useraction";
                radius = 50;
                onlyForPlayer = 1;
                condition = "(player == driver this) and count(attachedObjects this) < 2";
                // clang-format off
                statement = "[this] execvm ""\BaY_JKaara_Armoury\bjk_vehicles\Scripts\attach_drones.sqf"";";
                // clang-format on
            };
            class Detach_drones : Attach_drones {
                displayName = "Detach Drones";
                condition = "(player == driver this) and count(attachedObjects this) > 0";
                // clang-format off
                statement = "{detach _x;if (_forEachIndex == 0) then {_x setVelocityModelSpace [-1,0,0];} else {_x setVelocityModelSpace [1,0,0];};} forEach attachedObjects this;";
                // clang-format on
            };
        };
        class Eventhandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\vehicle_drone.sqf';";
        };
    };
    class BJK_HammerHead_Railgun_GD : BJK_HammerHead_Railgun_VD {
        displayName = "Hammerhead (Railgun, Gun Drones)";
        class UserActions : UserActions {};
        class Eventhandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\gun_drone.sqf';";
        };
    };
    class BJK_HammerHead_Railgun_MD : BJK_HammerHead_Railgun_VD {
        displayName = "Hammerhead (Railgun, Missile Drones)";
        class UserActions : UserActions {};
        class Eventhandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\missile_drone.sqf';";
        };
    };
    class BJK_HammerHead_Railgun_SMD : BJK_HammerHead_Railgun_VD {
        displayName = "Hammerhead (Railgun, Smart Missile Drones)";
        class UserActions : UserActions {};
        class Eventhandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\smartmissile_drone.sqf';";
        };
    };
    class BJK_HammerHead_Railgun_UAV : BJK_HammerHead_Railgun_VD {
        displayName = "Hammerhead (Railgun, Marker Drones UAV)";
        class UserActions : UserActions {};
        class Eventhandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\marker_drone_uav.sqf';";
        };
    };

    class TIOW_Tau_Hammerhead_Twinburst_TA;
    class BJK_HammerHead_Twinburst_VD : TIOW_Tau_Hammerhead_Twinburst_TA {
        author = "JCaleb2014";
        vehicleClass = "Armored";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        displayName = "Hammerhead (Twin Burstcannon)";
        crew = "BJK_EarthCaste_Crewman";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Devilfish_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_HammerHead_Twinburst_CA.paa"};
        class UserActions {
            class Attach_drones {
                displayName = "Attach Drones";
                position = "useraction";
                radius = 50;
                onlyForPlayer = 1;
                condition = "(player == driver this) and count(attachedObjects this) < 2";
                // clang-format off
                statement = "[this] execvm ""\BaY_JKaara_Armoury\bjk_vehicles\Scripts\attach_drones.sqf"";";
                // clang-format on
            };
            class Detach_drones : Attach_drones {
                displayName = "Detach Drones";
                condition = "(player == driver this) and count(attachedObjects this) > 0";
                // clang-format off
                statement = "{detach _x;if (_forEachIndex == 0) then {_x setVelocityModelSpace [-1,0,0];} else {_x setVelocityModelSpace [1,0,0];};} forEach attachedObjects this;";
                // clang-format on
            };
        };
        class Eventhandlers {
            fired = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\fire_twinburst.sqf';";
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\vehicle_drone.sqf';";
        };
    };
    class BJK_HammerHead_Twinburst_GD : BJK_HammerHead_Twinburst_VD {
        displayName = "Hammerhead (Twin Burstcannon, Gun Drones)";
        class UserActions : UserActions {};
        class Eventhandlers : EventHandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\gun_drone.sqf';";
        };
    };
    class BJK_HammerHead_Twinburst_MD : BJK_HammerHead_Twinburst_VD {
        displayName = "Hammerhead (Twin Burstcannon, Missile Drones)";
        class UserActions : UserActions {};
        class Eventhandlers : EventHandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\missile_drone.sqf';";
        };
    };
    class BJK_HammerHead_Twinburst_SMD : BJK_HammerHead_Twinburst_VD {
        displayName = "Hammerhead (Twin Burstcannon, Smart Missile Drones)";
        class UserActions : UserActions {};
        class Eventhandlers : EventHandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\smartmissile_drone.sqf';";
        };
    };
    class BJK_HammerHead_Twinburst_UAV : BJK_HammerHead_Twinburst_VD {
        displayName = "Hammerhead (Twin Burstcannon, Marker Drones UAV)";
        class UserActions : UserActions {};
        class Eventhandlers : EventHandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\marker_drone_uav.sqf';";
        };
    };
    class TIOW_Tau_Hammerhead_Ioncannon_TA;
    class BJK_HammerHead_IonCannon_VD : TIOW_Tau_Hammerhead_Ioncannon_TA {
        author = "JCaleb2014";
        vehicleClass = "Armored";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        displayName = "Hammerhead (Ion Cannon)";
        crew = "BJK_EarthCaste_Crewman";
        hiddenSelections[] = {"Camo", "Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Devilfish_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_HammerHead_Railgun_CA.paa", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_HammerHead_IonCannon_CA.paa"};
        class UserActions {
            class Attach_drones {
                displayName = "Attach Drones";
                position = "useraction";
                radius = 50;
                onlyForPlayer = 1;
                condition = "(player == driver this) and count(attachedObjects this) < 2";
                // clang-format off
                statement = "[this] execvm ""\BaY_JKaara_Armoury\bjk_vehicles\Scripts\attach_drones.sqf"";";
                // clang-format on
            };
            class Detach_drones : Attach_drones {
                displayName = "Detach Drones";
                condition = "(player == driver this) and count(attachedObjects this) > 0";
                // clang-format off
                statement = "{detach _x;if (_forEachIndex == 0) then {_x setVelocityModelSpace [-1,0,0];} else {_x setVelocityModelSpace [1,0,0];};} forEach attachedObjects this;";
                // clang-format on
            };
        };
        class Eventhandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\vehicle_drone.sqf';";
        };
    };
    class BJK_HammerHead_IonCannon_GD : BJK_HammerHead_IonCannon_VD {
        displayName = "Hammerhead (Ion Cannon, Gun Drones)";
        class UserActions : UserActions {};
        class Eventhandlers : EventHandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\gun_drone.sqf';";
        };
    };
    class BJK_HammerHead_IonCannon_MD : BJK_HammerHead_IonCannon_VD {
        displayName = "Hammerhead (Ion Cannon, Missile Drones)";
        class UserActions : UserActions {};
        class Eventhandlers : EventHandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\missile_drone.sqf';";
        };
    };
    class BJK_HammerHead_IonCannon_SMD : BJK_HammerHead_IonCannon_VD {
        displayName = "Hammerhead (Ion Cannon, Smart Missile Drones)";
        class UserActions : UserActions {};
        class Eventhandlers : EventHandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\smartmissile_drone.sqf';";
        };
    };
    class BJK_HammerHead_IonCannon_UAV : BJK_HammerHead_IonCannon_VD {
        displayName = "Hammerhead (Ion Cannon, Marker Drones UAV)";
        class UserActions : UserActions {};
        class Eventhandlers : EventHandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\marker_drone_uav.sqf';";
        };
    };

    class TIOW_Tau_Devilfish_TA;
    class BJK_Devilfish_VD : TIOW_Tau_Devilfish_TA {
        author = "JCaleb2014";
        vehicleClass = "Armored";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "BJK_F";
        editorSubcategory = "BJK_V";
        displayName = "Devilfish";
        crew = "BJK_EarthCaste_Crewman";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Devilfish_CA.paa"};
        class UserActions {
            class Attach_drones {
                displayName = "Attach Drones";
                position = "useraction";
                radius = 25;
                onlyForPlayer = 1;
                condition = "(player == driver this) and count(attachedObjects this) < 2";
                // clang-format off
                statement = "[this] execvm ""\BaY_JKaara_Armoury\bjk_vehicles\Scripts\attach_drones.sqf"";";
                // clang-format on
            };
            class Detach_drones : Attach_drones {
                displayName = "Detach Drones";
                condition = "(player == driver this) and count(attachedObjects this) > 0";
                // clang-format off
                statement = "{detach _x;if (_forEachIndex == 0) then {_x setVelocityModelSpace [-1,0,0];} else {_x setVelocityModelSpace [1,0,0];};} forEach attachedObjects this;";
                // clang-format on
            };
        };
        class Eventhandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\vehicle_drone.sqf';";
        };
    };
    class BJK_Devilfish_GD : BJK_Devilfish_VD {
        displayName = "Devilfish (Gun Drones)";
        class UserActions : UserActions {};
        class Eventhandlers : EventHandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\gun_drone.sqf';";
        };
    };
    class BJK_Devilfish_MD : BJK_Devilfish_VD {
        displayName = "Devilfish (Missile Drones)";
        class UserActions : UserActions {};
        class Eventhandlers : EventHandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\missile_drone.sqf';";
        };
    };
    class BJK_Devilfish_SMD : BJK_Devilfish_VD {
        displayName = "Devilfish (Smart Missile Drones)";
        class UserActions : UserActions {};
        class Eventhandlers : EventHandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\smartmissile_drone.sqf';";
        };
    };
    class BJK_Devilfish_UAV : BJK_Devilfish_VD {
        displayName = "Devilfish (Marker Drones UAV)";
        class UserActions : UserActions {};
        class Eventhandlers : EventHandlers {
            init = "_this execVM '\BaY_JKaara_Armoury\bjk_vehicles\Scripts\marker_drone_uav.sqf';";
        };
    };

    // Tau Drones / UAVS

    // UAV Item
    class ITC_Land_UAV_Packed_base;
    class CBA_MiscItem_ItemInfo;
    class BJK_Tau_Drone_Marker_UAV_Packed : ITC_Land_UAV_Packed_base {
        author = "JCaleb2014";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        weaponPoolAvailable = 1;
        displayName = "Cadre Marker Drone (UAV)";
        picture = "";
        descriptionShort = "Remote Tau Drone";
        mass = 10;
        weight = 0;
        itc_land_unPacksTo = "BJK_Tau_Drone_Marker_UAV";
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 10;
            weight = 100;
            displayName = "Cadre Marker Drone (UAV)";
        };
    };
    class BJK_ServoSkull_UAV_Packed : BJK_Tau_Drone_Marker_UAV_Packed {
        displayName = "[Ba'Y J'Kaara] Servo Skull";
        descriptionShort = "Remote Servo Skull";
        itc_land_unPacksTo = "BJK_ServoSkull_UAV";
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 10;
            weight = 100;
            displayName = "[Ba'Y J'Kaara] Servo Skull";
        };
    };
    class Dos_PP_UAV_1;
    class BJK_PP_UAV_1 : Dos_PP_UAV_1 {
        author = "JCaleb2014";
        scope = 2;
        displayName = "[Ba'Y JK] Cadre Marker Drone Deploy";
        model = "\A3\weapons_f\empty";
        class assembleInfo {
            primary = 1;
            base = "";
            displayName = "Marker Drone Unarmed UAV";
            assembleTo = "BJK_Tau_Drone_Marker_UAV";
        };
    };
    class BJK_PP_UAV_2 : BJK_PP_UAV_1 {
        scope = 2;
        displayName = "[Ba'Y JK] Servo Skull Deploy";
        model = "TIOW_Admech\models\Mech_Back_1.p3d";
        class ItemInfo : ItemInfo {
            uniformModel = "TIOW_Admech\models\Mech_Back_1.p3d";
        };
        class assembleInfo {
            primary = 1;
            base = "";
            displayName = "Servo Skull Unarmed UAV";
            assembleTo = "BJK_ServoSkull_UAV";
        };
    };

    // UAVs
    class TIOW_Tau_Marker_Drone_TA;
    class ACE_Actions;
    class BJK_Tau_Drone_Marker_UAV : TIOW_Tau_Marker_Drone_TA {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "BJK_F";
        editorSubcategory = "BJK_DR";
        displayName = "Cadre Marker Drone (UAV)";
        itc_land_PacksTo = "BJK_Tau_Drone_Marker_UAV_Packed";
        _generalMacro = "BJK_Tau_Drone_Marker_UAV";
        fuelCapacity = 9999;
        camouflage = 1;
        liftForceCoef = 4;
        maxSpeed = 350;
        rotorSpeed = 2;
        envelope[] = {0, 0.5, 2.0, 3.0, 4, 4.5, 5, 5.5, 5.7, 6, 6, 5.6, 5, 4.3, 3.0};
        model = "\40k_tau\Drones\Marker_Drone.p3d";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Base_CA.png", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Marker_CA.paa"};
        class assembleInfo {
            primary = 1;
            base = "";
            assembleTo = "";
            displayName = "";
            dissasembleTo[] = {"BJK_PP_UAV_1"};
        };
        class ACE_Actions {
            class ACE_MainActions {
                class BJK_Pack_Servo {
                    displayName = "Deactivate Cadre Marker Drone (UAV)";
                    condition = "((alive _target) && ( ACE_Player distance _target ) < 10) && ( count (( UAVControl _target) select 1 ) < 1 )";
                    statement = "[_target,_player] call itc_land_packable_fnc_Pack";
                };
            };
        };
    };

    class Dos_Servo_UAV_2;
    class BJK_Servo_UAV_Base : Dos_Servo_UAV_2 {
        scope = 0;
        scopeCurator = 0;
        class ACE_Actions;
    };
    class BJK_Servo_UAV_Base_2 : BJK_Servo_UAV_Base {
        class ACE_Actions : ACE_Actions {
            class ACE_MainActions;
        };
    };
    class Turrets;
    class MainTurret;
    class OpticsIn;
    class BJK_ServoSkull_UAV : BJK_Servo_UAV_Base_2 {
        scope = 2;
        scopeCurator = 2;
        displayName = "Servo Skull (UAV)";
        itc_land_PacksTo = "BJK_ServoSkull_UAV_Packed";
        faction = "BJK_F";
        editorSubcategory = "BJK_DR";
        camouflage = 1;
        liftForceCoef = 4;
        maxSpeed = 350;
        rotorSpeed = 2;
        envelope[] = {0, 0.5, 2.0, 3.0, 4, 4.5, 5, 5.5, 5.7, 6, 6, 5.6, 5, 4.3, 3.0};
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                laserScanner = 1;
                isCopilot = 0;
                minElev = -100;
                maxElev = 10;
                initElev = -3;
                minTurn = -360;
                maxTurn = 360;
                initTurn = 0;
                weapons[] = {"Laserdesignator_vehicle"};
                magazines[] = {"Laserbatteries"};
                class OpticsIn : OpticsIn {
                    class Wide {
                        opticsDisplayName = "W";
                        initAngleX = 0;
                        minAngleX = -360;
                        maxAngleX = 360;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.5;
                        minFov = 0.5;
                        maxFov = 0.5;
                        directionStabilized = 1;
                        visionMode[] = {"Normal", "NVG", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\40k_tau\Drones\reticle\Tau_optic_gunner_2";
                    };
                    class Medium : Wide {
                        opticsDisplayName = "M";
                        initFov = 0.1;
                        minFov = 0.1;
                        maxFov = 0.1;
                    };
                    class Narrow : Wide {
                        opticsDisplayName = "N";
                        initFov = 0.0286;
                        minFov = 0.0286;
                        maxFov = 0.0286;
                    };
                };
            };
        };
        class UserActions {
            class ThrusterGravBrakes {
                animPeriod = 5;
                condition = "(alive this) AND ((speed this) > 65)";
                displayName = "<t color='#FE2E2E'>Engage Gravbrakes";
                displayNameDefault = "<t color='#FE2E2E'>Engage Gravbrakes";
                onlyForPlayer = 0;
                position = "";
                priority = 10;
                radius = 1;
                showWindow = 0;
                statement = "0 = this spawn Steve_30k_Jetbike_Script_fnc_ThrustersGravBrakes";
                textToolTip = "<t color='#FE2E2E'>Engage Gravbrakes";
                userActionID = 57;
            };
            class ThrusterEngage {
                animPeriod = 5;
                // clang-format off
                condition="(!(this getvariable [""Speeder_Thruster_Status"",false])) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
                // clang-format on
                displayName = "<t color='#04B45F'>Engage Forward Thrusters";
                displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
                onlyForPlayer = 0;
                position = "";
                priority = 10;
                radius = 1;
                showWindow = 0;
                statement = "0 = this spawn Steve_30k_Jetbike_Script_fnc_ThrustersEngage";
                textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
                userActionID = 52;
            };
            class ThrusterDisengage {
                animPeriod = 5;
                // clang-format off
                condition = "(this getvariable [""Speeder_Thruster_Status"",false]) AND (alive this)";
                // clang-format on
                displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
                onlyForPlayer = 0;
                position = "";
                priority = 10;
                radius = 1;
                showWindow = 0;
                statement = "0 = this spawn Steve_30k_Jetbike_Script_fnc_ThrustersDisengage";
                textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
                userActionID = 53;
            };
        };
        class assembleInfo {
            primary = 1;
            base = "";
            assembleTo = "";
            displayName = "";
            dissasembleTo[] = {"BJK_PP_UAV_2"};
        };

        class ACE_Actions : ACE_Actions {
            class ACE_MainActions : ACE_MainActions {
                class BJK_Pack_Servo {
                    displayName = "Deactivate Servo-Skull";
                    condition = "((alive _target) && ( ACE_Player distance _target ) < 10) && ( count (( UAVControl _target) select 1 ) < 1 )";
                    statement = "[_target,_player] call itc_land_packable_fnc_Pack";
                };
            };
        };
    };

    // Drones
    class TIOW_Tau_Gun_Drone2_TA;
    class BJK_Tau_Drone_Gun : TIOW_Tau_Gun_Drone2_TA {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        displayName = "Cadre Gun Drone";
        faction = "BJK_F";
        editorSubcategory = "BJK_DR";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Base_CA.png", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Gun_CA.paa"};
    };
    class BJK_Tau_Drone_Marker : TIOW_Tau_Marker_Drone_TA {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        displayName = "Cadre Marker Drone";
        faction = "BJK_F";
        editorSubcategory = "BJK_DR";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Base_CA.png", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Marker_CA.paa"};
    };
    class TIOW_Tau_Missile_Drone_TA;
    class BJK_Tau_Drone_Missile : TIOW_Tau_Missile_Drone_TA {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        displayName = "Cadre Missile Drone";
        faction = "BJK_F";
        editorSubcategory = "BJK_DR";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Base_CA.png", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Missile_CA.paa"};
    };
    class TIOW_Tau_SmartMissile_Drone_TA;
    class BJK_Tau_Drone_SmartMissile : TIOW_Tau_SmartMissile_Drone_TA {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        displayName = "Cadre Smart Missile Drone";
        faction = "BJK_F";
        editorSubcategory = "BJK_DR";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Base_CA.png", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Missile_CA.paa"};
    };
    class TIOW_Tau_Sniper_Drone_TA;
    class BJK_Tau_Drone_Sniper : TIOW_Tau_Sniper_Drone_TA {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        displayName = "Cadre Sniper Drone";
        faction = "BJK_F";
        editorSubcategory = "BJK_DR";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Base_CA.png", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Sniper_CA.paa"};
    };
    class TIOW_Tau_Vehicle_Drone_TA;
    class BJK_Tau_Drone_Vehicle : TIOW_Tau_Vehicle_Drone_TA {
        author = "JCaleb2014";
        scope = 2;
        scopeCurator = 2;
        displayName = "Cadre Vehicle Drone";
        faction = "BJK_F";
        editorSubcategory = "BJK_DR";
        hiddenSelections[] = {"Camo", "Camo1"};
        hiddenSelectionsTextures[] = {"BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Base_CA.png", "BaY_JKaara_Armoury\bjk_vehicles\Textures\BJK_Tau_Drone_Vehicle_CA.paa"};
    };
};

class CfgMods {
    author = "JCaleb2014";
    timepacked = "1650387927";
};