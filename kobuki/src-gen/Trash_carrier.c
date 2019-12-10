/** Generated by YAKINDU Statechart Tools code generator. */

#include "Trash_carrier.h"
#include "../src/sc_types.h"

/*! \file Implementation of the state machine 'trash_carrier'
*/

/* prototypes of all internal functions */
static void enact_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station(Trash_carrier* handle);
static void enact_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following(Trash_carrier* handle);
static void enact_Path_Finding_Region_Rotation_Region_r1_Rest(Trash_carrier* handle);
static void enact_Path_Finding_Region_Rotation_Region_r1_Rotating_Left(Trash_carrier* handle);
static void enact_Path_Finding_Region_Rotation_Region_r1_Rotating_Right(Trash_carrier* handle);
static void enact_Path_Finding_Region_Rotation_Region_r1_Reset_Align(Trash_carrier* handle);
static void exact_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following(Trash_carrier* handle);
static void exact_Path_Finding_Region_Rotation_Region_r1_Rest(Trash_carrier* handle);
static void exact_Path_Finding_Region_Rotation_Region_r1_Rotating_Left(Trash_carrier* handle);
static void exact_Path_Finding_Region_Rotation_Region_r1_Rotating_Right(Trash_carrier* handle);
static void exact_Path_Finding_Region_Rotation_Region_r1_Reset_Align(Trash_carrier* handle);
static void enseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station_default(Trash_carrier* handle);
static void enseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following_default(Trash_carrier* handle);
static void enseq_Path_Finding_Region_Rotation_Region_default(Trash_carrier* handle);
static void enseq_Path_Finding_Region_Rotation_Region_r1_Rest_default(Trash_carrier* handle);
static void enseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Left_default(Trash_carrier* handle);
static void enseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Right_default(Trash_carrier* handle);
static void enseq_Path_Finding_Region_Rotation_Region_r1_Reset_Align_default(Trash_carrier* handle);
static void enseq_Path_Finding_Region_default(Trash_carrier* handle);
static void enseq_Path_Finding_Region_Rotation_Region_r1_default(Trash_carrier* handle);
static void exseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station(Trash_carrier* handle);
static void exseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following(Trash_carrier* handle);
static void exseq_Path_Finding_Region_Rotation_Region(Trash_carrier* handle);
static void exseq_Path_Finding_Region_Rotation_Region_r1_Rest(Trash_carrier* handle);
static void exseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Left(Trash_carrier* handle);
static void exseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Right(Trash_carrier* handle);
static void exseq_Path_Finding_Region_Rotation_Region_r1_Reset_Align(Trash_carrier* handle);
static void exseq_Path_Finding_Region(Trash_carrier* handle);
static void exseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region(Trash_carrier* handle);
static void exseq_Path_Finding_Region_Rotation_Region_r1(Trash_carrier* handle);
static void react_Path_Finding_Region_Rotation_Region_r1__entry_Default(Trash_carrier* handle);
static void react_Path_Finding_Region__entry_Default(Trash_carrier* handle);
static sc_boolean react(Trash_carrier* handle);
static sc_boolean Path_Finding_Region_PathFindingRegion_react(Trash_carrier* handle, const sc_boolean try_transition);
static sc_boolean Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station_react(Trash_carrier* handle, const sc_boolean try_transition);
static sc_boolean Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following_react(Trash_carrier* handle, const sc_boolean try_transition);
static sc_boolean Path_Finding_Region_Rotation_Region_react(Trash_carrier* handle, const sc_boolean try_transition);
static sc_boolean Path_Finding_Region_Rotation_Region_r1_Rest_react(Trash_carrier* handle, const sc_boolean try_transition);
static sc_boolean Path_Finding_Region_Rotation_Region_r1_Rotating_Left_react(Trash_carrier* handle, const sc_boolean try_transition);
static sc_boolean Path_Finding_Region_Rotation_Region_r1_Rotating_Right_react(Trash_carrier* handle, const sc_boolean try_transition);
static sc_boolean Path_Finding_Region_Rotation_Region_r1_Reset_Align_react(Trash_carrier* handle, const sc_boolean try_transition);
static void clearInEvents(Trash_carrier* handle);
static void clearOutEvents(Trash_carrier* handle);


