#include "jh18.h"
#include <QDateTime>
#include <cmath>

constexpr unsigned int jh18::PREFIX_POSITION;
constexpr unsigned int jh18::PREFIX_SIZE;
constexpr unsigned int jh18::LEN_LOWER_POSITION;
constexpr unsigned int jh18::LEN_LOWER_SIZE;
constexpr unsigned int jh18::INFORMATION_TYPE_POSITION;
constexpr unsigned int jh18::INFORMATION_TYPE_SIZE;
constexpr unsigned int jh18::LEN_HIGH_POSITION;
constexpr unsigned int jh18::LEN_HIGH_SIZE;
constexpr unsigned int jh18::TIME1_POSITION;
constexpr unsigned int jh18::TIME1_SIZE;
constexpr unsigned int jh18::TIME2_POSITION;
constexpr unsigned int jh18::TIME2_SIZE;
constexpr unsigned int jh18::TIME3_POSITION;
constexpr unsigned int jh18::TIME3_SIZE;
constexpr unsigned int jh18::TIME4_POSITION;
constexpr unsigned int jh18::TIME4_SIZE;
constexpr unsigned int jh18::RADARID_LOWER_POSITION;
constexpr unsigned int jh18::RADARID_LOWER_SIZE;
constexpr unsigned int jh18::RADARID_HIGH_POSITION;
constexpr unsigned int jh18::RADARID_HIGH_SIZE;
constexpr unsigned int jh18::DESTINATIONID_LOWER_POSITION;
constexpr unsigned int jh18::DESTINATIONID_LOWER_SIZE;
constexpr unsigned int jh18::DESTINATIONID_HIGH_POSITION;
constexpr unsigned int jh18::DESTINATIONID_HIGH_SIZE;
constexpr unsigned int jh18::INFORMLABEL_LOWER_POSITION;
constexpr unsigned int jh18::INFORMLABEL_LOWER_SIZE;
constexpr unsigned int jh18::INFORMLABEL_HIGH_POSITION;
constexpr unsigned int jh18::INFORMLABEL_HIGH_SIZE;
constexpr unsigned int jh18::TRACKNUMBER_LOWER_POSITION;
constexpr unsigned int jh18::TRACKNUMBER_LOWER_SIZE;
constexpr unsigned int jh18::TRACKNUMBER_HIGH_POSITION;
constexpr unsigned int jh18::TRACKNUMBER_HIGH_SIZE;
constexpr unsigned int jh18::DISTANCE_LOW_POSITION;
constexpr unsigned int jh18::DISTANCE_LOW_SIZE;
constexpr unsigned int jh18::DISTANCE_MED_POSITION;
constexpr unsigned int jh18::DISTANCE_MED_SIZE;
constexpr unsigned int jh18::DISTANCE_HIGH_POSITION;
constexpr unsigned int jh18::DISTANCE_HIGH_SIZE;
constexpr unsigned int jh18::DISTANCE_DIVIDER;
constexpr unsigned int jh18::BEARING_LOW_POSITION;
constexpr unsigned int jh18::BEARING_LOW_SIZE;
constexpr unsigned int jh18::BEARING_HIGH_POSITION;
constexpr unsigned int jh18::BEARING_HIGH_SIZE;
constexpr double jh18::BEARING_DIVIDER;
constexpr unsigned int jh18::HEIGHT_LOW_POSITION;
constexpr unsigned int jh18::HEIGHT_LOW_SIZE;
constexpr unsigned int jh18::HEIGHT_HIGH_POSITION;
constexpr unsigned int jh18::HEIGHT_HIGH_SIZE;
constexpr unsigned int jh18::HEIGHT_DIVIDER;
constexpr unsigned int jh18::SPEED_LOW_POSITION;
constexpr unsigned int jh18::SPEED_LOW_SIZE;
constexpr unsigned int jh18::SPEED_HIGH_POSITION;
constexpr unsigned int jh18::SPEED_HIGH_SIZE;
constexpr double jh18::SPEED_DIVIDER;
constexpr unsigned int jh18::COURSE_LOW_POSITION;
constexpr unsigned int jh18::COURSE_LOW_SIZE;
constexpr unsigned int jh18::COURSE_HIGH_POSITION;
constexpr unsigned int jh18::COURSE_HIGH_SIZE;
constexpr double jh18::COURSE_DIVIDER;
constexpr unsigned int jh18::SUPPORTMODE_POSITION;
constexpr unsigned int jh18::SUPPORTMODE_SIZE;
constexpr unsigned int jh18::HEIGHTMODE_POSITION;
constexpr unsigned int jh18::HEIGHTMODE_SIZE;
constexpr unsigned int jh18::POINTTRACESOURCE_POSITION;
constexpr unsigned int jh18::POINTTRACESOURCE_SIZE;
constexpr unsigned int jh18::TRACKQUALITY_POSITION;
constexpr unsigned int jh18::TRACKQUALITY_SIZE;
constexpr unsigned int jh18::CORRECTIONFLAG_POSITION;
constexpr unsigned int jh18::CORRECTIONFLAG_SIZE;
constexpr unsigned int jh18::FIRSTPOINTFLAG_POSITION;
constexpr unsigned int jh18::FIRSTPOINTFLAG_SIZE;
constexpr unsigned int jh18::DELETEFLAG_POSITION;
constexpr unsigned int jh18::DELETEFLAG_SIZE;
constexpr unsigned int jh18::SIMULATIONFLAG_POSITION;
constexpr unsigned int jh18::SIMULATIONFLAG_SIZE;
constexpr unsigned int jh18::FOFFLAG_POSITION;
constexpr unsigned int jh18::FOFFLAG_SIZE;
constexpr unsigned int jh18::FOF_POSITION;
constexpr unsigned int jh18::FOF_SIZE;
constexpr unsigned int jh18::CLASSLABELFLAG_POSITION;
constexpr unsigned int jh18::CLASSLABELFLAG_SIZE;
constexpr unsigned int jh18::TYPECLASS_POSITION;
constexpr unsigned int jh18::TYPECLASS_SIZE;
constexpr unsigned int jh18::QUANTITYFLAG_POSITION;
constexpr unsigned int jh18::QUANTITYFLAG_SIZE;
constexpr unsigned int jh18::QUANTITY_POSITION;
constexpr unsigned int jh18::QUANTITY_SIZE;
constexpr unsigned int jh18::CHECKSUM_POSITION;
constexpr unsigned int jh18::CHECKSUM_SIZE;
constexpr double jh18::TIME_DIVIDER;

constexpr unsigned int jh18::MOCKLOGO_POSITION;
constexpr unsigned int jh18::MOCKLOGO_SIZE;
constexpr unsigned int jh18::CHECKSUMDIS_POSITION;
constexpr unsigned int jh18::CHECKSUMDIS_SIZE;
//------------------NETTED
constexpr unsigned int jh18::RESPONSEBIT_POSITION;
constexpr unsigned int jh18::RESPONSEBIT_SIZE;
constexpr unsigned int jh18::RADARSTATIONDEPARTMENTMARK_LOW_POSITION;
constexpr unsigned int jh18::RADARSTATIONDEPARTMENTMARK_LOW_SIZE;
constexpr unsigned int jh18::RADARSTATIONDEPARTMENTMARK_HIGH_POSITION;
constexpr unsigned int jh18::RADARSTATIONDEPARTMENTMARK_HIGH_SIZE;
constexpr unsigned int jh18::RADARLONGITUDELOW_POSITION;
constexpr unsigned int jh18::RADARLONGITUDELOW_SIZE;
constexpr unsigned int jh18::RADARLONGITUDEMED_POSITION;
constexpr unsigned int jh18::RADARLONGITUDEMED_SIZE;
constexpr unsigned int jh18::RADARLONGITUDEHIGH_POSITION;
constexpr unsigned int jh18::RADARLONGITUDEHIGH_SIZE;
constexpr unsigned int jh18::RADARLONGITUDEHHIGH_POSITION;
constexpr unsigned int jh18::RADARLONGITUDEHHIGH_SIZE;
constexpr double jh18::RADARLONGITUDE_DIVIDER; //
constexpr unsigned int jh18::RADARLATITUDELOW_POSITION;
constexpr unsigned int jh18::RADARLATITUDELOW_SIZE;
constexpr unsigned int jh18::RADARLATITUDEMED_POSITION;
constexpr unsigned int jh18::RADARLATITUDEMED_SIZE;
constexpr unsigned int jh18::RADARLATITUDEHIGH_POSITION;
constexpr unsigned int jh18::RADARLATITUDEHIGH_SIZE;
constexpr unsigned int jh18::RADARLATITUDEHHIGH_POSITION;
constexpr unsigned int jh18::RADARLATITUDEHHIGH_SIZE;
constexpr double jh18::RADARLATITUDE_DIVIDER; //
constexpr unsigned int jh18::RADARALTITUDE_LOW_POSITION;
constexpr unsigned int jh18::RADARALTITUDE_LOW_SIZE;
constexpr unsigned int jh18::RADARALTITUDE_HIGH_POSITION;
constexpr unsigned int jh18::RADARALTITUDE_HIGH_SIZE;
constexpr unsigned int jh18::RADARALTITUDE_DIVIDER;
constexpr unsigned int jh18::SYSTEMSTATUS_POSITION;
constexpr unsigned int jh18::SYSTEMSTATUS_SIZE;
constexpr unsigned int jh18::CHANNELTYPE_POSITION;
constexpr unsigned int jh18::CHANNELTYPE_SIZE;
constexpr unsigned int jh18::CHECKSUMNETTED_POSITION;
constexpr unsigned int jh18::CHECKSUMNETTED_SIZE;
constexpr unsigned int jh18::RADARNAME_POSITION;
constexpr unsigned int jh18::RADARNAME_SIZE;

