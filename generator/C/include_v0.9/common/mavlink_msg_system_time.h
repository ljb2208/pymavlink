// MESSAGE SYSTEM_TIME PACKING

#define MAVLINK_MSG_ID_SYSTEM_TIME 2

typedef struct __mavlink_system_time_t
{
 uint64_t time_usec; ///< Timestamp of the master clock in microseconds since UNIX epoch.
} mavlink_system_time_t;

#define MAVLINK_MESSAGE_INFO_SYSTEM_TIME { \
	"SYSTEM_TIME", \
	1, \
	{  { "time_usec", MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_system_time_t, time_usec) }, \
         } \
}


/**
 * @brief Pack a system_time message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp of the master clock in microseconds since UNIX epoch.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_system_time_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t time_usec)
{
	msg->msgid = MAVLINK_MSG_ID_SYSTEM_TIME;

	put_uint64_t_by_index(time_usec, 0,  MAVLINK_PAYLOAD(msg)); // Timestamp of the master clock in microseconds since UNIX epoch.

	return mavlink_finalize_message(msg, system_id, component_id, 8, 13);
}

/**
 * @brief Pack a system_time message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp of the master clock in microseconds since UNIX epoch.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_system_time_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t time_usec)
{
	msg->msgid = MAVLINK_MSG_ID_SYSTEM_TIME;

	put_uint64_t_by_index(time_usec, 0,  MAVLINK_PAYLOAD(msg)); // Timestamp of the master clock in microseconds since UNIX epoch.

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 8, 13);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a system_time message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp of the master clock in microseconds since UNIX epoch.
 */
static inline void mavlink_msg_system_time_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           uint64_t time_usec)
{
	msg->msgid = MAVLINK_MSG_ID_SYSTEM_TIME;

	put_uint64_t_by_index(time_usec, 0,  MAVLINK_PAYLOAD(msg)); // Timestamp of the master clock in microseconds since UNIX epoch.

	mavlink_finalize_message_chan_send(msg, chan, 8, 13);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a system_time struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param system_time C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_system_time_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_system_time_t* system_time)
{
	return mavlink_msg_system_time_pack(system_id, component_id, msg, system_time->time_usec);
}

/**
 * @brief Send a system_time message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp of the master clock in microseconds since UNIX epoch.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_system_time_send(mavlink_channel_t chan, uint64_t time_usec)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 8);
	mavlink_msg_system_time_pack_chan_send(chan, msg, time_usec);
}

#endif

// MESSAGE SYSTEM_TIME UNPACKING


/**
 * @brief Get field time_usec from system_time message
 *
 * @return Timestamp of the master clock in microseconds since UNIX epoch.
 */
static inline uint64_t mavlink_msg_system_time_get_time_usec(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a system_time message into a struct
 *
 * @param msg The message to decode
 * @param system_time C-struct to decode the message contents into
 */
static inline void mavlink_msg_system_time_decode(const mavlink_message_t* msg, mavlink_system_time_t* system_time)
{
#if MAVLINK_NEED_BYTE_SWAP
	system_time->time_usec = mavlink_msg_system_time_get_time_usec(msg);
#else
	memcpy(system_time, MAVLINK_PAYLOAD(msg), 8);
#endif
}
