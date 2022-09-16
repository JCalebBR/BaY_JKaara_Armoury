#include "script_component.hpp"
/*
	 * Author:JCaleb2014
	 * Checks the Generator Health
	 *
	 * Arguments:
	 * 0: Unit <OBJECT>
	 *
	 * Return Value:
	 * None
	 *
	 * Example:
	 * [this] call bjk_func_init_generator
	 *
	 * Public: No
*/

[{
	params ["_target"];
	private ["_generatorHealth"];
	_generatorHealth = (1 - (damage _target))*100;
	hintSilent "";
	hintSilent format ["Generator Health: %1%2", str round _generatorHealth,"%"];
}, _this] call CBA_fnc_execNextFrame;