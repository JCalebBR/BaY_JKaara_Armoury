private ["_veh", "_validDrones", "_attachedObjects", "_numAttachedObjects"];

_veh = _this select 0;

_validDrones = [];
_validDrones pushBack "BJK_Tau_Drone_Gun";
_validDrones pushBack "BJK_Tau_Drone_Vehicle";
_validDrones pushBack "BJK_Tau_Drone_Marker";
_validDrones pushBack "BJK_Tau_Drone_Marker_UAV";
_validDrones pushBack "BJK_Tau_Drone_Missile";
_validDrones pushBack "BJK_Tau_Drone_SmartMissile";
_attachedObjects = attachedObjects _veh;

// in case someone has attached other objects to the vehicle, lets remove them from the array
{
	if (!((typeOf _x) in _validDrones)) then {
		_attachedObjects deleteAt _forEachIndex;
	};
} forEach _attachedObjects;

_numAttachedObjects = count(_attachedObjects);

// exit if it already has 2 drones
if (_numAttachedObjects >= 2) exitWith {
	systemChat "No available slots";
};

{
	if (count(attachedObjects _veh) < 2 and !(_x in _attachedObjects) and (typeOf _x) in _validDrones and (alive _x) and (isNull attachedTo _x)) then {
		// only add max 2 drones and skip drones that are already attached and must be a valid drone class and drone must be alive and drone cannot be attached to anything else
		if (count(attachedObjects _veh) == 0) then {
			if ((typeOf _x == "BJK_Tau_Drone_Gun") or (typeOf _x == "BJK_Tau_Drone_Vehicle")) then {
				_x attachTo [_veh, [0, 0, 0], "drone_attach_L"];
			};
			if ((typeOf _x == "BJK_Tau_Drone_Marker") or (typeOf _x == "BJK_Tau_Drone_Marker_UAV")) then {
				_x attachTo [_veh, [0, 0, -0.60], "drone_attach_L"];
			};
			if ((typeOf _x == "BJK_Tau_Drone_Missile") or (typeOf _x == "BJK_Tau_Drone_SmartMissile")) then {
				_x attachTo [_veh, [0, 0, -1.40], "drone_attach_L"];
			};
			_x setDamage 0;
		} else {
			if ((typeOf _x == "BJK_Tau_Drone_Gun") or (typeOf _x == "BJK_Tau_Drone_Vehicle")) then {
				_x attachTo [_veh, [0, 0, 0], "drone_attach_R"];
			};
			if ((typeOf _x == "BJK_Tau_Drone_Marker") or (typeOf _x == "BJK_Tau_Drone_Marker_UAV")) then {
				_x attachTo [_veh, [0, 0, -0.60], "drone_attach_R"];
			};
			if ((typeOf _x == "BJK_Tau_Drone_Missile") or (typeOf _x == "BJK_Tau_Drone_SmartMissile")) then {
				_x attachTo [_veh, [0, 0, -1.40], "drone_attach_R"];
			};
			_x setDamage 0;
		};
	};
} forEach (nearestObjects [_veh, _validDrones, 10]);