constexpr unsigned int jh18::TIME_DIVIDER_AO;

int jh18::DecoderVO(MessageVO& messVO, unsigned char* _buffer, const int& _size)
{
    const int required_length = JH18_VO_SIZE;

    if (_size < required_length) {
        return -1;
    }

    int prefix = extractInt(_buffer, PREFIX_POSITION, PREFIX_SIZE);
    int len_lower = extractInt(_buffer, LEN_LOWER_POSITION, LEN_LOWER_SIZE);
    int information_type = extractInt(_buffer, INFORMATION_TYPE_POSITION, INFORMATION_TYPE_SIZE);
    int len_high = extractInt(_buffer, LEN_HIGH_POSITION, LEN_HIGH_SIZE);
    int time1 = extractInt(_buffer, TIME1_POSITION, TIME1_SIZE);
    int time2 = extractInt(_buffer, TIME2_POSITION, TIME2_SIZE);
    int time3 = extractInt(_buffer, TIME3_POSITION, TIME3_SIZE);
    int time4 = extractInt(_buffer, TIME4_POSITION, TIME4_SIZE);
    int radarID_lower = extractInt(_buffer, RADARID_LOWER_POSITION, RADARID_LOWER_SIZE);
    int radarID_high = extractInt(_buffer, RADARID_HIGH_POSITION, RADARID_HIGH_SIZE);
    int destID_lower = extractInt(_buffer, DESTINATIONID_LOWER_POSITION, DESTINATIONID_LOWER_SIZE);
    int destID_high = extractInt(_buffer, DESTINATIONID_HIGH_POSITION, DESTINATIONID_HIGH_SIZE);
    int informationLabel_lower = extractInt(_buffer, INFORMLABEL_LOWER_POSITION, INFORMLABEL_LOWER_SIZE);
    int informationLabel_high = extractInt(_buffer, INFORMLABEL_HIGH_POSITION, INFORMLABEL_HIGH_SIZE);
    int tracknumber_lower = extractInt(_buffer, TRACKNUMBER_LOWER_POSITION, TRACKNUMBER_LOWER_SIZE);
    int tracknumber_high = extractInt(_buffer, TRACKNUMBER_HIGH_POSITION, TRACKNUMBER_HIGH_SIZE);
    int distance_low = extractInt(_buffer, DISTANCE_LOW_POSITION, DISTANCE_LOW_SIZE);
    int distance_med = extractInt(_buffer, DISTANCE_MED_POSITION, DISTANCE_MED_SIZE);
    int distance_high = extractInt(_buffer, DISTANCE_HIGH_POSITION, DISTANCE_HIGH_SIZE);
    int bearing_low = extractInt(_buffer, BEARING_LOW_POSITION, BEARING_LOW_SIZE);
    int bearing_high = extractInt(_buffer, BEARING_HIGH_POSITION, BEARING_HIGH_SIZE);
    int height_low = extractInt(_buffer, HEIGHT_LOW_POSITION, HEIGHT_LOW_SIZE);
    int height_high = extractInt(_buffer, HEIGHT_HIGH_POSITION, HEIGHT_HIGH_SIZE);
    int speed_low = extractInt(_buffer, SPEED_LOW_POSITION, SPEED_LOW_SIZE);
    int speed_high = extractInt(_buffer, SPEED_HIGH_POSITION, SPEED_HIGH_SIZE);
    int course_low = extractInt(_buffer, COURSE_LOW_POSITION, COURSE_LOW_SIZE);
    int course_high = extractInt(_buffer, COURSE_HIGH_POSITION, COURSE_HIGH_SIZE);
    int support_mode = extractInt(_buffer, SUPPORTMODE_POSITION, SUPPORTMODE_SIZE);
    int height_mode = extractInt(_buffer, HEIGHTMODE_POSITION, HEIGHTMODE_SIZE);
    int point_trace_source = extractInt(_buffer, POINTTRACESOURCE_POSITION, POINTTRACESOURCE_SIZE);
    int quality = extractInt(_buffer, TRACKQUALITY_POSITION, TRACKQUALITY_SIZE);
    int correction_flag = extractInt(_buffer, CORRECTIONFLAG_POSITION, CORRECTIONFLAG_SIZE);
    int first_point_flag = extractInt(_buffer, FIRSTPOINTFLAG_POSITION, FIRSTPOINTFLAG_SIZE);
    int delete_flag = extractInt(_buffer, DELETEFLAG_POSITION, DELETEFLAG_SIZE);
    int simulation_flag = extractInt(_buffer, SIMULATIONFLAG_POSITION, SIMULATIONFLAG_SIZE);
    int fof_flag = extractInt(_buffer, FOFFLAG_POSITION, FOFFLAG_SIZE);
    int fof = extractInt(_buffer, FOF_POSITION, FOF_SIZE);
    int class_label_flag = extractInt(_buffer, CLASSLABELFLAG_POSITION, CLASSLABELFLAG_SIZE);
    int type_class = extractInt(_buffer, TYPECLASS_POSITION, TYPECLASS_SIZE);
    int quantity_flag = extractInt(_buffer, QUANTITYFLAG_POSITION, QUANTITYFLAG_SIZE);
    int quantity = extractInt(_buffer, QUANTITY_POSITION, QUANTITY_SIZE);
    int checksum = extractInt(_buffer, CHECKSUM_POSITION, CHECKSUM_SIZE);

    int len = len_high << 8;
    len += len_lower;

    int time_r = time4 << 24;
    time_r += time3 << 16;
    time_r += time2 << 8;
    time_r += time1;

    uint16_t radarID = radarID_high << 8;
    radarID += radarID_lower;

    uint16_t destID = destID_high << 8;
    destID += destID_lower;

    uint16_t information_label = informationLabel_high << 8;
    information_label += informationLabel_lower;

    uint16_t track_number = tracknumber_high << 8;
    track_number += tracknumber_lower;

    uint32_t distance = distance_high << 16;
    distance += distance_med << 8;
    distance += distance_low;

    uint16_t bearing = bearing_high << 8;
    bearing += bearing_low;

    uint16_t height = height_high << 8;
    height += height_low;

    uint16_t speed = speed_high << 8;
    speed += speed_low;

    uint16_t course = course_high << 8;
    course += course_low;

    /*  uint32_t time{0};
    memcpy((char *)&time, (char *)&_buffer[4], sizeof(time));
    QDateTime dateTime = QDateTime::currentDateTime();
    qint64 t1 = dateTime.toMSecsSinceEpoch();
    dateTime.setTime(QTime(0, 0, 0, 0));
    qint64 t2 = dateTime.toMSecsSinceEpoch();
    qint64 t3 = t2 + time;
    dateTime.setMSecsSinceEpoch(t3);*/

    int calc_checksum = checkSum(_buffer + 2, _size - 3);

    messVO.prefix = static_cast<uint16_t>(prefix);
    messVO.len = static_cast<uint16_t>(len);
    messVO.information_type = static_cast<uint8_t>(information_type);
    messVO.time = time_r;
    messVO.radar_ID = radarID;
    messVO.destination_ID = destID;
    messVO.information_label = information_label;
    messVO.track_number = track_number;
    messVO.distance = distance * DISTANCE_DIVIDER;
    messVO.bearing = bearing * BEARING_DIVIDER;
    messVO.height = height * HEIGHT_DIVIDER;
    messVO.speed = speed * SPEED_DIVIDER;
    double speed_inmc = messVO.speed / (SPEED_DIVIDER * 10);
    messVO.course = course * COURSE_DIVIDER;
    messVO.support_mode = static_cast<uint8_t>(support_mode);
    messVO.height_mode = static_cast<uint8_t>(height_mode);
    messVO.point_trace_source = static_cast<uint8_t>(point_trace_source);
    messVO.track_quality = static_cast<uint8_t>(quality);
    if (correction_flag == 1)
        messVO.correction_flag = true;
    if (first_point_flag == 1)
        messVO.first_point_flag = true;
    if (delete_flag == 1)
        messVO.delete_flag = true;
    if (simulation_flag == 1)
        messVO.simulation_flag = true;
    if (fof_flag == 1)
        messVO.fof_flag = true;
    messVO.friend_or_foe = static_cast<uint8_t>(fof);
    if (class_label_flag == 1)
        messVO.class_label_flag = true;
    messVO.type_class = static_cast<uint8_t>(type_class);
    if (quantity_flag == 1)
        messVO.quantity_flag = true;
    messVO.quantity = static_cast<uint8_t>(quantity);
    messVO.checksum = static_cast<uint8_t>(checksum);

    std::cout << color<Black, White> << std::endl; // черный текст на белом фоне
    std::cout << "___________________" << std::endl;
    std::cout << "| jh18::DecoderVO |" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "     | prefix : "
              << " len : "
              << " inf.type : "
              << " radarID : "
              << " destID : "
              << " inf.label : "
              << " num.track : "
              << " distance (m): "
              << " bearing: ";
    std::cout << " height : "
              << " speed (km/h): "
              << " course : "
              << " sup.mode "
              << " height mode : "
              << " quality: "
              << " simulation: "
              << " delete: fist: "
              << " have FOF: "
              << " Friend/Foe: ";
    std::cout << " is mainframe: "
              << " type: "
              << "  ?  : quantity "
              << " cheksum" << std::endl;

    std::cout << std::hex << " hex | " << (int)messVO.prefix << "       " << (int)messVO.len << "       " << (int)messVO.information_type;
    std::cout << "          " << (int)messVO.radar_ID << "       " << (int)messVO.destination_ID << "       " << (int)messVO.information_label;
    std::cout << "          " << color<Red, White> << (int)messVO.track_number << color<Black, White>;
    std::cout << "            " << color<Blue, White> << (int)distance << color<Black, White>;
    std::cout << "          " << color<Green, White> << (int)bearing << color<Black, White>;
    std::cout << "       " << color<Brown, White> << (int)height << color<Black, White>;
    std::cout << "        " << color<LightRed, White> << (int)speed << color<Black, White>;
    std::cout << "            " << (int)course;
    std::cout << "        " << (int)messVO.support_mode;
    std::cout << "        " << (int)messVO.height_mode;
    std::cout << "              " << (int)messVO.track_quality;
    std::cout << "          " << (int)messVO.first_point_flag;
    std::cout << "          " << (int)messVO.delete_flag;
    std::cout << "          " << (int)messVO.simulation_flag;
    std::cout << "           " << (int)messVO.fof_flag;
    std::cout << "           " << (int)messVO.friend_or_foe;
    std::cout << "           " << (int)messVO.class_label_flag;
    std::cout << "              " << (int)messVO.type_class;
    std::cout << "        " << (int)messVO.quantity_flag;
    std::cout << "        " << (int)messVO.quantity;
    std::cout << "     " << (int)messVO.checksum << std::endl;

    std::cout << std::dec << " dec | " << (int)messVO.prefix << "      " << (int)messVO.len << "       " << (int)messVO.information_type;
    std::cout << "          " << (int)messVO.radar_ID << "      " << (int)messVO.destination_ID << "       " << (int)messVO.information_label;
    std::cout << "          " << color<Red, White> << (int)messVO.track_number << color<Black, White>;
    std::cout << "            " << color<Blue, White> << (int)messVO.distance << color<Black, White>;
    std::cout << "        " << color<Green, White> << (double)messVO.bearing << color<Black, White>;
    std::cout << "    " << color<Brown, White> << (int)messVO.height << color<Black, White>;
    std::cout << "        " << color<LightRed, White> << (double)messVO.speed << color<Black, White>;
    std::cout << "         " << (double)messVO.course;
    std::cout << "       " << (int)messVO.support_mode;
    std::cout << "        " << (int)messVO.height_mode;
    std::cout << "              " << (int)messVO.track_quality;
    std::cout << "          " << (int)messVO.first_point_flag;
    std::cout << "          " << (int)messVO.delete_flag;
    std::cout << "         " << (int)messVO.simulation_flag;
    std::cout << "           " << (int)messVO.fof_flag;
    std::cout << "           " << (int)messVO.friend_or_foe;
    std::cout << "           " << (int)messVO.class_label_flag;
    std::cout << "              " << (int)messVO.type_class;
    std::cout << "        " << (int)messVO.quantity_flag;
    std::cout << "        " << (int)messVO.quantity;
    std::cout << "     " << (int)messVO.checksum << std::endl;

    return required_length;
}

