// MESSAGE DATA_LOG PACKING

#define MAVLINK_MSG_ID_DATA_LOG 177

typedef struct __mavlink_data_log_t
{
 float fl_1; ///< Log value 1 
 float fl_2; ///< Log value 2 
 float fl_3; ///< Log value 3 
 float fl_4; ///< Log value 4 
 float fl_5; ///< Log value 5 
 float fl_6; ///< Log value 6 
} mavlink_data_log_t;

#define MAVLINK_MESSAGE_INFO_DATA_LOG { \
	"DATA_LOG", \
	6, \
	{  { "fl_1", MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_data_log_t, fl_1) }, \
         { "fl_2", MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_data_log_t, fl_2) }, \
         { "fl_3", MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_data_log_t, fl_3) }, \
         { "fl_4", MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_data_log_t, fl_4) }, \
         { "fl_5", MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_data_log_t, fl_5) }, \
         { "fl_6", MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_data_log_t, fl_6) }, \
         } \
}


/**
 * @brief Pack a data_log message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param fl_1 Log value 1 
 * @param fl_2 Log value 2 
 * @param fl_3 Log value 3 
 * @param fl_4 Log value 4 
 * @param fl_5 Log value 5 
 * @param fl_6 Log value 6 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_data_log_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float fl_1, float fl_2, float fl_3, float fl_4, float fl_5, float fl_6)
{
	msg->msgid = MAVLINK_MSG_ID_DATA_LOG;

	put_float_by_index(fl_1, 0,  MAVLINK_PAYLOAD(msg)); // Log value 1 
	put_float_by_index(fl_2, 4,  MAVLINK_PAYLOAD(msg)); // Log value 2 
	put_float_by_index(fl_3, 8,  MAVLINK_PAYLOAD(msg)); // Log value 3 
	put_float_by_index(fl_4, 12,  MAVLINK_PAYLOAD(msg)); // Log value 4 
	put_float_by_index(fl_5, 16,  MAVLINK_PAYLOAD(msg)); // Log value 5 
	put_float_by_index(fl_6, 20,  MAVLINK_PAYLOAD(msg)); // Log value 6 

	return mavlink_finalize_message(msg, system_id, component_id, 24, 126);
}

/**
 * @brief Pack a data_log message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param fl_1 Log value 1 
 * @param fl_2 Log value 2 
 * @param fl_3 Log value 3 
 * @param fl_4 Log value 4 
 * @param fl_5 Log value 5 
 * @param fl_6 Log value 6 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_data_log_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float fl_1,float fl_2,float fl_3,float fl_4,float fl_5,float fl_6)
{
	msg->msgid = MAVLINK_MSG_ID_DATA_LOG;

	put_float_by_index(fl_1, 0,  MAVLINK_PAYLOAD(msg)); // Log value 1 
	put_float_by_index(fl_2, 4,  MAVLINK_PAYLOAD(msg)); // Log value 2 
	put_float_by_index(fl_3, 8,  MAVLINK_PAYLOAD(msg)); // Log value 3 
	put_float_by_index(fl_4, 12,  MAVLINK_PAYLOAD(msg)); // Log value 4 
	put_float_by_index(fl_5, 16,  MAVLINK_PAYLOAD(msg)); // Log value 5 
	put_float_by_index(fl_6, 20,  MAVLINK_PAYLOAD(msg)); // Log value 6 

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 24, 126);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a data_log message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param fl_1 Log value 1 
 * @param fl_2 Log value 2 
 * @param fl_3 Log value 3 
 * @param fl_4 Log value 4 
 * @param fl_5 Log value 5 
 * @param fl_6 Log value 6 
 */
static inline void mavlink_msg_data_log_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           float fl_1,float fl_2,float fl_3,float fl_4,float fl_5,float fl_6)
{
	msg->msgid = MAVLINK_MSG_ID_DATA_LOG;

	put_float_by_index(fl_1, 0,  MAVLINK_PAYLOAD(msg)); // Log value 1 
	put_float_by_index(fl_2, 4,  MAVLINK_PAYLOAD(msg)); // Log value 2 
	put_float_by_index(fl_3, 8,  MAVLINK_PAYLOAD(msg)); // Log value 3 
	put_float_by_index(fl_4, 12,  MAVLINK_PAYLOAD(msg)); // Log value 4 
	put_float_by_index(fl_5, 16,  MAVLINK_PAYLOAD(msg)); // Log value 5 
	put_float_by_index(fl_6, 20,  MAVLINK_PAYLOAD(msg)); // Log value 6 

	mavlink_finalize_message_chan_send(msg, chan, 24, 126);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a data_log struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param data_log C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_data_log_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_data_log_t* data_log)
{
	return mavlink_msg_data_log_pack(system_id, component_id, msg, data_log->fl_1, data_log->fl_2, data_log->fl_3, data_log->fl_4, data_log->fl_5, data_log->fl_6);
}

/**
 * @brief Send a data_log message
 * @param chan MAVLink channel to send the message
 *
 * @param fl_1 Log value 1 
 * @param fl_2 Log value 2 
 * @param fl_3 Log value 3 
 * @param fl_4 Log value 4 
 * @param fl_5 Log value 5 
 * @param fl_6 Log value 6 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_data_log_send(mavlink_channel_t chan, float fl_1, float fl_2, float fl_3, float fl_4, float fl_5, float fl_6)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 24);
	mavlink_msg_data_log_pack_chan_send(chan, msg, fl_1, fl_2, fl_3, fl_4, fl_5, fl_6);
}

#endif

// MESSAGE DATA_LOG UNPACKING


/**
 * @brief Get field fl_1 from data_log message
 *
 * @return Log value 1 
 */
static inline float mavlink_msg_data_log_get_fl_1(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  0);
}

/**
 * @brief Get field fl_2 from data_log message
 *
 * @return Log value 2 
 */
static inline float mavlink_msg_data_log_get_fl_2(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  4);
}

/**
 * @brief Get field fl_3 from data_log message
 *
 * @return Log value 3 
 */
static inline float mavlink_msg_data_log_get_fl_3(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  8);
}

/**
 * @brief Get field fl_4 from data_log message
 *
 * @return Log value 4 
 */
static inline float mavlink_msg_data_log_get_fl_4(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  12);
}

/**
 * @brief Get field fl_5 from data_log message
 *
 * @return Log value 5 
 */
static inline float mavlink_msg_data_log_get_fl_5(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  16);
}

/**
 * @brief Get field fl_6 from data_log message
 *
 * @return Log value 6 
 */
static inline float mavlink_msg_data_log_get_fl_6(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  20);
}

/**
 * @brief Decode a data_log message into a struct
 *
 * @param msg The message to decode
 * @param data_log C-struct to decode the message contents into
 */
static inline void mavlink_msg_data_log_decode(const mavlink_message_t* msg, mavlink_data_log_t* data_log)
{
#if MAVLINK_NEED_BYTE_SWAP
	data_log->fl_1 = mavlink_msg_data_log_get_fl_1(msg);
	data_log->fl_2 = mavlink_msg_data_log_get_fl_2(msg);
	data_log->fl_3 = mavlink_msg_data_log_get_fl_3(msg);
	data_log->fl_4 = mavlink_msg_data_log_get_fl_4(msg);
	data_log->fl_5 = mavlink_msg_data_log_get_fl_5(msg);
	data_log->fl_6 = mavlink_msg_data_log_get_fl_6(msg);
#else
	memcpy(data_log, MAVLINK_PAYLOAD(msg), 24);
#endif
}
