// MESSAGE SENSOR_OFFSETS PACKING

#define MAVLINK_MSG_ID_SENSOR_OFFSETS 150

typedef struct __mavlink_sensor_offsets_t
{
 int16_t mag_ofs_x; ///< magnetometer X offset
 int16_t mag_ofs_y; ///< magnetometer Y offset
 int16_t mag_ofs_z; ///< magnetometer Z offset
 float mag_declination; ///< magnetic declination (radians)
 int32_t raw_press; ///< raw pressure from barometer
 int32_t raw_temp; ///< raw temperature from barometer
 float gyro_cal_x; ///< gyro X calibration
 float gyro_cal_y; ///< gyro Y calibration
 float gyro_cal_z; ///< gyro Z calibration
 float accel_cal_x; ///< accel X calibration
 float accel_cal_y; ///< accel Y calibration
 float accel_cal_z; ///< accel Z calibration
} mavlink_sensor_offsets_t;

#define MAVLINK_MESSAGE_INFO_SENSOR_OFFSETS { \
	"SENSOR_OFFSETS", \
	12, \
	{  { "mag_ofs_x", MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_sensor_offsets_t, mag_ofs_x) }, \
         { "mag_ofs_y", MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_sensor_offsets_t, mag_ofs_y) }, \
         { "mag_ofs_z", MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_sensor_offsets_t, mag_ofs_z) }, \
         { "mag_declination", MAVLINK_TYPE_FLOAT, 0, 6, offsetof(mavlink_sensor_offsets_t, mag_declination) }, \
         { "raw_press", MAVLINK_TYPE_INT32_T, 0, 10, offsetof(mavlink_sensor_offsets_t, raw_press) }, \
         { "raw_temp", MAVLINK_TYPE_INT32_T, 0, 14, offsetof(mavlink_sensor_offsets_t, raw_temp) }, \
         { "gyro_cal_x", MAVLINK_TYPE_FLOAT, 0, 18, offsetof(mavlink_sensor_offsets_t, gyro_cal_x) }, \
         { "gyro_cal_y", MAVLINK_TYPE_FLOAT, 0, 22, offsetof(mavlink_sensor_offsets_t, gyro_cal_y) }, \
         { "gyro_cal_z", MAVLINK_TYPE_FLOAT, 0, 26, offsetof(mavlink_sensor_offsets_t, gyro_cal_z) }, \
         { "accel_cal_x", MAVLINK_TYPE_FLOAT, 0, 30, offsetof(mavlink_sensor_offsets_t, accel_cal_x) }, \
         { "accel_cal_y", MAVLINK_TYPE_FLOAT, 0, 34, offsetof(mavlink_sensor_offsets_t, accel_cal_y) }, \
         { "accel_cal_z", MAVLINK_TYPE_FLOAT, 0, 38, offsetof(mavlink_sensor_offsets_t, accel_cal_z) }, \
         } \
}


