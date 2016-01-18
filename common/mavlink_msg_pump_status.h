// MESSAGE PUMP_STATUS PACKING

#define MAVLINK_MSG_ID_PUMP_STATUS 235

typedef struct __mavlink_pump_status_t
{
 float pump_speed; ///< pump
 float spray_speed; ///< spray
} mavlink_pump_status_t;

#define MAVLINK_MSG_ID_PUMP_STATUS_LEN 8
#define MAVLINK_MSG_ID_235_LEN 8

#define MAVLINK_MSG_ID_PUMP_STATUS_CRC 115
#define MAVLINK_MSG_ID_235_CRC 115



#define MAVLINK_MESSAGE_INFO_PUMP_STATUS { \
	"PUMP_STATUS", \
	2, \
	{  { "pump_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_pump_status_t, pump_speed) }, \
         { "spray_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_pump_status_t, spray_speed) }, \
         } \
}


/**
 * @brief Pack a pump_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pump_speed pump
 * @param spray_speed spray
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pump_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float pump_speed, float spray_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PUMP_STATUS_LEN];
	_mav_put_float(buf, 0, pump_speed);
	_mav_put_float(buf, 4, spray_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PUMP_STATUS_LEN);
#else
	mavlink_pump_status_t packet;
	packet.pump_speed = pump_speed;
	packet.spray_speed = spray_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PUMP_STATUS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PUMP_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PUMP_STATUS_LEN, MAVLINK_MSG_ID_PUMP_STATUS_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PUMP_STATUS_LEN);
#endif
}

/**
 * @brief Pack a pump_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pump_speed pump
 * @param spray_speed spray
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pump_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float pump_speed,float spray_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PUMP_STATUS_LEN];
	_mav_put_float(buf, 0, pump_speed);
	_mav_put_float(buf, 4, spray_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PUMP_STATUS_LEN);
#else
	mavlink_pump_status_t packet;
	packet.pump_speed = pump_speed;
	packet.spray_speed = spray_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PUMP_STATUS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PUMP_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PUMP_STATUS_LEN, MAVLINK_MSG_ID_PUMP_STATUS_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PUMP_STATUS_LEN);
#endif
}

/**
 * @brief Encode a pump_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pump_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pump_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pump_status_t* pump_status)
{
	return mavlink_msg_pump_status_pack(system_id, component_id, msg, pump_status->pump_speed, pump_status->spray_speed);
}

/**
 * @brief Encode a pump_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pump_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pump_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pump_status_t* pump_status)
{
	return mavlink_msg_pump_status_pack_chan(system_id, component_id, chan, msg, pump_status->pump_speed, pump_status->spray_speed);
}

/**
 * @brief Send a pump_status message
 * @param chan MAVLink channel to send the message
 *
 * @param pump_speed pump
 * @param spray_speed spray
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pump_status_send(mavlink_channel_t chan, float pump_speed, float spray_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PUMP_STATUS_LEN];
	_mav_put_float(buf, 0, pump_speed);
	_mav_put_float(buf, 4, spray_speed);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_STATUS, buf, MAVLINK_MSG_ID_PUMP_STATUS_LEN, MAVLINK_MSG_ID_PUMP_STATUS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_STATUS, buf, MAVLINK_MSG_ID_PUMP_STATUS_LEN);
#endif
#else
	mavlink_pump_status_t packet;
	packet.pump_speed = pump_speed;
	packet.spray_speed = spray_speed;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_STATUS, (const char *)&packet, MAVLINK_MSG_ID_PUMP_STATUS_LEN, MAVLINK_MSG_ID_PUMP_STATUS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_STATUS, (const char *)&packet, MAVLINK_MSG_ID_PUMP_STATUS_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PUMP_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pump_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float pump_speed, float spray_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, pump_speed);
	_mav_put_float(buf, 4, spray_speed);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_STATUS, buf, MAVLINK_MSG_ID_PUMP_STATUS_LEN, MAVLINK_MSG_ID_PUMP_STATUS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_STATUS, buf, MAVLINK_MSG_ID_PUMP_STATUS_LEN);
#endif
#else
	mavlink_pump_status_t *packet = (mavlink_pump_status_t *)msgbuf;
	packet->pump_speed = pump_speed;
	packet->spray_speed = spray_speed;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_STATUS, (const char *)packet, MAVLINK_MSG_ID_PUMP_STATUS_LEN, MAVLINK_MSG_ID_PUMP_STATUS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_STATUS, (const char *)packet, MAVLINK_MSG_ID_PUMP_STATUS_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PUMP_STATUS UNPACKING


/**
 * @brief Get field pump_speed from pump_status message
 *
 * @return pump
 */
static inline float mavlink_msg_pump_status_get_pump_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field spray_speed from pump_status message
 *
 * @return spray
 */
static inline float mavlink_msg_pump_status_get_spray_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a pump_status message into a struct
 *
 * @param msg The message to decode
 * @param pump_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_pump_status_decode(const mavlink_message_t* msg, mavlink_pump_status_t* pump_status)
{
#if MAVLINK_NEED_BYTE_SWAP
	pump_status->pump_speed = mavlink_msg_pump_status_get_pump_speed(msg);
	pump_status->spray_speed = mavlink_msg_pump_status_get_spray_speed(msg);
#else
	memcpy(pump_status, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PUMP_STATUS_LEN);
#endif
}
