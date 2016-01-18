// MESSAGE SONAR_DISTANCE PACKING

#define MAVLINK_MSG_ID_SONAR_DISTANCE 212

typedef struct __mavlink_sonar_distance_t
{
 float sonar_front; ///< sonar distance value 1
 float sonar_behind; ///< sonar distance value 2
 float sonar_left; ///< sonar distance value 3
 float sonar_right; ///< sonar distance value 4
 float sonar_up; ///< sonar distance value 5
 float sonar_down; ///< sonar distance value 6
 float sonar_cam; ///< sonar distance value 7
} mavlink_sonar_distance_t;

#define MAVLINK_MSG_ID_SONAR_DISTANCE_LEN 28
#define MAVLINK_MSG_ID_212_LEN 28

#define MAVLINK_MSG_ID_SONAR_DISTANCE_CRC 39
#define MAVLINK_MSG_ID_212_CRC 39



#define MAVLINK_MESSAGE_INFO_SONAR_DISTANCE { \
	"SONAR_DISTANCE", \
	7, \
	{  { "sonar_front", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sonar_distance_t, sonar_front) }, \
         { "sonar_behind", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_sonar_distance_t, sonar_behind) }, \
         { "sonar_left", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_sonar_distance_t, sonar_left) }, \
         { "sonar_right", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_sonar_distance_t, sonar_right) }, \
         { "sonar_up", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_sonar_distance_t, sonar_up) }, \
         { "sonar_down", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_sonar_distance_t, sonar_down) }, \
         { "sonar_cam", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_sonar_distance_t, sonar_cam) }, \
         } \
}


/**
 * @brief Pack a sonar_distance message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sonar_front sonar distance value 1
 * @param sonar_behind sonar distance value 2
 * @param sonar_left sonar distance value 3
 * @param sonar_right sonar distance value 4
 * @param sonar_up sonar distance value 5
 * @param sonar_down sonar distance value 6
 * @param sonar_cam sonar distance value 7
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sonar_distance_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float sonar_front, float sonar_behind, float sonar_left, float sonar_right, float sonar_up, float sonar_down, float sonar_cam)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SONAR_DISTANCE_LEN];
	_mav_put_float(buf, 0, sonar_front);
	_mav_put_float(buf, 4, sonar_behind);
	_mav_put_float(buf, 8, sonar_left);
	_mav_put_float(buf, 12, sonar_right);
	_mav_put_float(buf, 16, sonar_up);
	_mav_put_float(buf, 20, sonar_down);
	_mav_put_float(buf, 24, sonar_cam);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN);
#else
	mavlink_sonar_distance_t packet;
	packet.sonar_front = sonar_front;
	packet.sonar_behind = sonar_behind;
	packet.sonar_left = sonar_left;
	packet.sonar_right = sonar_right;
	packet.sonar_up = sonar_up;
	packet.sonar_down = sonar_down;
	packet.sonar_cam = sonar_cam;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SONAR_DISTANCE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN, MAVLINK_MSG_ID_SONAR_DISTANCE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN);
#endif
}

/**
 * @brief Pack a sonar_distance message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sonar_front sonar distance value 1
 * @param sonar_behind sonar distance value 2
 * @param sonar_left sonar distance value 3
 * @param sonar_right sonar distance value 4
 * @param sonar_up sonar distance value 5
 * @param sonar_down sonar distance value 6
 * @param sonar_cam sonar distance value 7
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sonar_distance_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float sonar_front,float sonar_behind,float sonar_left,float sonar_right,float sonar_up,float sonar_down,float sonar_cam)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SONAR_DISTANCE_LEN];
	_mav_put_float(buf, 0, sonar_front);
	_mav_put_float(buf, 4, sonar_behind);
	_mav_put_float(buf, 8, sonar_left);
	_mav_put_float(buf, 12, sonar_right);
	_mav_put_float(buf, 16, sonar_up);
	_mav_put_float(buf, 20, sonar_down);
	_mav_put_float(buf, 24, sonar_cam);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN);
#else
	mavlink_sonar_distance_t packet;
	packet.sonar_front = sonar_front;
	packet.sonar_behind = sonar_behind;
	packet.sonar_left = sonar_left;
	packet.sonar_right = sonar_right;
	packet.sonar_up = sonar_up;
	packet.sonar_down = sonar_down;
	packet.sonar_cam = sonar_cam;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SONAR_DISTANCE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN, MAVLINK_MSG_ID_SONAR_DISTANCE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN);
#endif
}

/**
 * @brief Encode a sonar_distance struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sonar_distance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sonar_distance_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sonar_distance_t* sonar_distance)
{
	return mavlink_msg_sonar_distance_pack(system_id, component_id, msg, sonar_distance->sonar_front, sonar_distance->sonar_behind, sonar_distance->sonar_left, sonar_distance->sonar_right, sonar_distance->sonar_up, sonar_distance->sonar_down, sonar_distance->sonar_cam);
}

/**
 * @brief Encode a sonar_distance struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sonar_distance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sonar_distance_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sonar_distance_t* sonar_distance)
{
	return mavlink_msg_sonar_distance_pack_chan(system_id, component_id, chan, msg, sonar_distance->sonar_front, sonar_distance->sonar_behind, sonar_distance->sonar_left, sonar_distance->sonar_right, sonar_distance->sonar_up, sonar_distance->sonar_down, sonar_distance->sonar_cam);
}

/**
 * @brief Send a sonar_distance message
 * @param chan MAVLink channel to send the message
 *
 * @param sonar_front sonar distance value 1
 * @param sonar_behind sonar distance value 2
 * @param sonar_left sonar distance value 3
 * @param sonar_right sonar distance value 4
 * @param sonar_up sonar distance value 5
 * @param sonar_down sonar distance value 6
 * @param sonar_cam sonar distance value 7
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sonar_distance_send(mavlink_channel_t chan, float sonar_front, float sonar_behind, float sonar_left, float sonar_right, float sonar_up, float sonar_down, float sonar_cam)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SONAR_DISTANCE_LEN];
	_mav_put_float(buf, 0, sonar_front);
	_mav_put_float(buf, 4, sonar_behind);
	_mav_put_float(buf, 8, sonar_left);
	_mav_put_float(buf, 12, sonar_right);
	_mav_put_float(buf, 16, sonar_up);
	_mav_put_float(buf, 20, sonar_down);
	_mav_put_float(buf, 24, sonar_cam);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_DISTANCE, buf, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN, MAVLINK_MSG_ID_SONAR_DISTANCE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_DISTANCE, buf, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN);
#endif
#else
	mavlink_sonar_distance_t packet;
	packet.sonar_front = sonar_front;
	packet.sonar_behind = sonar_behind;
	packet.sonar_left = sonar_left;
	packet.sonar_right = sonar_right;
	packet.sonar_up = sonar_up;
	packet.sonar_down = sonar_down;
	packet.sonar_cam = sonar_cam;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_DISTANCE, (const char *)&packet, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN, MAVLINK_MSG_ID_SONAR_DISTANCE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_DISTANCE, (const char *)&packet, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_SONAR_DISTANCE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sonar_distance_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float sonar_front, float sonar_behind, float sonar_left, float sonar_right, float sonar_up, float sonar_down, float sonar_cam)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, sonar_front);
	_mav_put_float(buf, 4, sonar_behind);
	_mav_put_float(buf, 8, sonar_left);
	_mav_put_float(buf, 12, sonar_right);
	_mav_put_float(buf, 16, sonar_up);
	_mav_put_float(buf, 20, sonar_down);
	_mav_put_float(buf, 24, sonar_cam);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_DISTANCE, buf, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN, MAVLINK_MSG_ID_SONAR_DISTANCE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_DISTANCE, buf, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN);
#endif
#else
	mavlink_sonar_distance_t *packet = (mavlink_sonar_distance_t *)msgbuf;
	packet->sonar_front = sonar_front;
	packet->sonar_behind = sonar_behind;
	packet->sonar_left = sonar_left;
	packet->sonar_right = sonar_right;
	packet->sonar_up = sonar_up;
	packet->sonar_down = sonar_down;
	packet->sonar_cam = sonar_cam;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_DISTANCE, (const char *)packet, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN, MAVLINK_MSG_ID_SONAR_DISTANCE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_DISTANCE, (const char *)packet, MAVLINK_MSG_ID_SONAR_DISTANCE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE SONAR_DISTANCE UNPACKING


/**
 * @brief Get field sonar_front from sonar_distance message
 *
 * @return sonar distance value 1
 */