/**
 * @brief Pack a sensor_offsets message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mag_ofs_x magnetometer X offset
 * @param mag_ofs_y magnetometer Y offset
 * @param mag_ofs_z magnetometer Z offset
 * @param mag_declination magnetic declination (radians)
 * @param raw_press raw pressure from barometer
 * @param raw_temp raw temperature from barometer
 * @param gyro_cal_x gyro X calibration
 * @param gyro_cal_y gyro Y calibration
 * @param gyro_cal_z gyro Z calibration
 * @param accel_cal_x accel X calibration
 * @param accel_cal_y accel Y calibration
 * @param accel_cal_z accel Z calibration
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sensor_offsets_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int16_t mag_ofs_x, int16_t mag_ofs_y, int16_t mag_ofs_z, float mag_declination, int32_t raw_press, int32_t raw_temp, float gyro_cal_x, float gyro_cal_y, float gyro_cal_z, float accel_cal_x, float accel_cal_y, float accel_cal_z)
{
	msg->msgid = MAVLINK_MSG_ID_SENSOR_OFFSETS;

	put_int16_t_by_index(mag_ofs_x, 0,  MAVLINK_PAYLOAD(msg)); // magnetometer X offset
	put_int16_t_by_index(mag_ofs_y, 2,  MAVLINK_PAYLOAD(msg)); // magnetometer Y offset
	put_int16_t_by_index(mag_ofs_z, 4,  MAVLINK_PAYLOAD(msg)); // magnetometer Z offset
	put_float_by_index(mag_declination, 6,  MAVLINK_PAYLOAD(msg)); // magnetic declination (radians)
	put_int32_t_by_index(raw_press, 10,  MAVLINK_PAYLOAD(msg)); // raw pressure from barometer
	put_int32_t_by_index(raw_temp, 14,  MAVLINK_PAYLOAD(msg)); // raw temperature from barometer
	put_float_by_index(gyro_cal_x, 18,  MAVLINK_PAYLOAD(msg)); // gyro X calibration
	put_float_by_index(gyro_cal_y, 22,  MAVLINK_PAYLOAD(msg)); // gyro Y calibration
	put_float_by_index(gyro_cal_z, 26,  MAVLINK_PAYLOAD(msg)); // gyro Z calibration
	put_float_by_index(accel_cal_x, 30,  MAVLINK_PAYLOAD(msg)); // accel X calibration
	put_float_by_index(accel_cal_y, 34,  MAVLINK_PAYLOAD(msg)); // accel Y calibration
	put_float_by_index(accel_cal_z, 38,  MAVLINK_PAYLOAD(msg)); // accel Z calibration

	return mavlink_finalize_message(msg, system_id, component_id, 42, 240);
}

/**
 * @brief Pack a sensor_offsets message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param mag_ofs_x magnetometer X offset
 * @param mag_ofs_y magnetometer Y offset
 * @param mag_ofs_z magnetometer Z offset
 * @param mag_declination magnetic declination (radians)
 * @param raw_press raw pressure from barometer
 * @param raw_temp raw temperature from barometer
 * @param gyro_cal_x gyro X calibration
 * @param gyro_cal_y gyro Y calibration
 * @param gyro_cal_z gyro Z calibration
 * @param accel_cal_x accel X calibration
 * @param accel_cal_y accel Y calibration
 * @param accel_cal_z accel Z calibration
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sensor_offsets_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int16_t mag_ofs_x,int16_t mag_ofs_y,int16_t mag_ofs_z,float mag_declination,int32_t raw_press,int32_t raw_temp,float gyro_cal_x,float gyro_cal_y,float gyro_cal_z,float accel_cal_x,float accel_cal_y,float accel_cal_z)
{
	msg->msgid = MAVLINK_MSG_ID_SENSOR_OFFSETS;

	put_int16_t_by_index(mag_ofs_x, 0,  MAVLINK_PAYLOAD(msg)); // magnetometer X offset
	put_int16_t_by_index(mag_ofs_y, 2,  MAVLINK_PAYLOAD(msg)); // magnetometer Y offset
	put_int16_t_by_index(mag_ofs_z, 4,  MAVLINK_PAYLOAD(msg)); // magnetometer Z offset
	put_float_by_index(mag_declination, 6,  MAVLINK_PAYLOAD(msg)); // magnetic declination (radians)
	put_int32_t_by_index(raw_press, 10,  MAVLINK_PAYLOAD(msg)); // raw pressure from barometer
	put_int32_t_by_index(raw_temp, 14,  MAVLINK_PAYLOAD(msg)); // raw temperature from barometer
	put_float_by_index(gyro_cal_x, 18,  MAVLINK_PAYLOAD(msg)); // gyro X calibration
	put_float_by_index(gyro_cal_y, 22,  MAVLINK_PAYLOAD(msg)); // gyro Y calibration
	put_float_by_index(gyro_cal_z, 26,  MAVLINK_PAYLOAD(msg)); // gyro Z calibration
	put_float_by_index(accel_cal_x, 30,  MAVLINK_PAYLOAD(msg)); // accel X calibration
	put_float_by_index(accel_cal_y, 34,  MAVLINK_PAYLOAD(msg)); // accel Y calibration
	put_float_by_index(accel_cal_z, 38,  MAVLINK_PAYLOAD(msg)); // accel Z calibration

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 42, 240);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a sensor_offsets message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param mag_ofs_x magnetometer X offset
 * @param mag_ofs_y magnetometer Y offset
 * @param mag_ofs_z magnetometer Z offset
 * @param mag_declination magnetic declination (radians)
 * @param raw_press raw pressure from barometer
 * @param raw_temp raw temperature from barometer
 * @param gyro_cal_x gyro X calibration
 * @param gyro_cal_y gyro Y calibration
 * @param gyro_cal_z gyro Z calibration
 * @param accel_cal_x accel X calibration
 * @param accel_cal_y accel Y calibration
 * @param accel_cal_z accel Z calibration
 */
