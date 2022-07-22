params["_drone","_count","_muzzle","_myVar"];
 
_drone = _this select 0;
_count = _drone ammo "TIOW_Tau_Twin_Longbarrel_Burstcannon";
_drone animateSource ["evenSrc",1];
if (isServer) then {
    _drone animateSource ["evenSrc",1,true];
};

if (_count % 2 == 0) then {_drone animateSource ["evenSrc",1,true]} else {_drone animateSource ["evenSrc",0,true]};

