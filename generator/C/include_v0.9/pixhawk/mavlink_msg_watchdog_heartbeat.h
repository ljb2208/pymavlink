// MESSAGE WATCHDOG_HEARTBEAT PACKING

#define MAVLINK_MSG_ID_WATCHDOG_HEARTBEAT 180

typedef struct __mavlink_watchdog_heartbeat_t
{
 uint16_t watchdog_id; ///< Watchdog ID
 uint16_t process_count; ///< Number of processes
} mavlink_watchdog_heartbeat_t;

#define MAVLINK_MESSAGE_INFO_WATCHDOG_HEARTBEAT { \
	"WATCHDOG_HEARTBEAT", \
	2, \
	{  { "watchdog_id", MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_watchdog_heartbeat_t, watchdog_id) }, \
         { "process_count", MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_watchdog_heartbeat_t, process_count) }, \
         } \
}


/**
 * @brief Pack a watchdog_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param watchdog_id Watchdog ID
 * @param process_count Number of processes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_watchdog_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t watchdog_id, uint16_t process_count)
{
	msg->msgid = MAVLINK_MSG_ID_WATCHDOG_HEARTBEAT;

	put_uint16_t_by_index(watchdog_id, 0,  MAVLINK_PAYLOAD(msg)); // Watchdog ID
	put_uint16_t_by_index(process_count, 2,  MAVLINK_PAYLOAD(msg)); // Number of processes

	return mavlink_finalize_message(msg, system_id, component_id, 4, 91);
}

/**
 * @brief Pack a watchdog_heartbeat message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param watchdog_id Watchdog ID
 * @param process_count Number of processes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_watchdog_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t watchdog_id,uint16_t process_count)
{
	msg->msgid = MAVLINK_MSG_ID_WATCHDOG_HEARTBEAT;

	put_uint16_t_by_index(watchdog_id, 0,  MAVLINK_PAYLOAD(msg)); // Watchdog ID
	put_uint16_t_by_index(process_count, 2,  MAVLINK_PAYLOAD(msg)); // Number of processes

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 4, 91);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a watchdog_heartbeat message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param watchdog_id Watchdog ID
 * @param process_count Number of processes
 */
static inline void mavlink_msg_watchdog_heartbeat_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           uint16_t watchdog_id,uint16_t process_count)
{
	msg->msgid = MAVLINK_MSG_ID_WATCHDOG_HEARTBEAT;

	put_uint16_t_by_index(watchdog_id, 0,  MAVLINK_PAYLOAD(msg)); // Watchdog ID
	put_uint16_t_by_index(process_count, 2,  MAVLINK_PAYLOAD(msg)); // Number of processes

	mavlink_finalize_message_chan_send(msg, chan, 4, 91);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a watchdog_heartbeat struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param watchdog_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_watchdog_heartbeat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_watchdog_heartbeat_t* watchdog_heartbeat)
{
	return mavlink_msg_watchdog_heartbeat_pack(system_id, component_id, msg, watchdog_heartbeat->watchdog_id, watchdog_heartbeat->process_count);
}

/**
 * @brief Send a watchdog_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param watchdog_id Watchdog ID
 * @param process_count Number of processes
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_watchdog_heartbeat_send(mavlink_channel_t chan, uint16_t watchdog_id, uint16_t process_count)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 4);
	mavlink_msg_watchdog_heartbeat_pack_chan_send(chan, msg, watchdog_id, process_count);
}

#endif

// MESSAGE WATCHDOG_HEARTBEAT UNPACKING


/**
 * @brief Get field watchdog_id from watchdog_heartbeat message
 *
 * @return Watchdog ID
 */
static inline uint16_t mavlink_msg_watchdog_heartbeat_get_watchdog_id(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field process_count from watchdog_heartbeat message
 *
 * @return Number of processes
 */
static inline uint16_t mavlink_msg_watchdog_heartbeat_get_process_count(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Decode a watchdog_heartbeat message into a struct
 *
 * @param msg The message to decode
 * @param watchdog_heartbeat C-struct to decode the message contents into
 */
static inline void mavlink_msg_watchdog_heartbeat_decode(const mavlink_message_t* msg, mavlink_watchdog_heartbeat_t* watchdog_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP
	watchdog_heartbeat->watchdog_id = mavlink_msg_watchdog_heartbeat_get_watchdog_id(msg);
	watchdog_heartbeat->process_count = mavlink_msg_watchdog_heartbeat_get_process_count(msg);
#else
	memcpy(watchdog_heartbeat, MAVLINK_PAYLOAD(msg), 4);
#endif
}