int jh18::CoderDISAPPEARANCE(MessageDISAPPEARANCE& messVO, unsigned char* _buffer, const int& _size)
{
    const int required_length = JH18_DISAPPEARANCE_SIZE;

    if (_size < required_length) {
        return -1;
    }

    memset(_buffer, 0, required_length);

    int prefix = 0xffff;
    insertInt(_buffer, prefix, PREFIX_POSITION, PREFIX_SIZE);
    int len = JH18_DISAPPEARANCE_SIZE - 2;
    int len_low;
    int len_high;
    convert16_to_high8_and_low8(len, len_high, len_low);
    insertInt(_buffer, len_low, LEN_LOWER_POSITION, LEN_LOWER_SIZE);
    insertInt(_buffer, messVO.information_type, INFORMATION_TYPE_POSITION, INFORMATION_TYPE_SIZE);
    insertInt(_buffer, len_high, LEN_HIGH_POSITION, LEN_HIGH_SIZE);

    uint32_t time = 1425364562; //взять текущее время
    int timeHH;
    int timeH, timeM, timeL;
    convert32_to_hhigh8_high8_med8_low8(messVO.time, timeHH, timeH, timeM, timeL);
    insertInt(_buffer, timeL, TIME1_POSITION, TIME1_SIZE);
    insertInt(_buffer, timeM, TIME2_POSITION, TIME2_SIZE);
    insertInt(_buffer, timeH, TIME3_POSITION, TIME3_SIZE);
    insertInt(_buffer, timeHH, TIME4_POSITION, TIME4_SIZE);
    int sdi_h, sdi_l;
    convert16_to_high8_and_low8(messVO.radar_ID, sdi_h, sdi_l);
    insertInt(_buffer, sdi_l, RADARID_LOWER_POSITION, RADARID_LOWER_SIZE);
    insertInt(_buffer, sdi_h, RADARID_HIGH_POSITION, RADARID_HIGH_SIZE);
    int ddi_h, ddi_l;
    convert16_to_high8_and_low8(messVO.destination_ID, ddi_h, ddi_l);
    insertInt(_buffer, ddi_l, DESTINATIONID_LOWER_POSITION, DESTINATIONID_LOWER_SIZE);
    insertInt(_buffer, ddi_h, DESTINATIONID_HIGH_POSITION, DESTINATIONID_HIGH_SIZE);
    int il_h, il_l;
    convert16_to_high8_and_low8(messVO.information_label, il_h, il_l);
    insertInt(_buffer, il_l, INFORMLABEL_LOWER_POSITION, INFORMLABEL_LOWER_SIZE);
    insertInt(_buffer, il_h, INFORMLABEL_HIGH_POSITION, INFORMLABEL_HIGH_SIZE);
    int tr_n_low;
    int tr_n_high;
    convert16_to_high8_and_low8(messVO.track_number, tr_n_high, tr_n_low);
    insertInt(_buffer, tr_n_low, TRACKNUMBER_LOWER_POSITION, TRACKNUMBER_LOWER_SIZE);
    insertInt(_buffer, tr_n_high, TRACKNUMBER_HIGH_POSITION, TRACKNUMBER_HIGH_SIZE);

    insertInt(_buffer, messVO.support_mode, SUPPORTMODE_POSITION, SUPPORTMODE_SIZE);
    insertInt(_buffer, messVO.height_mode, HEIGHTMODE_POSITION, HEIGHTMODE_SIZE);
    insertInt(_buffer, messVO.point_trace_source, POINTTRACESOURCE_POSITION, POINTTRACESOURCE_SIZE);
    insertInt(_buffer, messVO.track_quality, TRACKQUALITY_POSITION, TRACKQUALITY_SIZE);
    insertInt(_buffer, messVO.correction_flag, CORRECTIONFLAG_POSITION, CORRECTIONFLAG_SIZE);
    insertInt(_buffer, messVO.first_point_flag, FIRSTPOINTFLAG_POSITION, FIRSTPOINTFLAG_SIZE);
    /*!!!!!!*/ insertInt(_buffer, messVO.delete_flag, DELETEFLAG_POSITION, DELETEFLAG_SIZE);

    insertInt(_buffer, messVO.mock_logo, SIMULATIONFLAG_POSITION, SIMULATIONFLAG_SIZE);

    int calc_checksum = checkSum(_buffer + 2, _size - 3);
    insertInt(_buffer, calc_checksum, CHECKSUM_POSITION, CHECKSUM_SIZE); //????

    std::cout << " Output from Coder VO  :" << std::endl;
    for (int i = 0; i < _size; ++i)
        std::cout << std::hex << (int)_buffer[i] << " ";
    std::cout << std::dec << std::endl;

    return required_length;
}

