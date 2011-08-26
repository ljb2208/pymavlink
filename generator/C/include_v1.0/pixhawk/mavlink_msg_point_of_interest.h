// MESSAGE POINT_OF_INTEREST PACKING

#define MAVLINK_MSG_ID_POINT_OF_INTEREST 191

typedef struct __mavlink_point_of_interest_t
{
 float x; ///< X Position
 float y; ///< Y Position
 float z; ///< Z Position
 uint16_t timeout; ///< 0: no timeout, >1: timeout in seconds
 uint8_t type; ///< 0: Notice, 1: Warning, 2: Critical, 3: Emergency, 4: Debug
 uint8_t color; ///< 0: blue, 1: yellow, 2: red, 3: orange, 4: green, 5: magenta
 uint8_t coordinate_system; ///< 0: global, 1:local
 char name[26]; ///< POI name
} mavlink_point_of_interest_t;

#define MAVLINK_MESSAGE_INFO_POINT_OF_INTEREST { \
	"POINT_OF_INTEREST", \
	8, \
	{  { "x", MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_point_of_interest_t, x) }, \
         { "y", MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_point_of_interest_t, y) }, \
         { "z", MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_point_of_interest_t, z) }, \
         { "timeout", MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_point_of_interest_t, timeout) }, \
         { "type", MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_point_of_interest_t, type) }, \
         { "color", MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_point_of_interest_t, color) }, \
         { "coordinate_system", MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_point_of_interest_t, coordinate_system) }, \
         { "name", MAVLINK_TYPE_CHAR, 26, 17, offsetof(mavlink_point_of_interest_t, name) }, \
         } \
}


/**
 * @brief Pack a point_of_interest message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param type 0: Notice, 1: Warning, 2: Critical, 3: Emergency, 4: Debug
 * @param color 0: blue, 1: yellow, 2: red, 3: orange, 4: green, 5: magenta
 * @param coordinate_system 0: global, 1:local
 * @param timeout 0: no timeout, >1: timeout in seconds
 * @param x X Position
 * @param y Y Position
 * @param z Z Position
 * @param name POI name
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_point_of_interest_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t type, uint8_t color, uint8_t coordinate_system, uint16_t timeout, float x, float y, float z, const char *name)
{
	msg->msgid = MAVLINK_MSG_ID_POINT_OF_INTEREST;

	put_float_by_index(x, 0,  MAVLINK_PAYLOAD(msg)); // X Position
	put_float_by_index(y, 4,  MAVLINK_PAYLOAD(msg)); // Y Position
	put_float_by_index(z, 8,  MAVLINK_PAYLOAD(msg)); // Z Position
	put_uint16_t_by_index(timeout, 12,  MAVLINK_PAYLOAD(msg)); // 0: no timeout, >1: timeout in seconds
	put_uint8_t_by_index(type, 14,  MAVLINK_PAYLOAD(msg)); // 0: Notice, 1: Warning, 2: Critical, 3: Emergency, 4: Debug
	put_uint8_t_by_index(color, 15,  MAVLINK_PAYLOAD(msg)); // 0: blue, 1: yellow, 2: red, 3: orange, 4: green, 5: magenta
	put_uint8_t_by_index(coordinate_system, 16,  MAVLINK_PAYLOAD(msg)); // 0: global, 1:local
	put_char_array_by_index(name, 17, 26,  MAVLINK_PAYLOAD(msg)); // POI name

	return mavlink_finalize_message(msg, system_id, component_id, 43, 253);
}

/**
 * @brief Pack a point_of_interest message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param type 0: Notice, 1: Warning, 2: Critical, 3: Emergency, 4: Debug
 * @param color 0: blue, 1: yellow, 2: red, 3: orange, 4: green, 5: magenta
 * @param coordinate_system 0: global, 1:local
 * @param timeout 0: no timeout, >1: timeout in seconds
 * @param x X Position
 * @param y Y Position
 * @param z Z Position
 * @param name POI name
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_point_of_interest_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t type,uint8_t color,uint8_t coordinate_system,uint16_t timeout,float x,float y,float z,const char *name)
{
	msg->msgid = MAVLINK_MSG_ID_POINT_OF_INTEREST;

	put_float_by_index(x, 0,  MAVLINK_PAYLOAD(msg)); // X Position
	put_float_by_index(y, 4,  MAVLINK_PAYLOAD(msg)); // Y Position
	put_float_by_index(z, 8,  MAVLINK_PAYLOAD(msg)); // Z Position
	put_uint16_t_by_index(timeout, 12,  MAVLINK_PAYLOAD(msg)); // 0: no timeout, >1: timeout in seconds
	put_uint8_t_by_index(type, 14,  MAVLINK_PAYLOAD(msg)); // 0: Notice, 1: Warning, 2: Critical, 3: Emergency, 4: Debug
	put_uint8_t_by_index(color, 15,  MAVLINK_PAYLOAD(msg)); // 0: blue, 1: yellow, 2: red, 3: orange, 4: green, 5: magenta
	put_uint8_t_by_index(coordinate_system, 16,  MAVLINK_PAYLOAD(msg)); // 0: global, 1:local
	put_char_array_by_index(name, 17, 26,  MAVLINK_PAYLOAD(msg)); // POI name

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 43, 253);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a point_of_interest message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param type 0: Notice, 1: Warning, 2: Critical, 3: Emergency, 4: Debug
 * @param color 0: blue, 1: yellow, 2: red, 3: orange, 4: green, 5: magenta
 * @param coordinate_system 0: global, 1:local
 * @param timeout 0: no timeout, >1: timeout in seconds
 * @param x X Position
 * @param y Y Position
 * @param z Z Position
 * @param name POI name
 */