static inline void mavlink_msg_sensor_offsets_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           int16_t mag_ofs_x,int16_t mag_ofs_y,int16_t mag_ofs_z,float mag_declination,int32_t raw_press,int32_t raw_temp,float gyro_cal_x,float gyro_cal_y,float gyro_cal_z,float accel_cal_x,float accel_cal_y,float accel_cal_z)
{
	msg->msgid = MAVLINK_MSG_ID_SENSOR_OFFSETS;

	put_int16_t_by_index(mag_ofs_x, 0,  MAVLINK_PAYLOAD(msg)); // magnetometer X offset
	put_int16_t_by_index(mag_ofs_y, 2,  MAVLINK_PAYLOAD(msg)); // magnetometer Y offset
	put_int16_t_by_index(mag_ofs_z, 4,  MAVLINK_PAYLOAD(msg)); // magnetometer Z offset
	put_float_by_index(mag_declination, 6,  MAVLINK_PAYLOAD(msg)); // magnetic declination (radians)
	put_int32_t_by_index(raw_press, 10,  MAVLINK_PAYLOAD(msg)); // raw pressure from barometer
	put_int32_t_by_index(raw_temp, 14,  MAVLINK_PAYLOAD(msg)); // raw temperature from barometer
	put_float_by_index(gyro_cal_x, 18,  MAVLINK_PAYLOAD(msg)); // gyro X calibration
	put_float_by_index(gyro_cal_y, 22,  MAVLINK_PAYLOAD(msg)); // gyro Y calibration
	put_float_by_index(gyro_cal_z, 26,  MAVLINK_PAYLOAD(msg)); // gyro Z calibration
	put_float_by_index(accel_cal_x, 30,  MAVLINK_PAYLOAD(msg)); // accel X calibration
	put_float_by_index(accel_cal_y, 34,  MAVLINK_PAYLOAD(msg)); // accel Y calibration
	put_float_by_index(accel_cal_z, 38,  MAVLINK_PAYLOAD(msg)); // accel Z calibration

	mavlink_finalize_message_chan_send(msg, chan, 42, 240);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a sensor_offsets struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sensor_offsets C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sensor_offsets_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sensor_offsets_t* sensor_offsets)
{
	return mavlink_msg_sensor_offsets_pack(system_id, component_id, msg, sensor_offsets->mag_ofs_x, sensor_offsets->mag_ofs_y, sensor_offsets->mag_ofs_z, sensor_offsets->mag_declination, sensor_offsets->raw_press, sensor_offsets->raw_temp, sensor_offsets->gyro_cal_x, sensor_offsets->gyro_cal_y, sensor_offsets->gyro_cal_z, sensor_offsets->accel_cal_x, sensor_offsets->accel_cal_y, sensor_offsets->accel_cal_z);
}

/**
 * @brief Send a sensor_offsets message
 * @param chan MAVLink channel to send the message
 *
 * @param mag_ofs_x magnetometer X offset
 * @param mag_ofs_y magnetometer Y offset
 * @param mag_ofs_z magnetometer Z offset
 * @param mag_declination magnetic declination (radians)
 * @param raw_press raw pressure from barometer
 * @param raw_temp raw temperature from barometer
 * @param gyro_cal_x gyro X calibration
 * @param gyro_cal_y gyro Y calibration
 * @param gyro_cal_z gyro Z calibration
 * @param accel_cal_x accel X calibration
 * @param accel_cal_y accel Y calibration
 * @param accel_cal_z accel Z calibration
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sensor_offsets_send(mavlink_channel_t chan, int16_t mag_ofs_x, int16_t mag_ofs_y, int16_t mag_ofs_z, float mag_declination, int32_t raw_press, int32_t raw_temp, float gyro_cal_x, float gyro_cal_y, float gyro_cal_z, float accel_cal_x, float accel_cal_y, float accel_cal_z)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 42);
	mavlink_msg_sensor_offsets_pack_chan_send(chan, msg, mag_ofs_x, mag_ofs_y, mag_ofs_z, mag_declination, raw_press, raw_temp, gyro_cal_x, gyro_cal_y, gyro_cal_z, accel_cal_x, accel_cal_y, accel_cal_z);
}

#endif

// MESSAGE SENSOR_OFFSETS UNPACKING


/**
 * @brief Get field mag_ofs_x from sensor_offsets message
 *
 * @return magnetometer X offset
 */