int jh18::DecoderDISAPPEARANCE(MessageDISAPPEARANCE& messVO, unsigned char* _buffer, const int& _size)
{
    const int required_length = JH18_DISAPPEARANCE_SIZE;

    if (_size < required_length) {
        return -1;
    }

    int prefix = extractInt(_buffer, PREFIX_POSITION, PREFIX_SIZE);
    int len_lower = extractInt(_buffer, LEN_LOWER_POSITION, LEN_LOWER_SIZE);
    int information_type = extractInt(_buffer, INFORMATION_TYPE_POSITION, INFORMATION_TYPE_SIZE);
    int len_high = extractInt(_buffer, LEN_HIGH_POSITION, LEN_HIGH_SIZE);
    int time1 = extractInt(_buffer, TIME1_POSITION, TIME1_SIZE);
    int time2 = extractInt(_buffer, TIME2_POSITION, TIME2_SIZE);
    int time3 = extractInt(_buffer, TIME3_POSITION, TIME3_SIZE);
    int time4 = extractInt(_buffer, TIME4_POSITION, TIME4_SIZE);
    int radarID_lower = extractInt(_buffer, RADARID_LOWER_POSITION, RADARID_LOWER_SIZE);
    int radarID_high = extractInt(_buffer, RADARID_HIGH_POSITION, RADARID_HIGH_SIZE);
    int destID_lower = extractInt(_buffer, DESTINATIONID_LOWER_POSITION, DESTINATIONID_LOWER_SIZE);
    int destID_high = extractInt(_buffer, DESTINATIONID_HIGH_POSITION, DESTINATIONID_HIGH_SIZE);
    int informationLabel_lower = extractInt(_buffer, INFORMLABEL_LOWER_POSITION, INFORMLABEL_LOWER_SIZE);
    int informationLabel_high = extractInt(_buffer, INFORMLABEL_HIGH_POSITION, INFORMLABEL_HIGH_SIZE);
    int tracknumber_lower = extractInt(_buffer, TRACKNUMBER_LOWER_POSITION, TRACKNUMBER_LOWER_SIZE);
    int tracknumber_high = extractInt(_buffer, TRACKNUMBER_HIGH_POSITION, TRACKNUMBER_HIGH_SIZE);
    int support_mode = extractInt(_buffer, SUPPORTMODE_POSITION, SUPPORTMODE_SIZE);
    int height_mode = extractInt(_buffer, HEIGHTMODE_POSITION, HEIGHTMODE_SIZE);
    int point_trace_source = extractInt(_buffer, POINTTRACESOURCE_POSITION, POINTTRACESOURCE_SIZE);

    int quality = extractInt(_buffer, TRACKQUALITY_POSITION, TRACKQUALITY_SIZE);
    int correction_flag = extractInt(_buffer, CORRECTIONFLAG_POSITION, CORRECTIONFLAG_SIZE);
    int first_point_flag = extractInt(_buffer, FIRSTPOINTFLAG_POSITION, FIRSTPOINTFLAG_SIZE);
    int delete_flag = extractInt(_buffer, DELETEFLAG_POSITION, DELETEFLAG_SIZE);
    int mock_logo_flag = extractInt(_buffer, SIMULATIONFLAG_POSITION, SIMULATIONFLAG_SIZE); //?

    int checksum = extractInt(_buffer, CHECKSUM_POSITION, CHECKSUM_SIZE); // ?????

    int len = len_high << 8;
    len += len_lower;

    int time_r = time4 << 24;
    time_r += time3 << 16;
    time_r += time2 << 8;
    time_r += time1;

    uint16_t radarID = radarID_high << 8;
    radarID += radarID_lower;

    uint16_t destID = destID_high << 8;
    destID += destID_lower;

    uint16_t information_label = informationLabel_high << 8;
    information_label += informationLabel_lower;

    uint16_t track_number = tracknumber_high << 8;
    track_number += tracknumber_lower;

    int calc_checksum = checkSum(_buffer + 2, _size - 3);

    messVO.prefix = static_cast<uint16_t>(prefix);
    messVO.len = static_cast<uint16_t>(len);
    messVO.information_type = static_cast<uint8_t>(information_type);
    messVO.time = time_r;
    messVO.radar_ID = radarID;
    messVO.destination_ID = destID;
    messVO.information_label = information_label;
    messVO.track_number = track_number;
    messVO.support_mode = static_cast<uint8_t>(support_mode);
    messVO.height_mode = static_cast<uint8_t>(height_mode);
    messVO.point_trace_source = static_cast<uint8_t>(point_trace_source);
    messVO.track_quality = static_cast<uint8_t>(quality);
    if (correction_flag == 1)
        messVO.correction_flag = true;
    if (first_point_flag == 1)
        messVO.first_point_flag = true;
    if (delete_flag == 1)
        messVO.delete_flag = true;

    messVO.mock_logo = mock_logo_flag;
    messVO.checksum = static_cast<uint8_t>(checksum);

    std::cout << color<Black, White> << std::endl; // черный текст на белом фоне
    std::cout << "___________________" << std::endl;
    std::cout << "| jh18::DecoderDISAPPEARANCE |" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "     | prefix : "
              << " len : "
              << " inf.type : "
              << " radarID : "
              << " destID : "
              << " inf.label : "
              << " num.track : "
              << " sup.mode "
              << " height mode : "
              << " quality: "
              << " simulation: "
              << " delete: fist: "
              << " have FOF: "
              << " Friend/Foe: ";
    std::cout << " is mainframe: "
              << " type: "
              << "  ?  : quantity "
              << " cheksum" << std::endl;

    std::cout << std::hex << " hex | " << (int)messVO.prefix << "       " << (int)messVO.len << "       " << (int)messVO.information_type;
    std::cout << "          " << (int)messVO.radar_ID << "       " << (int)messVO.destination_ID << "       " << (int)messVO.information_label;
    std::cout << "          " << color<Red, White> << (int)messVO.track_number << color<Black, White>;
    std::cout << "        " << (int)messVO.support_mode;
    std::cout << "        " << (int)messVO.height_mode;
    std::cout << "              " << (int)messVO.track_quality;
    std::cout << "          " << (int)messVO.first_point_flag;
    std::cout << "          " << (int)messVO.delete_flag;
    std::cout << "     " << (int)messVO.checksum << std::endl;

    std::cout << std::dec << " dec | " << (int)messVO.prefix << "      " << (int)messVO.len << "       " << (int)messVO.information_type;
    std::cout << "          " << (int)messVO.radar_ID << "      " << (int)messVO.destination_ID << "       " << (int)messVO.information_label;
    std::cout << "          " << color<Red, White> << (int)messVO.track_number << color<Black, White>;
    std::cout << "       " << (int)messVO.support_mode;
    std::cout << "        " << (int)messVO.height_mode;
    std::cout << "              " << (int)messVO.track_quality;
    std::cout << "          " << (int)messVO.first_point_flag;
    std::cout << "          " << (int)messVO.delete_flag;
    std::cout << "     " << (int)messVO.checksum << std::endl;

    return required_length;
}

