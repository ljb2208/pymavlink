// MESSAGE GLOBAL_POSITION_SETPOINT_INT PACKING

#define MAVLINK_MSG_ID_GLOBAL_POSITION_SETPOINT_INT 52

typedef struct __mavlink_global_position_setpoint_int_t
{
 int32_t latitude; ///< WGS84 Latitude position in degrees * 1E7
 int32_t longitude; ///< WGS84 Longitude position in degrees * 1E7
 int32_t altitude; ///< WGS84 Altitude in meters * 1000 (positive for up)
 int16_t yaw; ///< Desired yaw angle in degrees * 100
} mavlink_global_position_setpoint_int_t;

#define MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_SETPOINT_INT { \
	"GLOBAL_POSITION_SETPOINT_INT", \
	4, \
	{  { "latitude", MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_global_position_setpoint_int_t, latitude) }, \
         { "longitude", MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_global_position_setpoint_int_t, longitude) }, \
         { "altitude", MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_global_position_setpoint_int_t, altitude) }, \
         { "yaw", MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_global_position_setpoint_int_t, yaw) }, \
         } \
}


/**
 * @brief Pack a global_position_setpoint_int message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param latitude WGS84 Latitude position in degrees * 1E7
 * @param longitude WGS84 Longitude position in degrees * 1E7
 * @param altitude WGS84 Altitude in meters * 1000 (positive for up)
 * @param yaw Desired yaw angle in degrees * 100
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_global_position_setpoint_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int32_t latitude, int32_t longitude, int32_t altitude, int16_t yaw)
{
	msg->msgid = MAVLINK_MSG_ID_GLOBAL_POSITION_SETPOINT_INT;

	put_int32_t_by_index(latitude, 0,  MAVLINK_PAYLOAD(msg)); // WGS84 Latitude position in degrees * 1E7
	put_int32_t_by_index(longitude, 4,  MAVLINK_PAYLOAD(msg)); // WGS84 Longitude position in degrees * 1E7
	put_int32_t_by_index(altitude, 8,  MAVLINK_PAYLOAD(msg)); // WGS84 Altitude in meters * 1000 (positive for up)
	put_int16_t_by_index(yaw, 12,  MAVLINK_PAYLOAD(msg)); // Desired yaw angle in degrees * 100

	return mavlink_finalize_message(msg, system_id, component_id, 14, 181);
}

/**
 * @brief Pack a global_position_setpoint_int message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param latitude WGS84 Latitude position in degrees * 1E7
 * @param longitude WGS84 Longitude position in degrees * 1E7
 * @param altitude WGS84 Altitude in meters * 1000 (positive for up)
 * @param yaw Desired yaw angle in degrees * 100
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_global_position_setpoint_int_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int32_t latitude,int32_t longitude,int32_t altitude,int16_t yaw)
{
	msg->msgid = MAVLINK_MSG_ID_GLOBAL_POSITION_SETPOINT_INT;

	put_int32_t_by_index(latitude, 0,  MAVLINK_PAYLOAD(msg)); // WGS84 Latitude position in degrees * 1E7
	put_int32_t_by_index(longitude, 4,  MAVLINK_PAYLOAD(msg)); // WGS84 Longitude position in degrees * 1E7
	put_int32_t_by_index(altitude, 8,  MAVLINK_PAYLOAD(msg)); // WGS84 Altitude in meters * 1000 (positive for up)
	put_int16_t_by_index(yaw, 12,  MAVLINK_PAYLOAD(msg)); // Desired yaw angle in degrees * 100

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 14, 181);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a global_position_setpoint_int message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param latitude WGS84 Latitude position in degrees * 1E7
 * @param longitude WGS84 Longitude position in degrees * 1E7
 * @param altitude WGS84 Altitude in meters * 1000 (positive for up)
 * @param yaw Desired yaw angle in degrees * 100
 */
