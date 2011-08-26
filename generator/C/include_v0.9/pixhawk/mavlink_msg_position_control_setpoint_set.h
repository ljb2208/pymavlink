// MESSAGE POSITION_CONTROL_SETPOINT_SET PACKING

#define MAVLINK_MSG_ID_POSITION_CONTROL_SETPOINT_SET 159

typedef struct __mavlink_position_control_setpoint_set_t
{
 uint8_t target_system; ///< System ID
 uint8_t target_component; ///< Component ID
 uint16_t id; ///< ID of waypoint, 0 for plain position
 float x; ///< x position
 float y; ///< y position
 float z; ///< z position
 float yaw; ///< yaw orientation in radians, 0 = NORTH
} mavlink_position_control_setpoint_set_t;

#define MAVLINK_MESSAGE_INFO_POSITION_CONTROL_SETPOINT_SET { \
	"POSITION_CONTROL_SETPOINT_SET", \
	7, \
	{  { "target_system", MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_position_control_setpoint_set_t, target_system) }, \
         { "target_component", MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_position_control_setpoint_set_t, target_component) }, \
         { "id", MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_position_control_setpoint_set_t, id) }, \
         { "x", MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_position_control_setpoint_set_t, x) }, \
         { "y", MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_position_control_setpoint_set_t, y) }, \
         { "z", MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_position_control_setpoint_set_t, z) }, \
         { "yaw", MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_position_control_setpoint_set_t, yaw) }, \
         } \
}


/**
 * @brief Pack a position_control_setpoint_set message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param id ID of waypoint, 0 for plain position
 * @param x x position
 * @param y y position
 * @param z z position
 * @param yaw yaw orientation in radians, 0 = NORTH
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_position_control_setpoint_set_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t target_system, uint8_t target_component, uint16_t id, float x, float y, float z, float yaw)
{
	msg->msgid = MAVLINK_MSG_ID_POSITION_CONTROL_SETPOINT_SET;

	put_uint8_t_by_index(target_system, 0,  MAVLINK_PAYLOAD(msg)); // System ID
	put_uint8_t_by_index(target_component, 1,  MAVLINK_PAYLOAD(msg)); // Component ID
	put_uint16_t_by_index(id, 2,  MAVLINK_PAYLOAD(msg)); // ID of waypoint, 0 for plain position
	put_float_by_index(x, 4,  MAVLINK_PAYLOAD(msg)); // x position
	put_float_by_index(y, 8,  MAVLINK_PAYLOAD(msg)); // y position
	put_float_by_index(z, 12,  MAVLINK_PAYLOAD(msg)); // z position
	put_float_by_index(yaw, 16,  MAVLINK_PAYLOAD(msg)); // yaw orientation in radians, 0 = NORTH

	return mavlink_finalize_message(msg, system_id, component_id, 20, 166);
}

/**
 * @brief Pack a position_control_setpoint_set message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System ID
 * @param target_component Component ID
 * @param id ID of waypoint, 0 for plain position
 * @param x x position
 * @param y y position
 * @param z z position
 * @param yaw yaw orientation in radians, 0 = NORTH
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_position_control_setpoint_set_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t target_system,uint8_t target_component,uint16_t id,float x,float y,float z,float yaw)
{
	msg->msgid = MAVLINK_MSG_ID_POSITION_CONTROL_SETPOINT_SET;

	put_uint8_t_by_index(target_system, 0,  MAVLINK_PAYLOAD(msg)); // System ID
	put_uint8_t_by_index(target_component, 1,  MAVLINK_PAYLOAD(msg)); // Component ID
	put_uint16_t_by_index(id, 2,  MAVLINK_PAYLOAD(msg)); // ID of waypoint, 0 for plain position
	put_float_by_index(x, 4,  MAVLINK_PAYLOAD(msg)); // x position
	put_float_by_index(y, 8,  MAVLINK_PAYLOAD(msg)); // y position
	put_float_by_index(z, 12,  MAVLINK_PAYLOAD(msg)); // z position
	put_float_by_index(yaw, 16,  MAVLINK_PAYLOAD(msg)); // yaw orientation in radians, 0 = NORTH

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 20, 166);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a position_control_setpoint_set message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System ID
 * @param target_component Component ID
 * @param id ID of waypoint, 0 for plain position
 * @param x x position
 * @param y y position
 * @param z z position
 * @param yaw yaw orientation in radians, 0 = NORTH
 */
