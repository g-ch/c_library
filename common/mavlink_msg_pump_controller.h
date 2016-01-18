// MESSAGE PUMP_CONTROLLER PACKING

#define MAVLINK_MSG_ID_PUMP_CONTROLLER 234

typedef struct __mavlink_pump_controller_t
{
 float pump_speed_sp; ///< pump
 float spray_speed_sp; ///< spray
} mavlink_pump_controller_t;

#define MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN 8
#define MAVLINK_MSG_ID_234_LEN 8

#define MAVLINK_MSG_ID_PUMP_CONTROLLER_CRC 24
#define MAVLINK_MSG_ID_234_CRC 24



#define MAVLINK_MESSAGE_INFO_PUMP_CONTROLLER { \
	"PUMP_CONTROLLER", \
	2, \
	{  { "pump_speed_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_pump_controller_t, pump_speed_sp) }, \
         { "spray_speed_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_pump_controller_t, spray_speed_sp) }, \
         } \
}


/**
 * @brief Pack a pump_controller message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pump_speed_sp pump
 * @param spray_speed_sp spray
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pump_controller_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float pump_speed_sp, float spray_speed_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN];
	_mav_put_float(buf, 0, pump_speed_sp);
	_mav_put_float(buf, 4, spray_speed_sp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN);
#else
	mavlink_pump_controller_t packet;
	packet.pump_speed_sp = pump_speed_sp;
	packet.spray_speed_sp = spray_speed_sp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PUMP_CONTROLLER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN, MAVLINK_MSG_ID_PUMP_CONTROLLER_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN);
#endif
}

/**
 * @brief Pack a pump_controller message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pump_speed_sp pump
 * @param spray_speed_sp spray
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pump_controller_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float pump_speed_sp,float spray_speed_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN];
	_mav_put_float(buf, 0, pump_speed_sp);
	_mav_put_float(buf, 4, spray_speed_sp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN);
#else
	mavlink_pump_controller_t packet;
	packet.pump_speed_sp = pump_speed_sp;
	packet.spray_speed_sp = spray_speed_sp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PUMP_CONTROLLER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN, MAVLINK_MSG_ID_PUMP_CONTROLLER_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN);
#endif
}

/**
 * @brief Encode a pump_controller struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pump_controller C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pump_controller_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pump_controller_t* pump_controller)
{
	return mavlink_msg_pump_controller_pack(system_id, component_id, msg, pump_controller->pump_speed_sp, pump_controller->spray_speed_sp);
}

/**
 * @brief Encode a pump_controller struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pump_controller C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pump_controller_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pump_controller_t* pump_controller)
{
	return mavlink_msg_pump_controller_pack_chan(system_id, component_id, chan, msg, pump_controller->pump_speed_sp, pump_controller->spray_speed_sp);
}

/**
 * @brief Send a pump_controller message
 * @param chan MAVLink channel to send the message
 *
 * @param pump_speed_sp pump
 * @param spray_speed_sp spray
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pump_controller_send(mavlink_channel_t chan, float pump_speed_sp, float spray_speed_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN];
	_mav_put_float(buf, 0, pump_speed_sp);
	_mav_put_float(buf, 4, spray_speed_sp);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_CONTROLLER, buf, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN, MAVLINK_MSG_ID_PUMP_CONTROLLER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_CONTROLLER, buf, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN);
#endif
#else
	mavlink_pump_controller_t packet;
	packet.pump_speed_sp = pump_speed_sp;
	packet.spray_speed_sp = spray_speed_sp;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_CONTROLLER, (const char *)&packet, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN, MAVLINK_MSG_ID_PUMP_CONTROLLER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_CONTROLLER, (const char *)&packet, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pump_controller_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float pump_speed_sp, float spray_speed_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, pump_speed_sp);
	_mav_put_float(buf, 4, spray_speed_sp);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_CONTROLLER, buf, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN, MAVLINK_MSG_ID_PUMP_CONTROLLER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_CONTROLLER, buf, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN);
#endif
#else
	mavlink_pump_controller_t *packet = (mavlink_pump_controller_t *)msgbuf;
	packet->pump_speed_sp = pump_speed_sp;
	packet->spray_speed_sp = spray_speed_sp;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_CONTROLLER, (const char *)packet, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN, MAVLINK_MSG_ID_PUMP_CONTROLLER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PUMP_CONTROLLER, (const char *)packet, MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PUMP_CONTROLLER UNPACKING


/**
 * @brief Get field pump_speed_sp from pump_controller message
 *
 * @return pump
 */
static inline float mavlink_msg_pump_controller_get_pump_speed_sp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field spray_speed_sp from pump_controller message
 *
 * @return spray
 */
static inline float mavlink_msg_pump_controller_get_spray_speed_sp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a pump_controller message into a struct
 *
 * @param msg The message to decode
 * @param pump_controller C-struct to decode the message contents into
 */
static inline void mavlink_msg_pump_controller_decode(const mavlink_message_t* msg, mavlink_pump_controller_t* pump_controller)
{
#if MAVLINK_NEED_BYTE_SWAP
	pump_controller->pump_speed_sp = mavlink_msg_pump_controller_get_pump_speed_sp(msg);
	pump_controller->spray_speed_sp = mavlink_msg_pump_controller_get_spray_speed_sp(msg);
#else
	memcpy(pump_controller, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PUMP_CONTROLLER_LEN);
#endif
}
