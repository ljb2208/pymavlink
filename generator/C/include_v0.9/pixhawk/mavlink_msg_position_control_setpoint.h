// MESSAGE POSITION_CONTROL_SETPOINT PACKING

#define MAVLINK_MSG_ID_POSITION_CONTROL_SETPOINT 170

typedef struct __mavlink_position_control_setpoint_t
{
 uint16_t id; ///< ID of waypoint, 0 for plain position
 float x; ///< x position
 float y; ///< y position
 float z; ///< z position
 float yaw; ///< yaw orientation in radians, 0 = NORTH
} mavlink_position_control_setpoint_t;

#define MAVLINK_MESSAGE_INFO_POSITION_CONTROL_SETPOINT { \
	"POSITION_CONTROL_SETPOINT", \
	5, \
	{  { "id", MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_position_control_setpoint_t, id) }, \
         { "x", MAVLINK_TYPE_FLOAT, 0, 2, offsetof(mavlink_position_control_setpoint_t, x) }, \
         { "y", MAVLINK_TYPE_FLOAT, 0, 6, offsetof(mavlink_position_control_setpoint_t, y) }, \
         { "z", MAVLINK_TYPE_FLOAT, 0, 10, offsetof(mavlink_position_control_setpoint_t, z) }, \
         { "yaw", MAVLINK_TYPE_FLOAT, 0, 14, offsetof(mavlink_position_control_setpoint_t, yaw) }, \
         } \
}


/**
 * @brief Pack a position_control_setpoint message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id ID of waypoint, 0 for plain position
 * @param x x position
 * @param y y position
 * @param z z position
 * @param yaw yaw orientation in radians, 0 = NORTH
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_position_control_setpoint_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t id, float x, float y, float z, float yaw)
{
	msg->msgid = MAVLINK_MSG_ID_POSITION_CONTROL_SETPOINT;

	put_uint16_t_by_index(id, 0,  MAVLINK_PAYLOAD(msg)); // ID of waypoint, 0 for plain position
	put_float_by_index(x, 2,  MAVLINK_PAYLOAD(msg)); // x position
	put_float_by_index(y, 6,  MAVLINK_PAYLOAD(msg)); // y position
	put_float_by_index(z, 10,  MAVLINK_PAYLOAD(msg)); // z position
	put_float_by_index(yaw, 14,  MAVLINK_PAYLOAD(msg)); // yaw orientation in radians, 0 = NORTH

	return mavlink_finalize_message(msg, system_id, component_id, 18, 72);
}

/**
 * @brief Pack a position_control_setpoint message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param id ID of waypoint, 0 for plain position
 * @param x x position
 * @param y y position
 * @param z z position
 * @param yaw yaw orientation in radians, 0 = NORTH
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_position_control_setpoint_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t id,float x,float y,float z,float yaw)
{
	msg->msgid = MAVLINK_MSG_ID_POSITION_CONTROL_SETPOINT;

	put_uint16_t_by_index(id, 0,  MAVLINK_PAYLOAD(msg)); // ID of waypoint, 0 for plain position
	put_float_by_index(x, 2,  MAVLINK_PAYLOAD(msg)); // x position
	put_float_by_index(y, 6,  MAVLINK_PAYLOAD(msg)); // y position
	put_float_by_index(z, 10,  MAVLINK_PAYLOAD(msg)); // z position
	put_float_by_index(yaw, 14,  MAVLINK_PAYLOAD(msg)); // yaw orientation in radians, 0 = NORTH

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 18, 72);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a position_control_setpoint message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param id ID of waypoint, 0 for plain position
 * @param x x position
 * @param y y position
 * @param z z position
 * @param yaw yaw orientation in radians, 0 = NORTH
 */
static inline void mavlink_msg_position_control_setpoint_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           uint16_t id,float x,float y,float z,float yaw)
{
	msg->msgid = MAVLINK_MSG_ID_POSITION_CONTROL_SETPOINT;

	put_uint16_t_by_index(id, 0,  MAVLINK_PAYLOAD(msg)); // ID of waypoint, 0 for plain position
	put_float_by_index(x, 2,  MAVLINK_PAYLOAD(msg)); // x position
	put_float_by_index(y, 6,  MAVLINK_PAYLOAD(msg)); // y position
	put_float_by_index(z, 10,  MAVLINK_PAYLOAD(msg)); // z position
	put_float_by_index(yaw, 14,  MAVLINK_PAYLOAD(msg)); // yaw orientation in radians, 0 = NORTH

	mavlink_finalize_message_chan_send(msg, chan, 18, 72);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a position_control_setpoint struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param position_control_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_position_control_setpoint_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_position_control_setpoint_t* position_control_setpoint)
{
	return mavlink_msg_position_control_setpoint_pack(system_id, component_id, msg, position_control_setpoint->id, position_control_setpoint->x, position_control_setpoint->y, position_control_setpoint->z, position_control_setpoint->yaw);
}

/**
 * @brief Send a position_control_setpoint message
 * @param chan MAVLink channel to send the message
 *
 * @param id ID of waypoint, 0 for plain position
 * @param x x position
 * @param y y position
 * @param z z position
 * @param yaw yaw orientation in radians, 0 = NORTH
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_position_control_setpoint_send(mavlink_channel_t chan, uint16_t id, float x, float y, float z, float yaw)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 18);
	mavlink_msg_position_control_setpoint_pack_chan_send(chan, msg, id, x, y, z, yaw);
}

#endif

// MESSAGE POSITION_CONTROL_SETPOINT UNPACKING


/**
 * @brief Get field id from position_control_setpoint message
 *
 * @return ID of waypoint, 0 for plain position
 */
static inline uint16_t mavlink_msg_position_control_setpoint_get_id(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field x from position_control_setpoint message
 *
 * @return x position
 */
static inline float mavlink_msg_position_control_setpoint_get_x(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  2);
}

/**
 * @brief Get field y from position_control_setpoint message
 *
 * @return y position
 */
static inline float mavlink_msg_position_control_setpoint_get_y(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  6);
}

/**
 * @brief Get field z from position_control_setpoint message
 *
 * @return z position
 */
static inline float mavlink_msg_position_control_setpoint_get_z(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  10);
}

/**
 * @brief Get field yaw from position_control_setpoint message
 *
 * @return yaw orientation in radians, 0 = NORTH
 */
static inline float mavlink_msg_position_control_setpoint_get_yaw(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  14);
}

/**
 * @brief Decode a position_control_setpoint message into a struct
 *
 * @param msg The message to decode
 * @param position_control_setpoint C-struct to decode the message contents into
 */
static inline void mavlink_msg_position_control_setpoint_decode(const mavlink_message_t* msg, mavlink_position_control_setpoint_t* position_control_setpoint)
{
#if MAVLINK_NEED_BYTE_SWAP
	position_control_setpoint->id = mavlink_msg_position_control_setpoint_get_id(msg);
	position_control_setpoint->x = mavlink_msg_position_control_setpoint_get_x(msg);
	position_control_setpoint->y = mavlink_msg_position_control_setpoint_get_y(msg);
	position_control_setpoint->z = mavlink_msg_position_control_setpoint_get_z(msg);
	position_control_setpoint->yaw = mavlink_msg_position_control_setpoint_get_yaw(msg);
#else
	memcpy(position_control_setpoint, MAVLINK_PAYLOAD(msg), 18);
#endif
}
