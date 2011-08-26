// MESSAGE WAYPOINT_ACK PACKING

#define MAVLINK_MSG_ID_WAYPOINT_ACK 47

typedef struct __mavlink_waypoint_ack_t
{
 uint8_t target_system; ///< System ID
 uint8_t target_component; ///< Component ID
 uint8_t type; ///< 0: OK, 1: Error
} mavlink_waypoint_ack_t;

#define MAVLINK_MESSAGE_INFO_WAYPOINT_ACK { \
	"WAYPOINT_ACK", \
	3, \
	{  { "target_system", MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_waypoint_ack_t, target_system) }, \
         { "target_component", MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_waypoint_ack_t, target_component) }, \
         { "type", MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_waypoint_ack_t, type) }, \
         } \
}


/**
 * @brief Pack a waypoint_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param type 0: OK, 1: Error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_waypoint_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t target_system, uint8_t target_component, uint8_t type)
{
	msg->msgid = MAVLINK_MSG_ID_WAYPOINT_ACK;

	put_uint8_t_by_index(target_system, 0,  MAVLINK_PAYLOAD(msg)); // System ID
	put_uint8_t_by_index(target_component, 1,  MAVLINK_PAYLOAD(msg)); // Component ID
	put_uint8_t_by_index(type, 2,  MAVLINK_PAYLOAD(msg)); // 0: OK, 1: Error

	return mavlink_finalize_message(msg, system_id, component_id, 3, 46);
}

/**
 * @brief Pack a waypoint_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System ID
 * @param target_component Component ID
 * @param type 0: OK, 1: Error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_waypoint_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t target_system,uint8_t target_component,uint8_t type)
{
	msg->msgid = MAVLINK_MSG_ID_WAYPOINT_ACK;

	put_uint8_t_by_index(target_system, 0,  MAVLINK_PAYLOAD(msg)); // System ID
	put_uint8_t_by_index(target_component, 1,  MAVLINK_PAYLOAD(msg)); // Component ID
	put_uint8_t_by_index(type, 2,  MAVLINK_PAYLOAD(msg)); // 0: OK, 1: Error

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 3, 46);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a waypoint_ack message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System ID
 * @param target_component Component ID
 * @param type 0: OK, 1: Error
 */
static inline void mavlink_msg_waypoint_ack_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           uint8_t target_system,uint8_t target_component,uint8_t type)
{
	msg->msgid = MAVLINK_MSG_ID_WAYPOINT_ACK;

	put_uint8_t_by_index(target_system, 0,  MAVLINK_PAYLOAD(msg)); // System ID
	put_uint8_t_by_index(target_component, 1,  MAVLINK_PAYLOAD(msg)); // Component ID
	put_uint8_t_by_index(type, 2,  MAVLINK_PAYLOAD(msg)); // 0: OK, 1: Error

	mavlink_finalize_message_chan_send(msg, chan, 3, 46);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a waypoint_ack struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param waypoint_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_waypoint_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_waypoint_ack_t* waypoint_ack)
{
	return mavlink_msg_waypoint_ack_pack(system_id, component_id, msg, waypoint_ack->target_system, waypoint_ack->target_component, waypoint_ack->type);
}

/**
 * @brief Send a waypoint_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param type 0: OK, 1: Error
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_waypoint_ack_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t type)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 3);
	mavlink_msg_waypoint_ack_pack_chan_send(chan, msg, target_system, target_component, type);
}

#endif

// MESSAGE WAYPOINT_ACK UNPACKING


/**
 * @brief Get field target_system from waypoint_ack message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_waypoint_ack_get_target_system(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from waypoint_ack message
 *
 * @return Component ID
 */
static inline uint8_t mavlink_msg_waypoint_ack_get_target_component(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field type from waypoint_ack message
 *
 * @return 0: OK, 1: Error
 */
static inline uint8_t mavlink_msg_waypoint_ack_get_type(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a waypoint_ack message into a struct
 *
 * @param msg The message to decode
 * @param waypoint_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_waypoint_ack_decode(const mavlink_message_t* msg, mavlink_waypoint_ack_t* waypoint_ack)
{
#if MAVLINK_NEED_BYTE_SWAP
	waypoint_ack->target_system = mavlink_msg_waypoint_ack_get_target_system(msg);
	waypoint_ack->target_component = mavlink_msg_waypoint_ack_get_target_component(msg);
	waypoint_ack->type = mavlink_msg_waypoint_ack_get_type(msg);
#else
	memcpy(waypoint_ack, MAVLINK_PAYLOAD(msg), 3);
#endif
}
