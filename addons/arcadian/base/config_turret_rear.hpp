class CargoTurret;
class Turrets: Turrets {
    class CargoTurret_1: CargoTurret {
        minElev = -10;
        maxElev = 23;
        maxTurn = 130;
        minTurn = 25;
        gunnerAction = "passenger_flatground_2";
        gunnerName = "$STR_A3_REAR_GUNNER";
        proxyIndex = 6;
        LODTurnedIn = 1000;
        LODOpticsIn = 1000;
        LODTurnedOut = 1000;
        LODOpticsOut = 1000;
        isPersonTurret = 1;
        memoryPointsGetInGunner = "pos cargo rear";
        memoryPointsGetInGunnerDir = "pos cargo dir rear";
        memoryPointGunnerOptics = "";
        gunnerOutOpticsModel = "";
        gunnerOpticsModel = "";
        enabledByAnimationSource = "reardoor_2_source";
        usepip = 0;
        ejectDeadGunner = 0;
        startEngine = 0;
        outGunnerMayFire = 1;
        inGunnerMayFire = 0;
        commanding = -2;
        gunnerCompartments = "Compartment1";
    };
};
