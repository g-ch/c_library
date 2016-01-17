// MESSAGE RP_LIDAR PACKING

#define MAVLINK_MSG_ID_RP_LIDAR 214

typedef struct __mavlink_rp_lidar_t
{
 float down; /*< distance to ground right downside*/
 float forward_1; /*< distance to ground forward*/
 float forward_2; /*< distance to ground forward*/
 float backward_1; /*< distance to ground backward*/
 float backward_2; /*< distance to ground backward*/
} mavlink_rp_lidar_t;

#define MAVLINK_MSG_ID_RP_LIDAR_LEN 20
#define MAVLINK_MSG_ID_214_LEN 20

#define MAVLINK_MSG_ID_RP_LIDAR_CRC 136
#define MAVLINK_MSG_ID_214_CRC 136



#define MAVLINK_MESSAGE_INFO_RP_LIDAR { \
	"RP_LIDAR", \
	5, \
	{  { "down", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_rp_lidar_t, down) }, \
         { "forward_1", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_rp_lidar_t, forward_1) }, \
         { "forward_2", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_rp_lidar_t, forward_2) }, \
         { "backward_1", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_rp_lidar_t, backward_1) }, \
         { "backward_2", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_rp_lidar_t, backward_2) }, \
         } \
}


/**
 * @brief Pack a rp_lidar message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param down distance to ground right downside
 * @param forward_1 distance to ground forward
 * @param forward_2 distance to ground forward
 * @param backward_1 distance to ground backward
 * @param backward_2 distance to ground backward
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rp_lidar_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float down, float forward_1, float forward_2, float backward_1, float backward_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RP_LIDAR_LEN];
	_mav_put_float(buf, 0, down);
	_mav_put_float(buf, 4, forward_1);
	_mav_put_float(buf, 8, forward_2);
	_mav_put_float(buf, 12, backward_1);
	_mav_put_float(buf, 16, backward_2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RP_LIDAR_LEN);
#else
	mavlink_rp_lidar_t packet;
	packet.down = down;
	packet.forward_1 = forward_1;
	packet.forward_2 = forward_2;
	packet.backward_1 = backward_1;
	packet.backward_2 = backward_2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RP_LIDAR_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_RP_LIDAR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RP_LIDAR_LEN, MAVLINK_MSG_ID_RP_LIDAR_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RP_LIDAR_LEN);
#endif
}

/**
 * @brief Pack a rp_lidar message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param down distance to ground right downside
 * @param forward_1 distance to ground forward
 * @param forward_2 distance to ground forward
 * @param backward_1 distance to ground backward
 * @param backward_2 distance to ground backward
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rp_lidar_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float down,float forward_1,float forward_2,float backward_1,float backward_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RP_LIDAR_LEN];
	_mav_put_float(buf, 0, down);
	_mav_put_float(buf, 4, forward_1);
	_mav_put_float(buf, 8, forward_2);
	_mav_put_float(buf, 12, backward_1);
	_mav_put_float(buf, 16, backward_2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RP_LIDAR_LEN);
#else
	mavlink_rp_lidar_t packet;
	packet.down = down;
	packet.forward_1 = forward_1;
	packet.forward_2 = forward_2;
	packet.backward_1 = backward_1;
	packet.backward_2 = backward_2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RP_LIDAR_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_RP_LIDAR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RP_LIDAR_LEN, MAVLINK_MSG_ID_RP_LIDAR_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RP_LIDAR_LEN);
#endif
}

/**
 * @brief Encode a rp_lidar struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rp_lidar C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rp_lidar_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rp_lidar_t* rp_lidar)
{
	return mavlink_msg_rp_lidar_pack(system_id, component_id, msg, rp_lidar->down, rp_lidar->forward_1, rp_lidar->forward_2, rp_lidar->backward_1, rp_lidar->backward_2);
}

/**
 * @brief Encode a rp_lidar struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rp_lidar C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rp_lidar_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rp_lidar_t* rp_lidar)
{
	return mavlink_msg_rp_lidar_pack_chan(system_id, component_id, chan, msg, rp_lidar->down, rp_lidar->forward_1, rp_lidar->forward_2, rp_lidar->backward_1, rp_lidar->backward_2);
}

/**
 * @brief Send a rp_lidar message
 * @param chan MAVLink channel to send the message
 *
 * @param down distance to ground right downside
 * @param forward_1 distance to ground forward
 * @param forward_2 distance to ground forward
 * @param backward_1 distance to ground backward
 * @param backward_2 distance to ground backward
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rp_lidar_send(mavlink_channel_t chan, float down, float forward_1, float forward_2, float backward_1, float backward_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RP_LIDAR_LEN];
	_mav_put_float(buf, 0, down);
	_mav_put_float(buf, 4, forward_1);
	_mav_put_float(buf, 8, forward_2);
	_mav_put_float(buf, 12, backward_1);
	_mav_put_float(buf, 16, backward_2);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RP_LIDAR, buf, MAVLINK_MSG_ID_RP_LIDAR_LEN, MAVLINK_MSG_ID_RP_LIDAR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RP_LIDAR, buf, MAVLINK_MSG_ID_RP_LIDAR_LEN);
#endif
#else
	mavlink_rp_lidar_t packet;
	packet.down = down;
	packet.forward_1 = forward_1;
	packet.forward_2 = forward_2;
	packet.backward_1 = backward_1;
	packet.backward_2 = backward_2;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RP_LIDAR, (const char *)&packet, MAVLINK_MSG_ID_RP_LIDAR_LEN, MAVLINK_MSG_ID_RP_LIDAR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RP_LIDAR, (const char *)&packet, MAVLINK_MSG_ID_RP_LIDAR_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_RP_LIDAR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rp_lidar_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float down, float forward_1, float forward_2, float backward_1, float backward_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, down);
	_mav_put_float(buf, 4, forward_1);
	_mav_put_float(buf, 8, forward_2);
	_mav_put_float(buf, 12, backward_1);
	_mav_put_float(buf, 16, backward_2);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RP_LIDAR, buf, MAVLINK_MSG_ID_RP_LIDAR_LEN, MAVLINK_MSG_ID_RP_LIDAR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RP_LIDAR, buf, MAVLINK_MSG_ID_RP_LIDAR_LEN);
#endif
#else
	mavlink_rp_lidar_t *packet = (mavlink_rp_lidar_t *)msgbuf;
	packet->down = down;
	packet->forward_1 = forward_1;
	packet->forward_2 = forward_2;
	packet->backward_1 = backward_1;
	packet->backward_2 = backward_2;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RP_LIDAR, (const char *)packet, MAVLINK_MSG_ID_RP_LIDAR_LEN, MAVLINK_MSG_ID_RP_LIDAR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RP_LIDAR, (const char *)packet, MAVLINK_MSG_ID_RP_LIDAR_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE RP_LIDAR UNPACKING


/**
 * @brief Get field down from rp_lidar message
 *
 * @return distance to ground right downside
 */