static inline float mavlink_msg_sonar_distance_get_sonar_front(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field sonar_behind from sonar_distance message
 *
 * @return sonar distance value 2
 */
static inline float mavlink_msg_sonar_distance_get_sonar_behind(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field sonar_left from sonar_distance message
 *
 * @return sonar distance value 3
 */
static inline float mavlink_msg_sonar_distance_get_sonar_left(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field sonar_right from sonar_distance message
 *
 * @return sonar distance value 4
 */
static inline float mavlink_msg_sonar_distance_get_sonar_right(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field sonar_up from sonar_distance message
 *
 * @return sonar distance value 5
 */
static inline float mavlink_msg_sonar_distance_get_sonar_up(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field sonar_down from sonar_distance message
 *
 * @return sonar distance value 6
 */
static inline float mavlink_msg_sonar_distance_get_sonar_down(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field sonar_cam from sonar_distance message
 *
 * @return sonar distance value 7
 */
static inline float mavlink_msg_sonar_distance_get_sonar_cam(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a sonar_distance message into a struct
 *
 * @param msg The message to decode
 * @param sonar_distance C-struct to decode the message contents into
 */
static inline void mavlink_msg_sonar_distance_decode(const mavlink_message_t* msg, mavlink_sonar_distance_t* sonar_distance)
{
#if MAVLINK_NEED_BYTE_SWAP
	sonar_distance->sonar_front = mavlink_msg_sonar_distance_get_sonar_front(msg);
	sonar_distance->sonar_behind = mavlink_msg_sonar_distance_get_sonar_behind(msg);
	sonar_distance->sonar_left = mavlink_msg_sonar_distance_get_sonar_left(msg);
	sonar_distance->sonar_right = mavlink_msg_sonar_distance_get_sonar_right(msg);
	sonar_distance->sonar_up = mavlink_msg_sonar_distance_get_sonar_up(msg);
	sonar_distance->sonar_down = mavlink_msg_sonar_distance_get_sonar_down(msg);
	sonar_distance->sonar_cam = mavlink_msg_sonar_distance_get_sonar_cam(msg);
#else
	memcpy(sonar_distance, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_SONAR_DISTANCE_LEN);
#endif
}