void trash_carrier_init(Trash_carrier* handle)
{
	sc_integer i;
	
	for (i = 0; i < TRASH_CARRIER_MAX_ORTHOGONAL_STATES; ++i)
	{
		handle->stateConfVector[i] = Trash_carrier_last_state;
	}
	
	
	handle->stateConfVectorPosition = 0;
	
	clearInEvents(handle);
	clearOutEvents(handle);
	
	/* Default init sequence for statechart trash_carrier */
	handle->iface.inv_Kp = 2;
	handle->iface.inv_Kd = 1;
	handle->iface.error = 0;
	handle->iface.last_error = 0;
	handle->iface.turn_speed = 0;
	handle->iface.base_speed = 400;
	handle->iface.speed_left = 0;
	handle->iface.speed_right = 0;
	handle->iface.has_vec = bool_false;
	handle->iface.v_start_x = 0;
	handle->iface.v_start_y = 0;
	handle->iface.v_end_x = 0;
	handle->iface.v_end_y = 0;
	handle->iface.bin_full = bool_false;
	handle->iface.rotation = 0.0f;
	handle->iface.rotation_desired = 0.0f;
	handle->iface.rotation_diff = 0.0f;
	handle->iface.rotation_delta = 0.0f;
}

void trash_carrier_enter(Trash_carrier* handle)
{
	/* Default enter sequence for statechart trash_carrier */
	enseq_Path_Finding_Region_default(handle);
}

void trash_carrier_runCycle(Trash_carrier* handle)
{
	clearOutEvents(handle);
	for (handle->stateConfVectorPosition = 0;
		handle->stateConfVectorPosition < TRASH_CARRIER_MAX_ORTHOGONAL_STATES;
		handle->stateConfVectorPosition++)
		{
			
		switch (handle->stateConfVector[handle->stateConfVectorPosition])
		{
		case Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station:
		{
			Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station_react(handle, bool_true);
			break;
		}
		case Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following:
		{
			Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following_react(handle, bool_true);
			break;
		}
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rest:
		{
			Path_Finding_Region_Rotation_Region_r1_Rest_react(handle, bool_true);
			break;
		}
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rotating_Left:
		{
			Path_Finding_Region_Rotation_Region_r1_Rotating_Left_react(handle, bool_true);
			break;
		}
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rotating_Right:
		{
			Path_Finding_Region_Rotation_Region_r1_Rotating_Right_react(handle, bool_true);
			break;
		}
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Reset_Align:
		{
			Path_Finding_Region_Rotation_Region_r1_Reset_Align_react(handle, bool_true);
			break;
		}
		default:
			break;
		}
	}
	
	clearInEvents(handle);
}

void trash_carrier_exit(Trash_carrier* handle)
{
	/* Default exit sequence for statechart trash_carrier */
	exseq_Path_Finding_Region(handle);
}

sc_boolean trash_carrier_isActive(const Trash_carrier* handle)
{
	sc_boolean result = bool_false;
	sc_integer i;
	
	for(i = 0; i < TRASH_CARRIER_MAX_ORTHOGONAL_STATES; i++)
	{
		result = result || handle->stateConfVector[i] != Trash_carrier_last_state;
	}
	
	return result;
}

/* 
 * Always returns 'false' since this state machine can never become final.
 */
sc_boolean trash_carrier_isFinal(const Trash_carrier* handle)
{
(void)(handle);
return bool_false;

}

