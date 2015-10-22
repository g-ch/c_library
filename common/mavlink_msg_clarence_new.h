// MESSAGE CLARENCE_NEW PACKING

#define MAVLINK_MSG_ID_CLARENCE_NEW 213

typedef struct __mavlink_clarence_new_t
{
 float mavros_a; /*< No.1 c*/
 uint8_t mavros_b; /*< No.2 d*/
} mavlink_clarence_new_t;

#define MAVLINK_MSG_ID_CLARENCE_NEW_LEN 5
#define MAVLINK_MSG_ID_213_LEN 5

#define MAVLINK_MSG_ID_CLARENCE_NEW_CRC 49
#define MAVLINK_MSG_ID_213_CRC 49



#define MAVLINK_MESSAGE_INFO_CLARENCE_NEW { \
	"CLARENCE_NEW", \
	2, \
	{  { "mavros_a", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_clarence_new_t, mavros_a) }, \
         { "mavros_b", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_clarence_new_t, mavros_b) }, \
         } \
}


/**
 * @brief Pack a clarence_new message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mavros_a No.1 c
 * @param mavros_b No.2 d
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_clarence_new_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float mavros_a, uint8_t mavros_b)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CLARENCE_NEW_LEN];
	_mav_put_float(buf, 0, mavros_a);
	_mav_put_uint8_t(buf, 4, mavros_b);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CLARENCE_NEW_LEN);
#else
	mavlink_clarence_new_t packet;
	packet.mavros_a = mavros_a;
	packet.mavros_b = mavros_b;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CLARENCE_NEW_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CLARENCE_NEW;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CLARENCE_NEW_LEN, MAVLINK_MSG_ID_CLARENCE_NEW_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CLARENCE_NEW_LEN);
#endif
}

/**
 * @brief Pack a clarence_new message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mavros_a No.1 c
 * @param mavros_b No.2 d
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_clarence_new_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float mavros_a,uint8_t mavros_b)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CLARENCE_NEW_LEN];
	_mav_put_float(buf, 0, mavros_a);
	_mav_put_uint8_t(buf, 4, mavros_b);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CLARENCE_NEW_LEN);
#else
	mavlink_clarence_new_t packet;
	packet.mavros_a = mavros_a;
	packet.mavros_b = mavros_b;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CLARENCE_NEW_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CLARENCE_NEW;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CLARENCE_NEW_LEN, MAVLINK_MSG_ID_CLARENCE_NEW_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CLARENCE_NEW_LEN);
#endif
}

/**
 * @brief Encode a clarence_new struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param clarence_new C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_clarence_new_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_clarence_new_t* clarence_new)
{
	return mavlink_msg_clarence_new_pack(system_id, component_id, msg, clarence_new->mavros_a, clarence_new->mavros_b);
}

/**
 * @brief Encode a clarence_new struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param clarence_new C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_clarence_new_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_clarence_new_t* clarence_new)
{
	return mavlink_msg_clarence_new_pack_chan(system_id, component_id, chan, msg, clarence_new->mavros_a, clarence_new->mavros_b);
}

/**
 * @brief Send a clarence_new message
 * @param chan MAVLink channel to send the message
 *
 * @param mavros_a No.1 c
 * @param mavros_b No.2 d
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_clarence_new_send(mavlink_channel_t chan, float mavros_a, uint8_t mavros_b)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CLARENCE_NEW_LEN];
	_mav_put_float(buf, 0, mavros_a);
	_mav_put_uint8_t(buf, 4, mavros_b);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CLARENCE_NEW, buf, MAVLINK_MSG_ID_CLARENCE_NEW_LEN, MAVLINK_MSG_ID_CLARENCE_NEW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CLARENCE_NEW, buf, MAVLINK_MSG_ID_CLARENCE_NEW_LEN);
#endif
#else
	mavlink_clarence_new_t packet;
	packet.mavros_a = mavros_a;
	packet.mavros_b = mavros_b;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CLARENCE_NEW, (const char *)&packet, MAVLINK_MSG_ID_CLARENCE_NEW_LEN, MAVLINK_MSG_ID_CLARENCE_NEW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CLARENCE_NEW, (const char *)&packet, MAVLINK_MSG_ID_CLARENCE_NEW_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_CLARENCE_NEW_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_clarence_new_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float mavros_a, uint8_t mavros_b)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, mavros_a);
	_mav_put_uint8_t(buf, 4, mavros_b);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CLARENCE_NEW, buf, MAVLINK_MSG_ID_CLARENCE_NEW_LEN, MAVLINK_MSG_ID_CLARENCE_NEW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CLARENCE_NEW, buf, MAVLINK_MSG_ID_CLARENCE_NEW_LEN);
#endif
#else
	mavlink_clarence_new_t *packet = (mavlink_clarence_new_t *)msgbuf;
	packet->mavros_a = mavros_a;
	packet->mavros_b = mavros_b;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CLARENCE_NEW, (const char *)packet, MAVLINK_MSG_ID_CLARENCE_NEW_LEN, MAVLINK_MSG_ID_CLARENCE_NEW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CLARENCE_NEW, (const char *)packet, MAVLINK_MSG_ID_CLARENCE_NEW_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE CLARENCE_NEW UNPACKING


/**
 * @brief Get field mavros_a from clarence_new message
 *
 * @return No.1 c
 */
static inline float mavlink_msg_clarence_new_get_mavros_a(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field mavros_b from clarence_new message
 *
 * @return No.2 d
 */
static inline uint8_t mavlink_msg_clarence_new_get_mavros_b(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a clarence_new message into a struct
 *
 * @param msg The message to decode
 * @param clarence_new C-struct to decode the message contents into
 */
static inline void mavlink_msg_clarence_new_decode(const mavlink_message_t* msg, mavlink_clarence_new_t* clarence_new)
{
#if MAVLINK_NEED_BYTE_SWAP
	clarence_new->mavros_a = mavlink_msg_clarence_new_get_mavros_a(msg);
	clarence_new->mavros_b = mavlink_msg_clarence_new_get_mavros_b(msg);
#else
	memcpy(clarence_new, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_CLARENCE_NEW_LEN);
#endif
}