static inline float mavlink_msg_rp_lidar_get_down(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field forward_1 from rp_lidar message
 *
 * @return distance to ground forward
 */
static inline float mavlink_msg_rp_lidar_get_forward_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field forward_2 from rp_lidar message
 *
 * @return distance to ground forward
 */
static inline float mavlink_msg_rp_lidar_get_forward_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field backward_1 from rp_lidar message
 *
 * @return distance to ground backward
 */
static inline float mavlink_msg_rp_lidar_get_backward_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field backward_2 from rp_lidar message
 *
 * @return distance to ground backward
 */
static inline float mavlink_msg_rp_lidar_get_backward_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a rp_lidar message into a struct
 *
 * @param msg The message to decode
 * @param rp_lidar C-struct to decode the message contents into
 */
static inline void mavlink_msg_rp_lidar_decode(const mavlink_message_t* msg, mavlink_rp_lidar_t* rp_lidar)
{
#if MAVLINK_NEED_BYTE_SWAP
	rp_lidar->down = mavlink_msg_rp_lidar_get_down(msg);
	rp_lidar->forward_1 = mavlink_msg_rp_lidar_get_forward_1(msg);
	rp_lidar->forward_2 = mavlink_msg_rp_lidar_get_forward_2(msg);
	rp_lidar->backward_1 = mavlink_msg_rp_lidar_get_backward_1(msg);
	rp_lidar->backward_2 = mavlink_msg_rp_lidar_get_backward_2(msg);
#else
	memcpy(rp_lidar, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_RP_LIDAR_LEN);
#endif
}