sc_boolean trash_carrier_isStateActive(const Trash_carrier* handle, Trash_carrierStates state)
{
	sc_boolean result = bool_false;
	switch (state)
	{
		case Trash_carrier_Path_Finding_Region_PathFindingRegion :
			result = (sc_boolean) (handle->stateConfVector[SCVI_TRASH_CARRIER_PATH_FINDING_REGION_PATHFINDINGREGION] >= Trash_carrier_Path_Finding_Region_PathFindingRegion
				&& handle->stateConfVector[SCVI_TRASH_CARRIER_PATH_FINDING_REGION_PATHFINDINGREGION] <= Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following);
			break;
		case Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station :
			result = (sc_boolean) (handle->stateConfVector[SCVI_TRASH_CARRIER_PATH_FINDING_REGION_PATHFINDINGREGION_PATH_FINDING_REGION_STATION] == Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station
			);
			break;
		case Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following :
			result = (sc_boolean) (handle->stateConfVector[SCVI_TRASH_CARRIER_PATH_FINDING_REGION_PATHFINDINGREGION_PATH_FINDING_REGION_FOLLOWING] == Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following
			);
			break;
		case Trash_carrier_Path_Finding_Region_Rotation_Region :
			result = (sc_boolean) (handle->stateConfVector[SCVI_TRASH_CARRIER_PATH_FINDING_REGION_ROTATION_REGION] >= Trash_carrier_Path_Finding_Region_Rotation_Region
				&& handle->stateConfVector[SCVI_TRASH_CARRIER_PATH_FINDING_REGION_ROTATION_REGION] <= Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Reset_Align);
			break;
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rest :
			result = (sc_boolean) (handle->stateConfVector[SCVI_TRASH_CARRIER_PATH_FINDING_REGION_ROTATION_REGION_R1_REST] == Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rest
			);
			break;
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rotating_Left :
			result = (sc_boolean) (handle->stateConfVector[SCVI_TRASH_CARRIER_PATH_FINDING_REGION_ROTATION_REGION_R1_ROTATING_LEFT] == Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rotating_Left
			);
			break;
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rotating_Right :
			result = (sc_boolean) (handle->stateConfVector[SCVI_TRASH_CARRIER_PATH_FINDING_REGION_ROTATION_REGION_R1_ROTATING_RIGHT] == Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rotating_Right
			);
			break;
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Reset_Align :
			result = (sc_boolean) (handle->stateConfVector[SCVI_TRASH_CARRIER_PATH_FINDING_REGION_ROTATION_REGION_R1_RESET_ALIGN] == Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Reset_Align
			);
			break;
		default:
			result = bool_false;
			break;
	}
	return result;
}

static void clearInEvents(Trash_carrier* handle)
{
}

static void clearOutEvents(Trash_carrier* handle)
{
}



int32_t trash_carrierIface_get_inv_Kp(const Trash_carrier* handle)
{
	return handle->iface.inv_Kp;
}
void trash_carrierIface_set_inv_Kp(Trash_carrier* handle, int32_t value)
{
	handle->iface.inv_Kp = value;
}
int32_t trash_carrierIface_get_inv_Kd(const Trash_carrier* handle)
{
	return handle->iface.inv_Kd;
}
void trash_carrierIface_set_inv_Kd(Trash_carrier* handle, int32_t value)
{
	handle->iface.inv_Kd = value;
}
int32_t trash_carrierIface_get_error(const Trash_carrier* handle)
{
	return handle->iface.error;
}
void trash_carrierIface_set_error(Trash_carrier* handle, int32_t value)
{
	handle->iface.error = value;
}
int32_t trash_carrierIface_get_last_error(const Trash_carrier* handle)
{
	return handle->iface.last_error;
}
void trash_carrierIface_set_last_error(Trash_carrier* handle, int32_t value)
{
	handle->iface.last_error = value;
}
int32_t trash_carrierIface_get_turn_speed(const Trash_carrier* handle)
{
	return handle->iface.turn_speed;
}
void trash_carrierIface_set_turn_speed(Trash_carrier* handle, int32_t value)
{
	handle->iface.turn_speed = value;
}
int16_t trash_carrierIface_get_base_speed(const Trash_carrier* handle)
{
	return handle->iface.base_speed;
}
void trash_carrierIface_set_base_speed(Trash_carrier* handle, int16_t value)
{
	handle->iface.base_speed = value;
}
int16_t trash_carrierIface_get_speed_left(const Trash_carrier* handle)
{
	return handle->iface.speed_left;
}
void trash_carrierIface_set_speed_left(Trash_carrier* handle, int16_t value)
{
	handle->iface.speed_left = value;
}
int16_t trash_carrierIface_get_speed_right(const Trash_carrier* handle)
{
	return handle->iface.speed_right;
}
void trash_carrierIface_set_speed_right(Trash_carrier* handle, int16_t value)
{
	handle->iface.speed_right = value;
}
sc_boolean trash_carrierIface_get_has_vec(const Trash_carrier* handle)
{
	return handle->iface.has_vec;
}
void trash_carrierIface_set_has_vec(Trash_carrier* handle, sc_boolean value)
{
	handle->iface.has_vec = value;
}
uint8_t trash_carrierIface_get_v_start_x(const Trash_carrier* handle)
{
	return handle->iface.v_start_x;
}
void trash_carrierIface_set_v_start_x(Trash_carrier* handle, uint8_t value)
{
	handle->iface.v_start_x = value;
}
uint8_t trash_carrierIface_get_v_start_y(const Trash_carrier* handle)
{
	return handle->iface.v_start_y;
}
void trash_carrierIface_set_v_start_y(Trash_carrier* handle, uint8_t value)
{
	handle->iface.v_start_y = value;
}
uint8_t trash_carrierIface_get_v_end_x(const Trash_carrier* handle)
{
	return handle->iface.v_end_x;
}
void trash_carrierIface_set_v_end_x(Trash_carrier* handle, uint8_t value)
{
	handle->iface.v_end_x = value;
}
uint8_t trash_carrierIface_get_v_end_y(const Trash_carrier* handle)
{
	return handle->iface.v_end_y;
}
void trash_carrierIface_set_v_end_y(Trash_carrier* handle, uint8_t value)
{
	handle->iface.v_end_y = value;
}
sc_boolean trash_carrierIface_get_bin_full(const Trash_carrier* handle)
{
	return handle->iface.bin_full;
}
void trash_carrierIface_set_bin_full(Trash_carrier* handle, sc_boolean value)
{
	handle->iface.bin_full = value;
}
float trash_carrierIface_get_rotation(const Trash_carrier* handle)
{
	return handle->iface.rotation;
}
void trash_carrierIface_set_rotation(Trash_carrier* handle, float value)
{
	handle->iface.rotation = value;
}
float trash_carrierIface_get_rotation_desired(const Trash_carrier* handle)
{
	return handle->iface.rotation_desired;
}
void trash_carrierIface_set_rotation_desired(Trash_carrier* handle, float value)
{
	handle->iface.rotation_desired = value;
}
float trash_carrierIface_get_rotation_diff(const Trash_carrier* handle)
{
	return handle->iface.rotation_diff;
}
void trash_carrierIface_set_rotation_diff(Trash_carrier* handle, float value)
{
	handle->iface.rotation_diff = value;
}
float trash_carrierIface_get_rotation_delta(const Trash_carrier* handle)
{
	return handle->iface.rotation_delta;
}
void trash_carrierIface_set_rotation_delta(Trash_carrier* handle, float value)
{
	handle->iface.rotation_delta = value;
}