static inline void mavlink_msg_position_control_setpoint_set_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           uint8_t target_system,uint8_t target_component,uint16_t id,float x,float y,float z,float yaw)
{
	msg->msgid = MAVLINK_MSG_ID_POSITION_CONTROL_SETPOINT_SET;

	put_uint8_t_by_index(target_system, 0,  MAVLINK_PAYLOAD(msg)); // System ID
	put_uint8_t_by_index(target_component, 1,  MAVLINK_PAYLOAD(msg)); // Component ID
	put_uint16_t_by_index(id, 2,  MAVLINK_PAYLOAD(msg)); // ID of waypoint, 0 for plain position
	put_float_by_index(x, 4,  MAVLINK_PAYLOAD(msg)); // x position
	put_float_by_index(y, 8,  MAVLINK_PAYLOAD(msg)); // y position
	put_float_by_index(z, 12,  MAVLINK_PAYLOAD(msg)); // z position
	put_float_by_index(yaw, 16,  MAVLINK_PAYLOAD(msg)); // yaw orientation in radians, 0 = NORTH

	mavlink_finalize_message_chan_send(msg, chan, 20, 166);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a position_control_setpoint_set struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param position_control_setpoint_set C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_position_control_setpoint_set_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_position_control_setpoint_set_t* position_control_setpoint_set)
{
	return mavlink_msg_position_control_setpoint_set_pack(system_id, component_id, msg, position_control_setpoint_set->target_system, position_control_setpoint_set->target_component, position_control_setpoint_set->id, position_control_setpoint_set->x, position_control_setpoint_set->y, position_control_setpoint_set->z, position_control_setpoint_set->yaw);
}

/**
 * @brief Send a position_control_setpoint_set message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param id ID of waypoint, 0 for plain position
 * @param x x position
 * @param y y position
 * @param z z position
 * @param yaw yaw orientation in radians, 0 = NORTH
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_position_control_setpoint_set_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint16_t id, float x, float y, float z, float yaw)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 20);
	mavlink_msg_position_control_setpoint_set_pack_chan_send(chan, msg, target_system, target_component, id, x, y, z, yaw);
}

#endif

// MESSAGE POSITION_CONTROL_SETPOINT_SET UNPACKING


/**
 * @brief Get field target_system from position_control_setpoint_set message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_position_control_setpoint_set_get_target_system(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from position_control_setpoint_set message
 *
 * @return Component ID
 */
static inline uint8_t mavlink_msg_position_control_setpoint_set_get_target_component(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field id from position_control_setpoint_set message
 *
 * @return ID of waypoint, 0 for plain position
 */
static inline uint16_t mavlink_msg_position_control_setpoint_set_get_id(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field x from position_control_setpoint_set message
 *
 * @return x position
 */
static inline float mavlink_msg_position_control_setpoint_set_get_x(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  4);
}

/**
 * @brief Get field y from position_control_setpoint_set message
 *
 * @return y position
 */
static inline float mavlink_msg_position_control_setpoint_set_get_y(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  8);
}

/**
 * @brief Get field z from position_control_setpoint_set message
 *
 * @return z position
 */
static inline float mavlink_msg_position_control_setpoint_set_get_z(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  12);
}

/**
 * @brief Get field yaw from position_control_setpoint_set message
 *
 * @return yaw orientation in radians, 0 = NORTH
 */
static inline float mavlink_msg_position_control_setpoint_set_get_yaw(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  16);
}

/**
 * @brief Decode a position_control_setpoint_set message into a struct
 *
 * @param msg The message to decode
 * @param position_control_setpoint_set C-struct to decode the message contents into
 */
static inline void mavlink_msg_position_control_setpoint_set_decode(const mavlink_message_t* msg, mavlink_position_control_setpoint_set_t* position_control_setpoint_set)
{
#if MAVLINK_NEED_BYTE_SWAP
	position_control_setpoint_set->target_system = mavlink_msg_position_control_setpoint_set_get_target_system(msg);
	position_control_setpoint_set->target_component = mavlink_msg_position_control_setpoint_set_get_target_component(msg);
	position_control_setpoint_set->id = mavlink_msg_position_control_setpoint_set_get_id(msg);
	position_control_setpoint_set->x = mavlink_msg_position_control_setpoint_set_get_x(msg);
	position_control_setpoint_set->y = mavlink_msg_position_control_setpoint_set_get_y(msg);
	position_control_setpoint_set->z = mavlink_msg_position_control_setpoint_set_get_z(msg);
	position_control_setpoint_set->yaw = mavlink_msg_position_control_setpoint_set_get_yaw(msg);
#else
	memcpy(position_control_setpoint_set, MAVLINK_PAYLOAD(msg), 20);
#endif
}