int jh18::CoderSECTOR(MessageSECTOR& messVO, unsigned char* _buffer, const int& _size)
{
    const int required_length = JH18_SECTOR_SIZE;

    if (_size < required_length) {
        return -1;
    }

    memset(_buffer, 0, required_length);

    int prefix = 0xffff;
    insertInt(_buffer, prefix, PREFIX_POSITION, PREFIX_SIZE);
    int len = JH18_SECTOR_SIZE - 2;
    int len_low;
    int len_high;
    convert16_to_high8_and_low8(len, len_high, len_low);
    insertInt(_buffer, len_low, LEN_LOWER_POSITION, LEN_LOWER_SIZE);
    insertInt(_buffer, messVO.information_type, INFORMATION_TYPE_POSITION, INFORMATION_TYPE_SIZE);
    insertInt(_buffer, len_high, LEN_HIGH_POSITION, LEN_HIGH_SIZE);

    int timeHH;
    int timeH, timeM, timeL;
    convert32_to_hhigh8_high8_med8_low8(messVO.time, timeHH, timeH, timeM, timeL);
    insertInt(_buffer, timeL, TIME1_POSITION, TIME1_SIZE);
    insertInt(_buffer, timeM, TIME2_POSITION, TIME2_SIZE);
    insertInt(_buffer, timeH, TIME3_POSITION, TIME3_SIZE);
    insertInt(_buffer, timeHH, TIME4_POSITION, TIME4_SIZE);
    int sdi_h, sdi_l;
    convert16_to_high8_and_low8(messVO.radar_ID, sdi_h, sdi_l);
    insertInt(_buffer, sdi_l, RADARID_LOWER_POSITION, RADARID_LOWER_SIZE);
    insertInt(_buffer, sdi_h, RADARID_HIGH_POSITION, RADARID_HIGH_SIZE);
    int ddi_h, ddi_l;
    convert16_to_high8_and_low8(messVO.destination_ID, ddi_h, ddi_l);
    insertInt(_buffer, ddi_l, DESTINATIONID_LOWER_POSITION, DESTINATIONID_LOWER_SIZE);
    insertInt(_buffer, ddi_h, DESTINATIONID_HIGH_POSITION, DESTINATIONID_HIGH_SIZE);
    int il_h, il_l;
    convert16_to_high8_and_low8(messVO.information_label, il_h, il_l);
    insertInt(_buffer, il_l, INFORMLABEL_LOWER_POSITION, INFORMLABEL_LOWER_SIZE);
    insertInt(_buffer, il_h, INFORMLABEL_HIGH_POSITION, INFORMLABEL_HIGH_SIZE);

    insertInt(_buffer, messVO.sector_number, SECTORNUMBER_POSITION, SECTORNUMBER_SIZE);
    insertInt(_buffer, messVO.scan_number, SCANNUMBER_POSITION, SCANNUMBER_SIZE);

    int calc_checksum = checkSum(_buffer + 2, _size - 3);
    insertInt(_buffer, calc_checksum, CHECKSUMSECTOR_POSITION, CHECKSUMSECOR_SIZE);

    std::cout << " Output from Coder SECTOR  :" << std::endl;
    for (int i = 0; i < _size; ++i)
        std::cout << std::hex << (int)_buffer[i] << " ";
    std::cout << std::dec << std::endl;

    return required_length;
}

int jh18::DecoderSECTOR(MessageSECTOR& messVO, unsigned char* _buffer, const int& _size)
{
    const int required_length = JH18_SECTOR_SIZE;

    if (_size < required_length) {
        return -1;
    }

    int prefix = extractInt(_buffer, PREFIX_POSITION, PREFIX_SIZE);
    int len_lower = extractInt(_buffer, LEN_LOWER_POSITION, LEN_LOWER_SIZE);
    int information_type = extractInt(_buffer, INFORMATION_TYPE_POSITION, INFORMATION_TYPE_SIZE);
    int len_high = extractInt(_buffer, LEN_HIGH_POSITION, LEN_HIGH_SIZE);
    int time1 = extractInt(_buffer, TIME1_POSITION, TIME1_SIZE);
    int time2 = extractInt(_buffer, TIME2_POSITION, TIME2_SIZE);
    int time3 = extractInt(_buffer, TIME3_POSITION, TIME3_SIZE);
    int time4 = extractInt(_buffer, TIME4_POSITION, TIME4_SIZE);
    int radarID_lower = extractInt(_buffer, RADARID_LOWER_POSITION, RADARID_LOWER_SIZE);
    int radarID_high = extractInt(_buffer, RADARID_HIGH_POSITION, RADARID_HIGH_SIZE);
    int destID_lower = extractInt(_buffer, DESTINATIONID_LOWER_POSITION, DESTINATIONID_LOWER_SIZE);
    int destID_high = extractInt(_buffer, DESTINATIONID_HIGH_POSITION, DESTINATIONID_HIGH_SIZE);
    int informationLabel_lower = extractInt(_buffer, INFORMLABEL_LOWER_POSITION, INFORMLABEL_LOWER_SIZE);
    int informationLabel_high = extractInt(_buffer, INFORMLABEL_HIGH_POSITION, INFORMLABEL_HIGH_SIZE);

    int sector_number = extractInt(_buffer, SECTORNUMBER_POSITION, SECTORNUMBER_SIZE);
    int scan_number = extractInt(_buffer, SCANNUMBER_POSITION, SCANNUMBER_SIZE);

    int checksum = extractInt(_buffer, CHECKSUMSECTOR_POSITION, CHECKSUMSECOR_SIZE);

    int len = len_high << 8;
    len += len_lower;

    int time_r = time4 << 24;
    time_r += time3 << 16;
    time_r += time2 << 8;
    time_r += time1;

    uint16_t radarID = radarID_high << 8;
    radarID += radarID_lower;

    uint16_t destID = destID_high << 8;
    destID += destID_lower;

    uint16_t information_label = informationLabel_high << 8;
    information_label += informationLabel_lower;

    int calc_checksum = checkSum(_buffer + 2, _size - 3);

    messVO.prefix = static_cast<uint16_t>(prefix);
    messVO.len = static_cast<uint16_t>(len);
    messVO.information_type = static_cast<uint8_t>(information_type);
    messVO.time = time_r;
    messVO.radar_ID = radarID;
    messVO.destination_ID = destID;
    messVO.information_label = information_label;
    messVO.sector_number = static_cast<uint8_t>(sector_number);
    messVO.scan_number = static_cast<uint8_t>(scan_number);

    messVO.checksum = static_cast<uint8_t>(checksum);

    std::cout << color<Black, White> << std::endl; // черный текст на белом фоне
    std::cout << "______________________" << std::endl;
    std::cout << "| jh18::DecoderSECTOR |" << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "     | prefix : "
              << " len : "
              << " inf.type : "
              << " radarID : "
              << " destID : "
              << " inf.label : "
              << " sector_number : "
              << " scan_number "
              << " cheksum" << std::endl;

    std::cout << std::hex << " hex | " << (int)messVO.prefix << "       " << (int)messVO.len << "       " << (int)messVO.information_type;
    std::cout << "          " << (int)messVO.radar_ID << "       " << (int)messVO.destination_ID << "        " << (int)messVO.information_label;
    std::cout << "           " << color<Red, White> << (int)messVO.sector_number << color<Black, White>;
    std::cout << "               " << (int)messVO.scan_number;
    std::cout << "           " << (int)messVO.checksum << std::endl;

    std::cout << std::dec << " dec | " << (int)messVO.prefix << "      " << (int)messVO.len << "      " << (int)messVO.information_type;
    std::cout << "          " << (int)messVO.radar_ID << "       " << (int)messVO.destination_ID << "        " << (int)messVO.information_label;
    std::cout << "           " << color<Red, White> << (int)messVO.sector_number << color<Black, White>;
    std::cout << "               " << (int)messVO.scan_number;
    std::cout << "           " << (int)messVO.checksum << std::endl;

    return required_length;
}