static inline void mavlink_msg_global_position_setpoint_int_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           int32_t latitude,int32_t longitude,int32_t altitude,int16_t yaw)
{
	msg->msgid = MAVLINK_MSG_ID_GLOBAL_POSITION_SETPOINT_INT;

	put_int32_t_by_index(latitude, 0,  MAVLINK_PAYLOAD(msg)); // WGS84 Latitude position in degrees * 1E7
	put_int32_t_by_index(longitude, 4,  MAVLINK_PAYLOAD(msg)); // WGS84 Longitude position in degrees * 1E7
	put_int32_t_by_index(altitude, 8,  MAVLINK_PAYLOAD(msg)); // WGS84 Altitude in meters * 1000 (positive for up)
	put_int16_t_by_index(yaw, 12,  MAVLINK_PAYLOAD(msg)); // Desired yaw angle in degrees * 100

	mavlink_finalize_message_chan_send(msg, chan, 14, 181);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a global_position_setpoint_int struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param global_position_setpoint_int C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_global_position_setpoint_int_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_global_position_setpoint_int_t* global_position_setpoint_int)
{
	return mavlink_msg_global_position_setpoint_int_pack(system_id, component_id, msg, global_position_setpoint_int->latitude, global_position_setpoint_int->longitude, global_position_setpoint_int->altitude, global_position_setpoint_int->yaw);
}

/**
 * @brief Send a global_position_setpoint_int message
 * @param chan MAVLink channel to send the message
 *
 * @param latitude WGS84 Latitude position in degrees * 1E7
 * @param longitude WGS84 Longitude position in degrees * 1E7
 * @param altitude WGS84 Altitude in meters * 1000 (positive for up)
 * @param yaw Desired yaw angle in degrees * 100
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_global_position_setpoint_int_send(mavlink_channel_t chan, int32_t latitude, int32_t longitude, int32_t altitude, int16_t yaw)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 14);
	mavlink_msg_global_position_setpoint_int_pack_chan_send(chan, msg, latitude, longitude, altitude, yaw);
}

#endif

// MESSAGE GLOBAL_POSITION_SETPOINT_INT UNPACKING


/**
 * @brief Get field latitude from global_position_setpoint_int message
 *
 * @return WGS84 Latitude position in degrees * 1E7
 */
static inline int32_t mavlink_msg_global_position_setpoint_int_get_latitude(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field longitude from global_position_setpoint_int message
 *
 * @return WGS84 Longitude position in degrees * 1E7
 */
static inline int32_t mavlink_msg_global_position_setpoint_int_get_longitude(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field altitude from global_position_setpoint_int message
 *
 * @return WGS84 Altitude in meters * 1000 (positive for up)
 */
static inline int32_t mavlink_msg_global_position_setpoint_int_get_altitude(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field yaw from global_position_setpoint_int message
 *
 * @return Desired yaw angle in degrees * 100
 */
static inline int16_t mavlink_msg_global_position_setpoint_int_get_yaw(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int16_t(msg,  12);
}

/**
 * @brief Decode a global_position_setpoint_int message into a struct
 *
 * @param msg The message to decode
 * @param global_position_setpoint_int C-struct to decode the message contents into
 */
static inline void mavlink_msg_global_position_setpoint_int_decode(const mavlink_message_t* msg, mavlink_global_position_setpoint_int_t* global_position_setpoint_int)
{
#if MAVLINK_NEED_BYTE_SWAP
	global_position_setpoint_int->latitude = mavlink_msg_global_position_setpoint_int_get_latitude(msg);
	global_position_setpoint_int->longitude = mavlink_msg_global_position_setpoint_int_get_longitude(msg);
	global_position_setpoint_int->altitude = mavlink_msg_global_position_setpoint_int_get_altitude(msg);
	global_position_setpoint_int->yaw = mavlink_msg_global_position_setpoint_int_get_yaw(msg);
#else
	memcpy(global_position_setpoint_int, MAVLINK_PAYLOAD(msg), 14);
#endif
}