static inline void mavlink_msg_point_of_interest_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           uint8_t type,uint8_t color,uint8_t coordinate_system,uint16_t timeout,float x,float y,float z,const char *name)
{
	msg->msgid = MAVLINK_MSG_ID_POINT_OF_INTEREST;

	put_float_by_index(x, 0,  MAVLINK_PAYLOAD(msg)); // X Position
	put_float_by_index(y, 4,  MAVLINK_PAYLOAD(msg)); // Y Position
	put_float_by_index(z, 8,  MAVLINK_PAYLOAD(msg)); // Z Position
	put_uint16_t_by_index(timeout, 12,  MAVLINK_PAYLOAD(msg)); // 0: no timeout, >1: timeout in seconds
	put_uint8_t_by_index(type, 14,  MAVLINK_PAYLOAD(msg)); // 0: Notice, 1: Warning, 2: Critical, 3: Emergency, 4: Debug
	put_uint8_t_by_index(color, 15,  MAVLINK_PAYLOAD(msg)); // 0: blue, 1: yellow, 2: red, 3: orange, 4: green, 5: magenta
	put_uint8_t_by_index(coordinate_system, 16,  MAVLINK_PAYLOAD(msg)); // 0: global, 1:local
	put_char_array_by_index(name, 17, 26,  MAVLINK_PAYLOAD(msg)); // POI name

	mavlink_finalize_message_chan_send(msg, chan, 43, 253);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a point_of_interest struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param point_of_interest C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_point_of_interest_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_point_of_interest_t* point_of_interest)
{
	return mavlink_msg_point_of_interest_pack(system_id, component_id, msg, point_of_interest->type, point_of_interest->color, point_of_interest->coordinate_system, point_of_interest->timeout, point_of_interest->x, point_of_interest->y, point_of_interest->z, point_of_interest->name);
}

/**
 * @brief Send a point_of_interest message
 * @param chan MAVLink channel to send the message
 *
 * @param type 0: Notice, 1: Warning, 2: Critical, 3: Emergency, 4: Debug
 * @param color 0: blue, 1: yellow, 2: red, 3: orange, 4: green, 5: magenta
 * @param coordinate_system 0: global, 1:local
 * @param timeout 0: no timeout, >1: timeout in seconds
 * @param x X Position
 * @param y Y Position
 * @param z Z Position
 * @param name POI name
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_point_of_interest_send(mavlink_channel_t chan, uint8_t type, uint8_t color, uint8_t coordinate_system, uint16_t timeout, float x, float y, float z, const char *name)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 43);
	mavlink_msg_point_of_interest_pack_chan_send(chan, msg, type, color, coordinate_system, timeout, x, y, z, name);
}

#endif

// MESSAGE POINT_OF_INTEREST UNPACKING


/**
 * @brief Get field type from point_of_interest message
 *
 * @return 0: Notice, 1: Warning, 2: Critical, 3: Emergency, 4: Debug
 */
static inline uint8_t mavlink_msg_point_of_interest_get_type(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field color from point_of_interest message
 *
 * @return 0: blue, 1: yellow, 2: red, 3: orange, 4: green, 5: magenta
 */
static inline uint8_t mavlink_msg_point_of_interest_get_color(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field coordinate_system from point_of_interest message
 *
 * @return 0: global, 1:local
 */
static inline uint8_t mavlink_msg_point_of_interest_get_coordinate_system(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field timeout from point_of_interest message
 *
 * @return 0: no timeout, >1: timeout in seconds
 */
static inline uint16_t mavlink_msg_point_of_interest_get_timeout(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field x from point_of_interest message
 *
 * @return X Position
 */
static inline float mavlink_msg_point_of_interest_get_x(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from point_of_interest message
 *
 * @return Y Position
 */
static inline float mavlink_msg_point_of_interest_get_y(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from point_of_interest message
 *
 * @return Z Position
 */
static inline float mavlink_msg_point_of_interest_get_z(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  8);
}

/**
 * @brief Get field name from point_of_interest message
 *
 * @return POI name
 */
static inline uint16_t mavlink_msg_point_of_interest_get_name(const mavlink_message_t* msg, char *name)
{
	return MAVLINK_MSG_RETURN_char_array(msg, name, 26,  17);
}

/**
 * @brief Decode a point_of_interest message into a struct
 *
 * @param msg The message to decode
 * @param point_of_interest C-struct to decode the message contents into
 */
static inline void mavlink_msg_point_of_interest_decode(const mavlink_message_t* msg, mavlink_point_of_interest_t* point_of_interest)
{
#if MAVLINK_NEED_BYTE_SWAP
	point_of_interest->x = mavlink_msg_point_of_interest_get_x(msg);
	point_of_interest->y = mavlink_msg_point_of_interest_get_y(msg);
	point_of_interest->z = mavlink_msg_point_of_interest_get_z(msg);
	point_of_interest->timeout = mavlink_msg_point_of_interest_get_timeout(msg);
	point_of_interest->type = mavlink_msg_point_of_interest_get_type(msg);
	point_of_interest->color = mavlink_msg_point_of_interest_get_color(msg);
	point_of_interest->coordinate_system = mavlink_msg_point_of_interest_get_coordinate_system(msg);
	mavlink_msg_point_of_interest_get_name(msg, point_of_interest->name);
#else
	memcpy(point_of_interest, MAVLINK_PAYLOAD(msg), 43);
#endif
}