int jh18::CoderNETTED(MessageNETTED& messVO, unsigned char* _buffer, const int& _size)
{
    const int required_length = JH18_NETTED_SIZE;

    if (_size < required_length) {
        return -1;
    }

    memset(_buffer, 0, required_length);

    int prefix = 0xffff;
    insertInt(_buffer, prefix, PREFIX_POSITION, PREFIX_SIZE);
    int len = JH18_NETTED_SIZE - 2;
    int len_low;
    int len_high;
    convert16_to_high8_and_low8(len, len_high, len_low);
    insertInt(_buffer, len_low, LEN_LOWER_POSITION, LEN_LOWER_SIZE);
    insertInt(_buffer, messVO.information_type, INFORMATION_TYPE_POSITION, INFORMATION_TYPE_SIZE);
    insertInt(_buffer, len_high, LEN_HIGH_POSITION, LEN_HIGH_SIZE);

    int timeHH;
    int timeH, timeM, timeL;
    convert32_to_hhigh8_high8_med8_low8(messVO.time, timeHH, timeH, timeM, timeL);
    insertInt(_buffer, timeL, TIME1_POSITION, TIME1_SIZE);
    insertInt(_buffer, timeM, TIME2_POSITION, TIME2_SIZE);
    insertInt(_buffer, timeH, TIME3_POSITION, TIME3_SIZE);
    insertInt(_buffer, timeHH, TIME4_POSITION, TIME4_SIZE);
    int sdi_h, sdi_l;
    convert16_to_high8_and_low8(messVO.radar_ID, sdi_h, sdi_l);
    insertInt(_buffer, sdi_l, RADARID_LOWER_POSITION, RADARID_LOWER_SIZE);
    insertInt(_buffer, sdi_h, RADARID_HIGH_POSITION, RADARID_HIGH_SIZE);
    int ddi_h, ddi_l;
    convert16_to_high8_and_low8(messVO.destination_ID, ddi_h, ddi_l);
    insertInt(_buffer, ddi_l, DESTINATIONID_LOWER_POSITION, DESTINATIONID_LOWER_SIZE);
    insertInt(_buffer, ddi_h, DESTINATIONID_HIGH_POSITION, DESTINATIONID_HIGH_SIZE);
    int il_h, il_l;
    convert16_to_high8_and_low8(messVO.information_label, il_h, il_l);
    insertInt(_buffer, il_l, INFORMLABEL_LOWER_POSITION, INFORMLABEL_LOWER_SIZE);
    insertInt(_buffer, il_h, INFORMLABEL_HIGH_POSITION, INFORMLABEL_HIGH_SIZE);
    insertInt(_buffer, messVO.response, RESPONSEBIT_POSITION, RESPONSEBIT_SIZE);
    int rsdm_l, rsdm_h;
    convert16_to_high8_and_low8(messVO.radar_id, rsdm_h, rsdm_l);
    insertInt(_buffer, rsdm_l, RADARSTATIONDEPARTMENTMARK_LOW_POSITION, RADARSTATIONDEPARTMENTMARK_LOW_SIZE);
    insertInt(_buffer, rsdm_h, RADARSTATIONDEPARTMENTMARK_HIGH_POSITION, RADARSTATIONDEPARTMENTMARK_HIGH_SIZE);
    int long_hh, long_h, long_m, long_l;
    uint32_t longitude = uint32_t(messVO.radar_longitude / RADARLONGITUDE_DIVIDER);
    convert32_to_hhigh8_high8_med8_low8(longitude, long_hh, long_h, long_m, long_l);
    insertInt(_buffer, long_l, RADARLONGITUDELOW_POSITION, RADARLONGITUDELOW_SIZE);
    insertInt(_buffer, long_m, RADARLONGITUDEMED_POSITION, RADARLONGITUDEMED_SIZE);
    insertInt(_buffer, long_h, RADARLONGITUDEHIGH_POSITION, RADARLONGITUDEHIGH_SIZE);
    insertInt(_buffer, long_hh, RADARLONGITUDEHHIGH_POSITION, RADARLONGITUDEHHIGH_SIZE);
    int lat_hh, lat_h, lat_m, lat_l;
    uint32_t latitude = uint32_t(messVO.radar_latitude / RADARLATITUDE_DIVIDER);
    convert32_to_hhigh8_high8_med8_low8(latitude, lat_hh, lat_h, lat_m, lat_l);
    insertInt(_buffer, lat_l, RADARLATITUDELOW_POSITION, RADARLATITUDELOW_SIZE);
    insertInt(_buffer, lat_m, RADARLATITUDEMED_POSITION, RADARLATITUDEMED_SIZE);
    insertInt(_buffer, lat_h, RADARLATITUDEHIGH_POSITION, RADARLATITUDEHIGH_SIZE);
    insertInt(_buffer, lat_hh, RADARLATITUDEHHIGH_POSITION, RADARLATITUDEHHIGH_SIZE);
    int altitude_h, altitude_l;
    uint16_t altitude = messVO.radar_altitude / RADARALTITUDE_DIVIDER;
    convert16_to_high8_and_low8(altitude, altitude_h, altitude_l);
    insertInt(_buffer, altitude_l, RADARALTITUDE_LOW_POSITION, RADARALTITUDE_LOW_SIZE);
    insertInt(_buffer, altitude_h, RADARALTITUDE_HIGH_POSITION, RADARALTITUDE_HIGH_SIZE);
    insertInt(_buffer, messVO.system_status, SYSTEMSTATUS_POSITION, SYSTEMSTATUS_SIZE);
    insertInt(_buffer, messVO.channel_type, CHANNELTYPE_POSITION, CHANNELTYPE_SIZE);

    memcpy(&_buffer[27], &messVO.radar_name, sizeof(messVO.radar_name));

    int calc_checksum = checkSum(_buffer + 2, _size - 3);
    insertInt(_buffer, calc_checksum, CHECKSUMNETTED_POSITION, CHECKSUMNETTED_SIZE);

    std::cout << " Output from Coder NETTED  :" << std::endl;
    for (int i = 0; i < _size; ++i)
        std::cout << std::hex << (int)_buffer[i] << " ";
    std::cout << std::dec << std::endl;

    return required_length;
}