/* implementations of all internal functions */

/* Entry action for state 'Station'. */
static void enact_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station(Trash_carrier* handle)
{
	/* Entry action for state 'Station'. */
	lcd_printf(0, "NO LINE");
}

/* Entry action for state 'Following'. */
static void enact_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following(Trash_carrier* handle)
{
	/* Entry action for state 'Following'. */
	lcd_printf(0, "FOLLOWING");
	handle->iface.speed_left = handle->iface.base_speed;
	handle->iface.speed_right = handle->iface.base_speed;
}

/* Entry action for state 'Rest'. */
static void enact_Path_Finding_Region_Rotation_Region_r1_Rest(Trash_carrier* handle)
{
	/* Entry action for state 'Rest'. */
	lcd_printf(0, "Resting");
	handle->iface.rotation_diff = 0;
}

/* Entry action for state 'Rotating_Left'. */
static void enact_Path_Finding_Region_Rotation_Region_r1_Rotating_Left(Trash_carrier* handle)
{
	/* Entry action for state 'Rotating_Left'. */
	lcd_printf(0, "Rotating_Left");
	lcd_printf(1, "Rot left: %f", handle->iface.rotation_diff);
	handle->iface.rotation_delta = 0;
	start_gyro();
	stop_kobuki();
}

/* Entry action for state 'Rotating_Right'. */
static void enact_Path_Finding_Region_Rotation_Region_r1_Rotating_Right(Trash_carrier* handle)
{
	/* Entry action for state 'Rotating_Right'. */
	lcd_printf(0, "Rotating_Right");
	lcd_printf(1, "Rot right: %f", handle->iface.rotation_diff);
	handle->iface.rotation_delta = 0;
	start_gyro();
	stop_kobuki();
}

/* Entry action for state 'Reset_Align'. */
static void enact_Path_Finding_Region_Rotation_Region_r1_Reset_Align(Trash_carrier* handle)
{
	/* Entry action for state 'Reset_Align'. */
	lcd_printf(0, "Aligning");
}

/* Exit action for state 'Following'. */
static void exact_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following(Trash_carrier* handle)
{
	/* Exit action for state 'Following'. */
	lcd_printf(1, "           ");
	stop_kobuki();
}