static inline int16_t mavlink_msg_sensor_offsets_get_mag_ofs_x(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field mag_ofs_y from sensor_offsets message
 *
 * @return magnetometer Y offset
 */
static inline int16_t mavlink_msg_sensor_offsets_get_mag_ofs_y(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field mag_ofs_z from sensor_offsets message
 *
 * @return magnetometer Z offset
 */
static inline int16_t mavlink_msg_sensor_offsets_get_mag_ofs_z(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field mag_declination from sensor_offsets message
 *
 * @return magnetic declination (radians)
 */
static inline float mavlink_msg_sensor_offsets_get_mag_declination(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  6);
}

/**
 * @brief Get field raw_press from sensor_offsets message
 *
 * @return raw pressure from barometer
 */
static inline int32_t mavlink_msg_sensor_offsets_get_raw_press(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int32_t(msg,  10);
}

/**
 * @brief Get field raw_temp from sensor_offsets message
 *
 * @return raw temperature from barometer
 */
static inline int32_t mavlink_msg_sensor_offsets_get_raw_temp(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int32_t(msg,  14);
}

/**
 * @brief Get field gyro_cal_x from sensor_offsets message
 *
 * @return gyro X calibration
 */
static inline float mavlink_msg_sensor_offsets_get_gyro_cal_x(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  18);
}

/**
 * @brief Get field gyro_cal_y from sensor_offsets message
 *
 * @return gyro Y calibration
 */
static inline float mavlink_msg_sensor_offsets_get_gyro_cal_y(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  22);
}

/**
 * @brief Get field gyro_cal_z from sensor_offsets message
 *
 * @return gyro Z calibration
 */
static inline float mavlink_msg_sensor_offsets_get_gyro_cal_z(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  26);
}

/**
 * @brief Get field accel_cal_x from sensor_offsets message
 *
 * @return accel X calibration
 */
static inline float mavlink_msg_sensor_offsets_get_accel_cal_x(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  30);
}

/**
 * @brief Get field accel_cal_y from sensor_offsets message
 *
 * @return accel Y calibration
 */
static inline float mavlink_msg_sensor_offsets_get_accel_cal_y(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  34);
}

/**
 * @brief Get field accel_cal_z from sensor_offsets message
 *
 * @return accel Z calibration
 */
static inline float mavlink_msg_sensor_offsets_get_accel_cal_z(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  38);
}

/**
 * @brief Decode a sensor_offsets message into a struct
 *
 * @param msg The message to decode
 * @param sensor_offsets C-struct to decode the message contents into
 */
static inline void mavlink_msg_sensor_offsets_decode(const mavlink_message_t* msg, mavlink_sensor_offsets_t* sensor_offsets)
{
#if MAVLINK_NEED_BYTE_SWAP
	sensor_offsets->mag_ofs_x = mavlink_msg_sensor_offsets_get_mag_ofs_x(msg);
	sensor_offsets->mag_ofs_y = mavlink_msg_sensor_offsets_get_mag_ofs_y(msg);
	sensor_offsets->mag_ofs_z = mavlink_msg_sensor_offsets_get_mag_ofs_z(msg);
	sensor_offsets->mag_declination = mavlink_msg_sensor_offsets_get_mag_declination(msg);
	sensor_offsets->raw_press = mavlink_msg_sensor_offsets_get_raw_press(msg);
	sensor_offsets->raw_temp = mavlink_msg_sensor_offsets_get_raw_temp(msg);
	sensor_offsets->gyro_cal_x = mavlink_msg_sensor_offsets_get_gyro_cal_x(msg);
	sensor_offsets->gyro_cal_y = mavlink_msg_sensor_offsets_get_gyro_cal_y(msg);
	sensor_offsets->gyro_cal_z = mavlink_msg_sensor_offsets_get_gyro_cal_z(msg);
	sensor_offsets->accel_cal_x = mavlink_msg_sensor_offsets_get_accel_cal_x(msg);
	sensor_offsets->accel_cal_y = mavlink_msg_sensor_offsets_get_accel_cal_y(msg);
	sensor_offsets->accel_cal_z = mavlink_msg_sensor_offsets_get_accel_cal_z(msg);
#else
	memcpy(sensor_offsets, MAVLINK_PAYLOAD(msg), 42);
#endif
}