int jh18::DecoderNETTED(MessageNETTED& messVO, unsigned char* _buffer, const int& _size)
{
    const int required_length = JH18_NETTED_SIZE;

    if (_size < required_length) {
        return -1;
    }
    int prefix = extractInt(_buffer, PREFIX_POSITION, PREFIX_SIZE);
    int len_lower = extractInt(_buffer, LEN_LOWER_POSITION, LEN_LOWER_SIZE);
    int information_type = extractInt(_buffer, INFORMATION_TYPE_POSITION, INFORMATION_TYPE_SIZE);
    int len_high = extractInt(_buffer, LEN_HIGH_POSITION, LEN_HIGH_SIZE);
    int time1 = extractInt(_buffer, TIME1_POSITION, TIME1_SIZE);
    int time2 = extractInt(_buffer, TIME2_POSITION, TIME2_SIZE);
    int time3 = extractInt(_buffer, TIME3_POSITION, TIME3_SIZE);
    int time4 = extractInt(_buffer, TIME4_POSITION, TIME4_SIZE);
    int radarID_lower = extractInt(_buffer, RADARID_LOWER_POSITION, RADARID_LOWER_SIZE);
    int radarID_high = extractInt(_buffer, RADARID_HIGH_POSITION, RADARID_HIGH_SIZE);
    int destID_lower = extractInt(_buffer, DESTINATIONID_LOWER_POSITION, DESTINATIONID_LOWER_SIZE);
    int destID_high = extractInt(_buffer, DESTINATIONID_HIGH_POSITION, DESTINATIONID_HIGH_SIZE);
    int informationLabel_lower = extractInt(_buffer, INFORMLABEL_LOWER_POSITION, INFORMLABEL_LOWER_SIZE);
    int informationLabel_high = extractInt(_buffer, INFORMLABEL_HIGH_POSITION, INFORMLABEL_HIGH_SIZE);
    int responce = extractInt(_buffer, RESPONSEBIT_POSITION, RESPONSEBIT_SIZE);
    int rsdm_l = extractInt(_buffer, RADARSTATIONDEPARTMENTMARK_LOW_POSITION, RADARSTATIONDEPARTMENTMARK_LOW_SIZE);
    int rsdm_h = extractInt(_buffer, RADARSTATIONDEPARTMENTMARK_HIGH_POSITION, RADARSTATIONDEPARTMENTMARK_HIGH_SIZE);
    int longitude_l = extractInt(_buffer, RADARLONGITUDELOW_POSITION, RADARLONGITUDELOW_SIZE);
    int longitude_m = extractInt(_buffer, RADARLONGITUDEMED_POSITION, RADARLONGITUDEMED_SIZE);
    int longitude_h = extractInt(_buffer, RADARLONGITUDEHIGH_POSITION, RADARLONGITUDEHIGH_SIZE);
    int longitude_hh = extractInt(_buffer, RADARLONGITUDEHHIGH_POSITION, RADARLONGITUDEHHIGH_SIZE);
    int latitude_l = extractInt(_buffer, RADARLATITUDELOW_POSITION, RADARLATITUDELOW_SIZE);
    int latitude_m = extractInt(_buffer, RADARLATITUDEMED_POSITION, RADARLATITUDEMED_SIZE);
    int latitude_h = extractInt(_buffer, RADARLATITUDEHIGH_POSITION, RADARLATITUDEHIGH_SIZE);
    int latitude_hh = extractInt(_buffer, RADARLATITUDEHHIGH_POSITION, RADARLATITUDEHHIGH_SIZE);
    int radar_altitude_lower = extractInt(_buffer, RADARALTITUDE_LOW_POSITION, RADARALTITUDE_LOW_SIZE);
    int radar_altitude_high = extractInt(_buffer, RADARALTITUDE_HIGH_POSITION, RADARALTITUDE_HIGH_SIZE);
    int system_status = extractInt(_buffer, SYSTEMSTATUS_POSITION, SYSTEMSTATUS_SIZE);
    int channel_type = extractInt(_buffer, CHANNELTYPE_POSITION, CHANNELTYPE_SIZE);

    char radar_name[15] = { 0 };
    memcpy(&radar_name, &_buffer[27], sizeof(radar_name));

    int checksum = extractInt(_buffer, CHECKSUMNETTED_POSITION, CHECKSUMNETTED_SIZE);

    int len = len_high << 8;
    len += len_lower;

    int time_r = time4 << 24;
    time_r += time3 << 16;
    time_r += time2 << 8;
    time_r += time1;

    uint16_t radarID = radarID_high << 8;
    radarID += radarID_lower;

    uint16_t destID = destID_high << 8;
    destID += destID_lower;

    uint16_t information_label = informationLabel_high << 8;
    information_label += informationLabel_lower;

    uint16_t rsdm = rsdm_h << 8;
    rsdm += rsdm_l;

    int longitude = longitude_hh << 24;
    longitude += longitude_h << 16;
    longitude += longitude_m << 8;
    longitude += longitude_l;

    int latitude = latitude_hh << 24;
    latitude += latitude_h << 16;
    latitude += latitude_m << 8;
    latitude += latitude_l;

    uint16_t altitude = radar_altitude_high << 8;
    altitude += radar_altitude_lower;

    int calc_checksum = checkSum(_buffer + 2, _size - 3);

    messVO.prefix = static_cast<uint16_t>(prefix);
    messVO.len = static_cast<uint16_t>(len);
    messVO.information_type = static_cast<uint8_t>(information_type);
    messVO.time = time_r;
    messVO.radar_ID = radarID;
    messVO.destination_ID = destID;
    messVO.information_label = information_label;
    messVO.response = static_cast<uint8_t>(responce);
    messVO.radar_id = rsdm;
    messVO.radar_longitude = longitude * RADARLONGITUDE_DIVIDER;
    int grad_long, min_long, sec_long;
    doubleCoordInGradMinSec(messVO.radar_longitude, grad_long, min_long, sec_long);
    messVO.radar_latitude = latitude * RADARLATITUDE_DIVIDER;
    int grad_lat, min_lat, sec_lat;
    doubleCoordInGradMinSec(messVO.radar_latitude, grad_lat, min_lat, sec_lat);
    messVO.radar_altitude = altitude * RADARALTITUDE_DIVIDER;
    messVO.system_status = static_cast<uint8_t>(system_status);
    messVO.channel_type = static_cast<uint8_t>(channel_type);
    memcpy(&messVO.radar_name, &radar_name, sizeof(radar_name));

    messVO.checksum = static_cast<uint8_t>(checksum);

    std::cout << color<Black, White> << std::endl; // черный текст на белом фоне
    std::cout << "______________________" << std::endl;
    std::cout << "| jh18::DecoderNETTED |" << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "     | prefix : "
              << " len : "
              << " inf.type : "
              << " radarID : "
              << " destID : "
              << " inf.label : "
              << " responce : "
              << " rsdm : "
              << "        LONG : "
              << "        grad : "
              << "      min : "
              << "        sec : "
              << "        LAT : "
              << "        grad : "
              << "      min : "
              << "        sec : "
              << " altitude : "
              << " system status : "
              << " channel type : "
              << " cheksum :"
              << " calc_cheksum :" << std::endl;

    std::cout << std::hex << " hex | " << (int)messVO.prefix << "       " << (int)messVO.len << "      " << (int)messVO.information_type;
    std::cout << "          " << (int)messVO.radar_ID << "       " << (int)messVO.destination_ID << "        " << (int)messVO.information_label;
    std::cout << "           " << (int)messVO.response;
    std::cout << "           " << (int)messVO.radar_id;
    std::cout << "           " << (int)longitude;
    std::cout << "           " << (int)grad_long;
    std::cout << "           " << (int)min_long;
    std::cout << "           " << (int)sec_long;
    std::cout << "           " << (int)latitude;
    std::cout << "          " << (int)grad_lat;
    std::cout << "           " << (int)min_lat;
    std::cout << "           " << (int)sec_lat;
    std::cout << "           " << (int)altitude;
    std::cout << "           " << (int)messVO.system_status;
    std::cout << "           " << (int)messVO.channel_type;
    std::cout << "                " << (int)messVO.checksum;
    std::cout << "                " << (int)calc_checksum << std::endl;

    std::cout << std::dec << " dec | " << (int)messVO.prefix << "      " << (int)messVO.len << "      " << (int)messVO.information_type;
    std::cout << "          " << (int)messVO.radar_ID << "      " << (int)messVO.destination_ID << "        " << (int)messVO.information_label;
    std::cout << "           " << (int)messVO.response;
    std::cout << "           " << (int)messVO.radar_id;
    std::cout << "           " << (double)messVO.radar_longitude;
    std::cout << "           " << (int)grad_long;
    std::cout << "           " << (int)min_long;
    std::cout << "           " << (int)sec_long;
    std::cout << "           " << (double)messVO.radar_latitude;
    std::cout << "         " << (int)grad_lat;
    std::cout << "           " << (int)min_lat;
    std::cout << "           " << (int)sec_lat;
    std::cout << "           " << (int)messVO.radar_altitude;
    std::cout << "          " << (int)messVO.system_status;
    std::cout << "           " << (int)messVO.channel_type;
    std::cout << "                " << (int)messVO.checksum;
    std::cout << "                " << (int)calc_checksum << std::endl;

    return required_length;
}

