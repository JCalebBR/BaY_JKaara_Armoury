#include "script_component.hpp"
/*
	 * Author:JCaleb2014
	 * Initializes the Shield
	 *
	 * Arguments:
	 * 0: Unit <OBJECT>
	 *
	 * Return Value:
	 * None
	 *
	 * Example:
	 * [player] call bjk_func_init_shield
	 *
	 * Public: No
*/

[{
	params["_this", "_player"];
	private ["_gen", "_obj", "_shield", "_validCharges", "_items"];

	_items = items _player;

	if ("BJK_Tau_Shield_Charge" in _items) then {
		_player removeItem "BJK_Tau_Shield_Charge";

		_gen = _this;

		_obj = "BJK_Tau_Shield_Sphere";

		_shield = _obj createVehicle getPosWorld _gen;
		detach _shield;
		_shield attachTo [_gen, [0, 0, 0], "Projector"];
		// _shield setObjectScale 1;
		_shield allowDamage true;

		{
			_x addCuratorEditableObjects [[_shield], false];
		} forEach allCurators;
	};
}, _this] call CBA_fnc_execNextFrame;