class Car;
class Car_F: Car {
    class AnimationSources;
    class NewTurret;
    class Turrets {
        class MainTurret: NewTurret {
            class ViewOptics;
        };
    };

    class HitPoints {
        class HitRGlass;
        class HitLGlass;
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
        class HitBody;
        class HitFuel;
        class HitEngine;
        class HitLFWheel;
        class HitLF2Wheel;
        class HitRFWheel;
        class HitRF2Wheel;
    };

    class EventHandlers;
    class CargoTurret;
};

class CLASS(Arcadian_Base): Car_F {
    model = QPATHTOF(Arcadian.p3d);
    #include "config_acre.hpp"
    #include "config_animationsources.hpp"
    #include "config_hitpoints.hpp"
    #include "config_misc.hpp"
    #include "config_physx.hpp"
    #include "config_reflectors.hpp"
    #include "config_rendertargets.hpp"
    #include "config_simpleobject.hpp"
    #include "config_sound.hpp"
    #include "config_turret_rear.hpp"
    #include "config_useractions.hpp"

    class Exhausts {
        class Exhaust1 {
            position = "exhaust_1";
            direction = "exhaust_1_dir";
            effect = "ExhaustsEffect";
        };
    };

    class Library {
        libTextDesc = "";
    };

    class PlateInfos {
        name = "spz";
        color[] = {0, 0, 0, 0.75};
        plateFont = "RobotoCondensedLight";
        plateFormat = "TACS - ####"; // Will show as TACS - 0123 in game.
        plateLetters = "ABCDEFHIKLMOPRSTVXYZ";
    };
};

class CLASS(Arcadian_Unarmed_Base): CLASS(Arcadian_Base) {
    MACRO_ARCADIAN_DAMAGE
    #include "config_texturesources_unarmed.hpp"

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle;};";
    };
};

class CLASS(Arcadian_Armed_Base): CLASS(Arcadian_Base) {
    model = QPATHTOF(Arcadian_Armed.p3d);
    MACRO_ARCADIAN_DAMAGE
    #include "config_animationsources_armed.hpp"
    #include "config_texturesources_armed.hpp"
    #include "config_turret_gatling.hpp"

    animationList[] = {
        "rearseats_source", 1,
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle;};";
    };
};