int jh18::CoderVO(MessageVO& messVO, unsigned char* _buffer, const int& _size)
{
    const int required_length = JH18_VO_SIZE;

    if (_size < required_length) {
        return -1;
    }

    memset(_buffer, 0, required_length);

    int prefix = 0xffff;
    insertInt(_buffer, prefix, PREFIX_POSITION, PREFIX_SIZE);
    int len = JH18_VO_SIZE - 2;
    int len_low;
    int len_high;
    convert16_to_high8_and_low8(len, len_high, len_low);
    insertInt(_buffer, len_low, LEN_LOWER_POSITION, LEN_LOWER_SIZE);
    insertInt(_buffer, messVO.information_type, INFORMATION_TYPE_POSITION, INFORMATION_TYPE_SIZE);
    insertInt(_buffer, len_high, LEN_HIGH_POSITION, LEN_HIGH_SIZE);

    uint32_t time = 1425364562; //взять текущее время
    int timeHH;
    int timeH, timeM, timeL;
    convert32_to_hhigh8_high8_med8_low8(messVO.time, timeHH, timeH, timeM, timeL);
    insertInt(_buffer, timeL, TIME1_POSITION, TIME1_SIZE);
    insertInt(_buffer, timeM, TIME2_POSITION, TIME2_SIZE);
    insertInt(_buffer, timeH, TIME3_POSITION, TIME3_SIZE);
    insertInt(_buffer, timeHH, TIME4_POSITION, TIME4_SIZE);
    int sdi_h, sdi_l;
    convert16_to_high8_and_low8(messVO.radar_ID, sdi_h, sdi_l);
    insertInt(_buffer, sdi_l, RADARID_LOWER_POSITION, RADARID_LOWER_SIZE);
    insertInt(_buffer, sdi_h, RADARID_HIGH_POSITION, RADARID_HIGH_SIZE);
    int ddi_h, ddi_l;
    convert16_to_high8_and_low8(messVO.destination_ID, ddi_h, ddi_l);
    insertInt(_buffer, ddi_l, DESTINATIONID_LOWER_POSITION, DESTINATIONID_LOWER_SIZE);
    insertInt(_buffer, ddi_h, DESTINATIONID_HIGH_POSITION, DESTINATIONID_HIGH_SIZE);
    int il_h, il_l;
    convert16_to_high8_and_low8(messVO.information_label, il_h, il_l);
    insertInt(_buffer, il_l, INFORMLABEL_LOWER_POSITION, INFORMLABEL_LOWER_SIZE);
    insertInt(_buffer, il_h, INFORMLABEL_HIGH_POSITION, INFORMLABEL_HIGH_SIZE);
    int tr_n_low;
    int tr_n_high;
    convert16_to_high8_and_low8(messVO.track_number, tr_n_high, tr_n_low);
    insertInt(_buffer, tr_n_low, TRACKNUMBER_LOWER_POSITION, TRACKNUMBER_LOWER_SIZE);
    insertInt(_buffer, tr_n_high, TRACKNUMBER_HIGH_POSITION, TRACKNUMBER_HIGH_SIZE);
    int dist_h, dist_m, dist_l;
    convert24_to_high8_med8_low8(messVO.distance, dist_h, dist_m, dist_l);
    insertInt(_buffer, dist_l, DISTANCE_LOW_POSITION, DISTANCE_LOW_SIZE);
    insertInt(_buffer, dist_m, DISTANCE_MED_POSITION, DISTANCE_MED_SIZE);
    insertInt(_buffer, dist_h, DISTANCE_HIGH_POSITION, DISTANCE_HIGH_SIZE);
    int bearing, bearing_h, bearing_l;
    bearing = static_cast<int>(messVO.bearing / BEARING_DIVIDER);
    convert16_to_high8_and_low8(bearing, bearing_h, bearing_l);
    insertInt(_buffer, bearing_l, BEARING_LOW_POSITION, BEARING_LOW_SIZE);
    insertInt(_buffer, bearing_h, BEARING_HIGH_POSITION, BEARING_HIGH_SIZE);
    int h_h, h_l;
    convert16_to_high8_and_low8(messVO.height, h_h, h_l);
    insertInt(_buffer, h_l, HEIGHT_LOW_POSITION, HEIGHT_LOW_SIZE);
    insertInt(_buffer, h_h, HEIGHT_HIGH_POSITION, HEIGHT_HIGH_SIZE);
    int speed, s_h, s_l;
    speed = static_cast<int>((messVO.speed + 0.05) * 10);
    convert16_to_high8_and_low8(speed, s_h, s_l);
    insertInt(_buffer, s_l, SPEED_LOW_POSITION, SPEED_LOW_SIZE);
    insertInt(_buffer, s_h, SPEED_HIGH_POSITION, SPEED_HIGH_SIZE);
    int course, course_h, course_l;
    course = static_cast<int>(messVO.course / COURSE_DIVIDER);
    convert16_to_high8_and_low8(course, course_h, course_l);
    insertInt(_buffer, course_l, COURSE_LOW_POSITION, COURSE_LOW_SIZE);
    insertInt(_buffer, course_h, COURSE_HIGH_POSITION, COURSE_HIGH_SIZE);
    insertInt(_buffer, messVO.support_mode, SUPPORTMODE_POSITION, SUPPORTMODE_SIZE);
    insertInt(_buffer, messVO.height_mode, HEIGHTMODE_POSITION, HEIGHTMODE_SIZE);
    insertInt(_buffer, messVO.point_trace_source, POINTTRACESOURCE_POSITION, POINTTRACESOURCE_SIZE);
    insertInt(_buffer, messVO.track_quality, TRACKQUALITY_POSITION, TRACKQUALITY_SIZE);
    insertInt(_buffer, messVO.correction_flag, CORRECTIONFLAG_POSITION, CORRECTIONFLAG_SIZE);
    insertInt(_buffer, messVO.first_point_flag, FIRSTPOINTFLAG_POSITION, FIRSTPOINTFLAG_SIZE);
    /*!!!!!!*/ insertInt(_buffer, messVO.delete_flag, DELETEFLAG_POSITION, DELETEFLAG_SIZE);
    insertInt(_buffer, messVO.simulation_flag, SIMULATIONFLAG_POSITION, SIMULATIONFLAG_SIZE);
    insertInt(_buffer, messVO.fof_flag, FOFFLAG_POSITION, FOFFLAG_SIZE);
    insertInt(_buffer, messVO.friend_or_foe, FOF_POSITION, FOF_SIZE);
    insertInt(_buffer, messVO.class_label_flag, CLASSLABELFLAG_POSITION, CLASSLABELFLAG_SIZE);
    insertInt(_buffer, messVO.type_class, TYPECLASS_POSITION, TYPECLASS_SIZE);
    insertInt(_buffer, messVO.quantity_flag, QUANTITYFLAG_POSITION, QUANTITYFLAG_SIZE);
    insertInt(_buffer, messVO.quantity, QUANTITY_POSITION, QUANTITY_SIZE);

    int calc_checksum = checkSum(_buffer + 2, _size - 3);
    insertInt(_buffer, calc_checksum, CHECKSUM_POSITION, CHECKSUM_SIZE);

    std::cout << " Output from Coder VO  :" << std::endl;
    for (int i = 0; i < _size; ++i)
        std::cout << std::hex << (int)_buffer[i] << " ";
    std::cout << std::dec << std::endl;

    return required_length;
}

int jh18::decode_part(InputDataType _input, const size_t& _size, Container& _output)
{
    if (_input == nullptr) {
        return -1;
    }

    unsigned int global_count(0);
    Container cont;

    int result(0);
    int residue(_size - global_count);

    InputDataType message(_input + global_count);

    unsigned char* data(const_cast<unsigned char*>(message));

    unsigned char message_len = static_cast<char>(data[2]);
    if ((message_len == 0x1f) & (_size == JH18_VO_SIZE)) // ? не приходит ли вместе с ВО и пеленг  и что делать в этом случае
    {
        cont.emplace_back(MessPointer(new GwAOMess));
        GwAO* dataVO = &((GwAOMess*)cont.back().get())->Data;
        MessageVO messVO;
        result = DecoderVO(messVO, data, residue);
    } else if ((message_len == 0x0f) & (_size == JH18_SECTOR_SIZE)) {
        cont.emplace_back(MessPointer(new GwAOMess));
        GwAO* dataVO = &((GwAOMess*)cont.back().get())->Data;
        MessageSECTOR messVO;
        result = DecoderSECTOR(messVO, data, residue);
    } else if ((message_len == 0x1c) & (_size == JH18_DISAPPEARANCE_SIZE)) {
        cont.emplace_back(MessPointer(new GwAOMess));
        GwAO* dataVO = &((GwAOMess*)cont.back().get())->Data;
        MessageDISAPPEARANCE messVO;
        result = DecoderDISAPPEARANCE(messVO, data, residue);
    } else if ((message_len == 0x29) & (_size == JH18_NETTED_SIZE)) {
        cont.emplace_back(MessPointer(new GwAOMess));
        GwAO* dataVO = &((GwAOMess*)cont.back().get())->Data;
        MessageNETTED messVO;
        result = DecoderNETTED(messVO, data, residue);
    } else {
        // Unknown message
        result = -5;
    }
    if (result <= 0) {
        return result;
    }

    global_count += result;

    std::copy(cont.begin(), cont.end(), std::back_inserter(_output));

    return global_count;
}

int jh18::decode(InputDataType _input, const size_t& _size, Container& _output)
{
    if (!_input)
        return -1; // если ссылка на блок не существует
    if (_size < 2)
        return -1;
    unsigned int current_byte_count { 0 };
    while (current_byte_count < _size) {
        int result { 0 };
        InputDataType message(_input + current_byte_count);

        // unsigned char *data(const_cast<unsigned char *>(message));
        if (message[2] == 0x1f) // track report
        {
            char tempVO[JH18_VO_SIZE];
            memcpy(tempVO, message, JH18_VO_SIZE);
            result = decode_part(message, JH18_VO_SIZE, _output);
        } else if (message[2] == 0x0f) //sector report
        {
            char tempSL[JH18_SECTOR_SIZE];
            memcpy(tempSL, message, JH18_SECTOR_SIZE);
            result = decode_part(message, JH18_SECTOR_SIZE, _output);
        } else if (message[2] == 0x1c) //track disappearance report
        {
            char tempSL[JH18_DISAPPEARANCE_SIZE];
            memcpy(tempSL, message, JH18_DISAPPEARANCE_SIZE);
            result = decode_part(message, JH18_DISAPPEARANCE_SIZE, _output);
        } else if (message[2] == 0x29) //netted radar configuration report
        {
            char tempSL[JH18_NETTED_SIZE];
            memcpy(tempSL, message, JH18_NETTED_SIZE);
            result = decode_part(message, JH18_NETTED_SIZE, _output);
        } else
            return -1; // если блок начинается с неизвестного символа
        if (result <= 0) {
            return result;
        }
        current_byte_count += result;
    }

    return current_byte_count;
}
