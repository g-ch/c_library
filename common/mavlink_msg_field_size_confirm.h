// MESSAGE FIELD_SIZE_CONFIRM PACKING

#define MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM 225

typedef struct __mavlink_field_size_confirm_t
{
 float length; /*<  L */
 float width; /*<  W */
 float height; /*<  H */
 uint8_t times; /*<  T */
 uint8_t confirm; /*<  if confirmed, value=1 */
} mavlink_field_size_confirm_t;

#define MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN 14
#define MAVLINK_MSG_ID_225_LEN 14

#define MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_CRC 115
#define MAVLINK_MSG_ID_225_CRC 115



#define MAVLINK_MESSAGE_INFO_FIELD_SIZE_CONFIRM { \
	"FIELD_SIZE_CONFIRM", \
	5, \
	{  { "length", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_field_size_confirm_t, length) }, \
         { "width", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_field_size_confirm_t, width) }, \
         { "height", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_field_size_confirm_t, height) }, \
         { "times", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_field_size_confirm_t, times) }, \
         { "confirm", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_field_size_confirm_t, confirm) }, \
         } \
}


/**
 * @brief Pack a field_size_confirm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param length  L 
 * @param width  W 
 * @param height  H 
 * @param times  T 
 * @param confirm  if confirmed, value=1 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_field_size_confirm_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float length, float width, float height, uint8_t times, uint8_t confirm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN];
	_mav_put_float(buf, 0, length);
	_mav_put_float(buf, 4, width);
	_mav_put_float(buf, 8, height);
	_mav_put_uint8_t(buf, 12, times);
	_mav_put_uint8_t(buf, 13, confirm);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN);
#else
	mavlink_field_size_confirm_t packet;
	packet.length = length;
	packet.width = width;
	packet.height = height;
	packet.times = times;
	packet.confirm = confirm;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN);
#endif
}

/**
 * @brief Pack a field_size_confirm message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param length  L 
 * @param width  W 
 * @param height  H 
 * @param times  T 
 * @param confirm  if confirmed, value=1 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_field_size_confirm_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float length,float width,float height,uint8_t times,uint8_t confirm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN];
	_mav_put_float(buf, 0, length);
	_mav_put_float(buf, 4, width);
	_mav_put_float(buf, 8, height);
	_mav_put_uint8_t(buf, 12, times);
	_mav_put_uint8_t(buf, 13, confirm);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN);
#else
	mavlink_field_size_confirm_t packet;
	packet.length = length;
	packet.width = width;
	packet.height = height;
	packet.times = times;
	packet.confirm = confirm;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN);
#endif
}

/**
 * @brief Encode a field_size_confirm struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param field_size_confirm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_field_size_confirm_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_field_size_confirm_t* field_size_confirm)
{
	return mavlink_msg_field_size_confirm_pack(system_id, component_id, msg, field_size_confirm->length, field_size_confirm->width, field_size_confirm->height, field_size_confirm->times, field_size_confirm->confirm);
}

/**
 * @brief Encode a field_size_confirm struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param field_size_confirm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_field_size_confirm_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_field_size_confirm_t* field_size_confirm)
{
	return mavlink_msg_field_size_confirm_pack_chan(system_id, component_id, chan, msg, field_size_confirm->length, field_size_confirm->width, field_size_confirm->height, field_size_confirm->times, field_size_confirm->confirm);
}

/**
 * @brief Send a field_size_confirm message
 * @param chan MAVLink channel to send the message
 *
 * @param length  L 
 * @param width  W 
 * @param height  H 
 * @param times  T 
 * @param confirm  if confirmed, value=1 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_field_size_confirm_send(mavlink_channel_t chan, float length, float width, float height, uint8_t times, uint8_t confirm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN];
	_mav_put_float(buf, 0, length);
	_mav_put_float(buf, 4, width);
	_mav_put_float(buf, 8, height);
	_mav_put_uint8_t(buf, 12, times);
	_mav_put_uint8_t(buf, 13, confirm);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM, buf, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM, buf, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN);
#endif
#else
	mavlink_field_size_confirm_t packet;
	packet.length = length;
	packet.width = width;
	packet.height = height;
	packet.times = times;
	packet.confirm = confirm;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM, (const char *)&packet, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM, (const char *)&packet, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_field_size_confirm_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float length, float width, float height, uint8_t times, uint8_t confirm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, length);
	_mav_put_float(buf, 4, width);
	_mav_put_float(buf, 8, height);
	_mav_put_uint8_t(buf, 12, times);
	_mav_put_uint8_t(buf, 13, confirm);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM, buf, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM, buf, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN);
#endif
#else
	mavlink_field_size_confirm_t *packet = (mavlink_field_size_confirm_t *)msgbuf;
	packet->length = length;
	packet->width = width;
	packet->height = height;
	packet->times = times;
	packet->confirm = confirm;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM, (const char *)packet, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM, (const char *)packet, MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE FIELD_SIZE_CONFIRM UNPACKING


/**
 * @brief Get field length from field_size_confirm message
 *
 * @return  L 
 */
static inline float mavlink_msg_field_size_confirm_get_length(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field width from field_size_confirm message
 *
 * @return  W 
 */
static inline float mavlink_msg_field_size_confirm_get_width(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field height from field_size_confirm message
 *
 * @return  H 
 */
static inline float mavlink_msg_field_size_confirm_get_height(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field times from field_size_confirm message
 *
 * @return  T 
 */
static inline uint8_t mavlink_msg_field_size_confirm_get_times(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field confirm from field_size_confirm message
 *
 * @return  if confirmed, value=1 
 */
static inline uint8_t mavlink_msg_field_size_confirm_get_confirm(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Decode a field_size_confirm message into a struct
 *
 * @param msg The message to decode
 * @param field_size_confirm C-struct to decode the message contents into
 */
static inline void mavlink_msg_field_size_confirm_decode(const mavlink_message_t* msg, mavlink_field_size_confirm_t* field_size_confirm)
{
#if MAVLINK_NEED_BYTE_SWAP
	field_size_confirm->length = mavlink_msg_field_size_confirm_get_length(msg);
	field_size_confirm->width = mavlink_msg_field_size_confirm_get_width(msg);
	field_size_confirm->height = mavlink_msg_field_size_confirm_get_height(msg);
	field_size_confirm->times = mavlink_msg_field_size_confirm_get_times(msg);
	field_size_confirm->confirm = mavlink_msg_field_size_confirm_get_confirm(msg);
#else
	memcpy(field_size_confirm, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_FIELD_SIZE_CONFIRM_LEN);
#endif
}
