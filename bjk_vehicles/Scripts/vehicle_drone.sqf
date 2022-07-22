if (!is3Den and isServer) then {
	private ["_veh", "_droneType", "_drone1", "_drone2"];

	_veh = _this select 0;

	_droneType = "BJK_Tau_Drone_Vehicle";

	// spawn drones high up to allow them start engine and start to hover before attaching them
	_drone1 = _droneType createVehicle getpos _veh;
	_drone1 allowDamage false;
	createVehicleCrew _drone1;
	_drone1 flyInHeight 5;
	_drone1 engineOn true;
	detach _drone1;

	_drone2 = _droneType createVehicle getpos _veh;//different height, dont want drones to collide in the air
	_drone2 allowDamage false;
	createVehicleCrew _drone2;
	_drone2 flyInHeight 5;
	_drone2 engineOn true;
	detach _drone2;
	

	sleep 2.5;

	// makes zeus able to delete spawned objects
	{
		_y = _x;

		{
			_x addCuratorEditableObjects [[_y], false];
		} forEach allCurators;

	} forEach (crew _drone1);

	{
		_y = _x;

		{
			_x addCuratorEditableObjects [[_y], false];
		} forEach allCurators;

	} forEach (crew _drone2);

	{
		_x addCuratorEditableObjects [[_drone1], false];
		_x addCuratorEditableObjects [[_drone2], false];
	} forEach allCurators;

	// these sometimes dont work for both drones? try again?
	_drone1 flyInHeight 5;
	_drone2 flyInHeight 5;

	_drone1 attachTo [_veh, [0,0,0], "drone_attach_L"];
	_drone2 attachTo [_veh, [0,0,0], "drone_attach_R"];
	
	sleep 2;
	
	_drone1 allowDamage true;
	_drone2 allowDamage true;
};