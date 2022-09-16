#include "script_component.hpp"
/*
	 * Author:JCaleb2014
	 * Checks the Shield Health
	 *
	 * Arguments:
	 * 0: Unit <OBJECT>
	 *
	 * Return Value:
	 * None
	 *
	 * Example:
	 * [this] call bjk_func_init_shield
	 *
	 * Public: No
*/

[{
	params ["_target"];
	private ["_validShields", "_attachedObjects", "_shield", "_shieldHealth"];
	_validShields = [];
	_validShields pushBack "BJK_Tau_Shield_Sphere";
	_validShields pushBack "BJK_Tau_Shield_Dome";

	_attachedObjects = attachedObjects _target;

	if (count(_attachedObjects) == 1) then {
		_shield = _attachedObjects select 0;
		if ((typeOf _shield) in _validShields) then {
			_shieldHealth = (1 - (damage _shield))*100;
			hintSilent "";
			hintSilent format ["Shield Health: %1%2", str round _shieldHealth, "%"];
		};
	};
}, _this] call CBA_fnc_execNextFrame;