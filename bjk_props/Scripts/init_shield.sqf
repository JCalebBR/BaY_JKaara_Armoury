if (!is3DEN and isServer) then {
	private ["_gen", "_obj", "_shield"];

	_gen = _this select 0;

	_obj = "BJK_Tau_Shield";

	// spawn drones high up to allow them start engine and start to hover before attaching them
	_shield = _obj createVehicle getPos _gen;
	detach _shield;
	_shield attachTo [_gen, [0, 0, -0.2], ""];
	_shield setObjectScale 0.5;
	_shield allowDamage true;
	
	{
		_x addCuratorEditableObjects [[_shield], false];
	} forEach allCurators;
};