/* Exit action for state 'Rest'. */
static void exact_Path_Finding_Region_Rotation_Region_r1_Rest(Trash_carrier* handle)
{
	/* Exit action for state 'Rest'. */
	stop_kobuki();
}

/* Exit action for state 'Rotating_Left'. */
static void exact_Path_Finding_Region_Rotation_Region_r1_Rotating_Left(Trash_carrier* handle)
{
	/* Exit action for state 'Rotating_Left'. */
	stop_gyro();
	handle->iface.rotation = handle->iface.rotation_desired;
	stop_kobuki();
}

/* Exit action for state 'Rotating_Right'. */
static void exact_Path_Finding_Region_Rotation_Region_r1_Rotating_Right(Trash_carrier* handle)
{
	/* Exit action for state 'Rotating_Right'. */
	stop_gyro();
	handle->iface.rotation = handle->iface.rotation_desired;
	stop_kobuki();
}

/* Exit action for state 'Reset_Align'. */
static void exact_Path_Finding_Region_Rotation_Region_r1_Reset_Align(Trash_carrier* handle)
{
	/* Exit action for state 'Reset_Align'. */
	stop_kobuki();
}

/* 'default' enter sequence for state Station */
static void enseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station_default(Trash_carrier* handle)
{
	/* 'default' enter sequence for state Station */
	enact_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station(handle);
	handle->stateConfVector[0] = Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Following */
static void enseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following_default(Trash_carrier* handle)
{
	/* 'default' enter sequence for state Following */
	enact_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following(handle);
	handle->stateConfVector[0] = Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Rotation Region */
static void enseq_Path_Finding_Region_Rotation_Region_default(Trash_carrier* handle)
{
	/* 'default' enter sequence for state Rotation Region */
	enseq_Path_Finding_Region_Rotation_Region_r1_default(handle);
}

/* 'default' enter sequence for state Rest */
static void enseq_Path_Finding_Region_Rotation_Region_r1_Rest_default(Trash_carrier* handle)
{
	/* 'default' enter sequence for state Rest */
	enact_Path_Finding_Region_Rotation_Region_r1_Rest(handle);
	handle->stateConfVector[0] = Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rest;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Rotating_Left */
static void enseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Left_default(Trash_carrier* handle)
{
	/* 'default' enter sequence for state Rotating_Left */
	enact_Path_Finding_Region_Rotation_Region_r1_Rotating_Left(handle);
	handle->stateConfVector[0] = Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rotating_Left;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Rotating_Right */
static void enseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Right_default(Trash_carrier* handle)
{
	/* 'default' enter sequence for state Rotating_Right */
	enact_Path_Finding_Region_Rotation_Region_r1_Rotating_Right(handle);
	handle->stateConfVector[0] = Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rotating_Right;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Reset_Align */
static void enseq_Path_Finding_Region_Rotation_Region_r1_Reset_Align_default(Trash_carrier* handle)
{
	/* 'default' enter sequence for state Reset_Align */
	enact_Path_Finding_Region_Rotation_Region_r1_Reset_Align(handle);
	handle->stateConfVector[0] = Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Reset_Align;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for region Path Finding Region */
static void enseq_Path_Finding_Region_default(Trash_carrier* handle)
{
	/* 'default' enter sequence for region Path Finding Region */
	react_Path_Finding_Region__entry_Default(handle);
}

/* 'default' enter sequence for region r1 */
static void enseq_Path_Finding_Region_Rotation_Region_r1_default(Trash_carrier* handle)
{
	/* 'default' enter sequence for region r1 */
	react_Path_Finding_Region_Rotation_Region_r1__entry_Default(handle);
}

/* Default exit sequence for state Station */
static void exseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station(Trash_carrier* handle)
{
	/* Default exit sequence for state Station */
	handle->stateConfVector[0] = Trash_carrier_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for state Following */
static void exseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following(Trash_carrier* handle)
{
	/* Default exit sequence for state Following */
	handle->stateConfVector[0] = Trash_carrier_last_state;
	handle->stateConfVectorPosition = 0;
	exact_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following(handle);
}

/* Default exit sequence for state Rotation Region */
static void exseq_Path_Finding_Region_Rotation_Region(Trash_carrier* handle)
{
	/* Default exit sequence for state Rotation Region */
	exseq_Path_Finding_Region_Rotation_Region_r1(handle);
}

/* Default exit sequence for state Rest */
static void exseq_Path_Finding_Region_Rotation_Region_r1_Rest(Trash_carrier* handle)
{
	/* Default exit sequence for state Rest */
	handle->stateConfVector[0] = Trash_carrier_last_state;
	handle->stateConfVectorPosition = 0;
	exact_Path_Finding_Region_Rotation_Region_r1_Rest(handle);
}

/* Default exit sequence for state Rotating_Left */
static void exseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Left(Trash_carrier* handle)
{
	/* Default exit sequence for state Rotating_Left */
	handle->stateConfVector[0] = Trash_carrier_last_state;
	handle->stateConfVectorPosition = 0;
	exact_Path_Finding_Region_Rotation_Region_r1_Rotating_Left(handle);
}

/* Default exit sequence for state Rotating_Right */
static void exseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Right(Trash_carrier* handle)
{
	/* Default exit sequence for state Rotating_Right */
	handle->stateConfVector[0] = Trash_carrier_last_state;
	handle->stateConfVectorPosition = 0;
	exact_Path_Finding_Region_Rotation_Region_r1_Rotating_Right(handle);
}

/* Default exit sequence for state Reset_Align */
static void exseq_Path_Finding_Region_Rotation_Region_r1_Reset_Align(Trash_carrier* handle)
{
	/* Default exit sequence for state Reset_Align */
	handle->stateConfVector[0] = Trash_carrier_last_state;
	handle->stateConfVectorPosition = 0;
	exact_Path_Finding_Region_Rotation_Region_r1_Reset_Align(handle);
}

/* Default exit sequence for region Path Finding Region */
static void exseq_Path_Finding_Region(Trash_carrier* handle)
{
	/* Default exit sequence for region Path Finding Region */
	/* Handle exit of all possible states (of trash_carrier.Path_Finding_Region) at position 0... */
	switch(handle->stateConfVector[ 0 ])
	{
		case Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station :
		{
			exseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station(handle);
			break;
		}
		case Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following :
		{
			exseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following(handle);
			break;
		}
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rest :
		{
			exseq_Path_Finding_Region_Rotation_Region_r1_Rest(handle);
			break;
		}
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rotating_Left :
		{
			exseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Left(handle);
			break;
		}
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rotating_Right :
		{
			exseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Right(handle);
			break;
		}
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Reset_Align :
		{
			exseq_Path_Finding_Region_Rotation_Region_r1_Reset_Align(handle);
			break;
		}
		default: break;
	}
}

/* Default exit sequence for region Path Finding Region */
static void exseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region(Trash_carrier* handle)
{
	/* Default exit sequence for region Path Finding Region */
	/* Handle exit of all possible states (of trash_carrier.Path_Finding_Region.PathFindingRegion.Path_Finding_Region) at position 0... */
	switch(handle->stateConfVector[ 0 ])
	{
		case Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station :
		{
			exseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station(handle);
			break;
		}
		case Trash_carrier_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following :
		{
			exseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following(handle);
			break;
		}
		default: break;
	}
}

/* Default exit sequence for region r1 */
static void exseq_Path_Finding_Region_Rotation_Region_r1(Trash_carrier* handle)
{
	/* Default exit sequence for region r1 */
	/* Handle exit of all possible states (of trash_carrier.Path_Finding_Region.Rotation_Region.r1) at position 0... */
	switch(handle->stateConfVector[ 0 ])
	{
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rest :
		{
			exseq_Path_Finding_Region_Rotation_Region_r1_Rest(handle);
			break;
		}
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rotating_Left :
		{
			exseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Left(handle);
			break;
		}
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Rotating_Right :
		{
			exseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Right(handle);
			break;
		}
		case Trash_carrier_Path_Finding_Region_Rotation_Region_r1_Reset_Align :
		{
			exseq_Path_Finding_Region_Rotation_Region_r1_Reset_Align(handle);
			break;
		}
		default: break;
	}
}

/* Default react sequence for initial entry  */
static void react_Path_Finding_Region_Rotation_Region_r1__entry_Default(Trash_carrier* handle)
{
	/* Default react sequence for initial entry  */
	enseq_Path_Finding_Region_Rotation_Region_r1_Rest_default(handle);
}

/* Default react sequence for initial entry  */
static void react_Path_Finding_Region__entry_Default(Trash_carrier* handle)
{
	/* Default react sequence for initial entry  */
	enseq_Path_Finding_Region_Rotation_Region_default(handle);
}

static sc_boolean react(Trash_carrier* handle) {
	/* State machine reactions. */
	return bool_false;
}

static sc_boolean Path_Finding_Region_PathFindingRegion_react(Trash_carrier* handle, const sc_boolean try_transition) {
	/* The reactions of state PathFindingRegion. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if ((react(handle)) == (bool_false))
		{ 
			did_transition = bool_false;
		} 
	} 
	return did_transition;
}

static sc_boolean Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station_react(Trash_carrier* handle, const sc_boolean try_transition) {
	/* The reactions of state Station. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if ((Path_Finding_Region_PathFindingRegion_react(handle, try_transition)) == (bool_false))
		{ 
			if (handle->iface.has_vec == bool_true)
			{ 
				exseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station(handle);
				enseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following_default(handle);
			}  else
			{
				did_transition = bool_false;
			}
		} 
	} 
	if ((did_transition) == (bool_false))
	{ 
		stop_kobuki();
		handle->iface.has_vec = is_vec_detected();
	} 
	return did_transition;
}

static sc_boolean Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following_react(Trash_carrier* handle, const sc_boolean try_transition) {
	/* The reactions of state Following. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if ((Path_Finding_Region_PathFindingRegion_react(handle, try_transition)) == (bool_false))
		{ 
			if (handle->iface.has_vec == bool_false)
			{ 
				exseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following(handle);
				enseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Station_default(handle);
			}  else
			{
				did_transition = bool_false;
			}
		} 
	} 
	if ((did_transition) == (bool_false))
	{ 
		handle->iface.has_vec = is_vec_detected();
		handle->iface.v_start_x = vec_start_x();
		handle->iface.v_start_y = vec_start_y();
		handle->iface.v_end_x = vec_end_x();
		handle->iface.v_end_y = vec_end_y();
		lcd_printf(0, "FOLLOWING %d %d", handle->iface.v_end_x, handle->iface.v_end_y);
		handle->iface.error = ((handle->iface.v_end_x * 1000) - (127 * 1000));
		handle->iface.turn_speed = (((handle->iface.turn_speed * 400) / 1000) + (((((handle->iface.error / handle->iface.inv_Kp) + (((handle->iface.error - handle->iface.last_error)) / handle->iface.inv_Kd))) * 600) / 1000));
		handle->iface.last_error = handle->iface.error;
		handle->iface.speed_left = (handle->iface.base_speed + (handle->iface.turn_speed / 1000));
		handle->iface.speed_right = (handle->iface.base_speed - (handle->iface.turn_speed / 1000));
		lcd_printf(1, "SPEED %d %d", handle->iface.speed_left, handle->iface.speed_right);
		drive_kobuki(handle->iface.speed_left, handle->iface.speed_right);
	} 
	return did_transition;
}

static sc_boolean Path_Finding_Region_Rotation_Region_react(Trash_carrier* handle, const sc_boolean try_transition) {
	/* The reactions of state Rotation Region. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if ((react(handle)) == (bool_false))
		{ 
			did_transition = bool_false;
		} 
	} 
	return did_transition;
}

static sc_boolean Path_Finding_Region_Rotation_Region_r1_Rest_react(Trash_carrier* handle, const sc_boolean try_transition) {
	/* The reactions of state Rest. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if ((Path_Finding_Region_Rotation_Region_react(handle, try_transition)) == (bool_false))
		{ 
			if (((handle->iface.rotation_diff) > (5.0f)) && (handle->iface.bin_full == bool_false))
			{ 
				exseq_Path_Finding_Region_Rotation_Region_r1_Rest(handle);
				enseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Left_default(handle);
			}  else
			{
				if (((handle->iface.rotation_diff) < (-5.0f)) && (handle->iface.bin_full == bool_false))
				{ 
					exseq_Path_Finding_Region_Rotation_Region_r1_Rest(handle);
					enseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Right_default(handle);
				}  else
				{
					if (((((((handle->iface.rotation) == (0)) && ((handle->iface.rotation_diff) == (0))) && (handle->iface.has_vec == bool_false)) && ((((handle->iface.v_end_x) > (157)) || ((handle->iface.v_end_x) < (107))) == bool_true)) == bool_true) || ((handle->iface.bin_full == bool_true) && (((handle->iface.has_vec == bool_false) || ((((handle->iface.v_end_x) > (157)) || ((handle->iface.v_end_x) < (107))) == bool_true)) == bool_true)))
					{ 
						exseq_Path_Finding_Region_Rotation_Region_r1_Rest(handle);
						enseq_Path_Finding_Region_Rotation_Region_r1_Reset_Align_default(handle);
					}  else
					{
						if (((handle->iface.bin_full == bool_true) && (handle->iface.has_vec == bool_true)) && ((((handle->iface.v_end_x) < (157)) && ((handle->iface.v_end_x) > (107))) == bool_true))
						{ 
							exseq_Path_Finding_Region_Rotation_Region(handle);
							enseq_Path_Finding_Region_PathFindingRegion_Path_Finding_Region_Following_default(handle);
						}  else
						{
							did_transition = bool_false;
						}
					}
				}
			}
		} 
	} 
	if ((did_transition) == (bool_false))
	{ 
		handle->iface.rotation_desired = get_rotate();
		handle->iface.rotation_diff = normalize_rot(handle->iface.rotation_desired, handle->iface.rotation);
		handle->iface.bin_full = is_bin_full();
		handle->iface.has_vec = is_vec_detected();
		handle->iface.v_start_x = vec_start_x();
		handle->iface.v_start_y = vec_start_y();
		handle->iface.v_end_x = vec_end_x();
		handle->iface.v_end_y = vec_end_y();
		stop_kobuki();
	} 
	return did_transition;
}

static sc_boolean Path_Finding_Region_Rotation_Region_r1_Rotating_Left_react(Trash_carrier* handle, const sc_boolean try_transition) {
	/* The reactions of state Rotating_Left. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if ((Path_Finding_Region_Rotation_Region_react(handle, try_transition)) == (bool_false))
		{ 
			if ((handle->iface.rotation_delta) > (handle->iface.rotation_diff))
			{ 
				exseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Left(handle);
				enseq_Path_Finding_Region_Rotation_Region_r1_Rest_default(handle);
			}  else
			{
				did_transition = bool_false;
			}
		} 
	} 
	if ((did_transition) == (bool_false))
	{ 
		handle->iface.rotation_delta = read_gyro();
		lcd_printf(1, "Rot %f", handle->iface.rotation_delta);
		drive_kobuki(-150, 150);
	} 
	return did_transition;
}

static sc_boolean Path_Finding_Region_Rotation_Region_r1_Rotating_Right_react(Trash_carrier* handle, const sc_boolean try_transition) {
	/* The reactions of state Rotating_Right. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if ((Path_Finding_Region_Rotation_Region_react(handle, try_transition)) == (bool_false))
		{ 
			if ((handle->iface.rotation_delta) < (handle->iface.rotation_diff))
			{ 
				exseq_Path_Finding_Region_Rotation_Region_r1_Rotating_Right(handle);
				enseq_Path_Finding_Region_Rotation_Region_r1_Rest_default(handle);
			}  else
			{
				did_transition = bool_false;
			}
		} 
	} 
	if ((did_transition) == (bool_false))
	{ 
		handle->iface.rotation_delta = read_gyro();
		lcd_printf(1, "Rot %f", handle->iface.rotation_delta);
		drive_kobuki(150, -150);
	} 
	return did_transition;
}

static sc_boolean Path_Finding_Region_Rotation_Region_r1_Reset_Align_react(Trash_carrier* handle, const sc_boolean try_transition) {
	/* The reactions of state Reset_Align. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if ((Path_Finding_Region_Rotation_Region_react(handle, try_transition)) == (bool_false))
		{ 
			if ((handle->iface.has_vec == bool_true) && ((((handle->iface.v_end_x) < (157)) && ((handle->iface.v_end_x) > (107))) == bool_true))
			{ 
				exseq_Path_Finding_Region_Rotation_Region_r1_Reset_Align(handle);
				enseq_Path_Finding_Region_Rotation_Region_r1_Rest_default(handle);
			}  else
			{
				did_transition = bool_false;
			}
		} 
	} 
	if ((did_transition) == (bool_false))
	{ 
		handle->iface.has_vec = is_vec_detected();
		handle->iface.v_start_x = vec_start_x();
		handle->iface.v_start_y = vec_start_y();
		handle->iface.v_end_x = vec_end_x();
		handle->iface.v_end_y = vec_end_y();
		lcd_printf(1, "Line %d", handle->iface.has_vec ? handle->iface.v_end_x : -1);
		drive_kobuki(100, -100);
	} 
	return did_transition;
}


