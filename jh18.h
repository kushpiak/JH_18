#pragma once
#include "messages.h"

class jh18 {
public:
    int decode_part(InputDataType _input, const size_t& _size, Container& _output);

    int decode(InputDataType _input, const size_t& _size, Container& _output);

    virtual int CoderVO(MessageVO& messVO, unsigned char* _buffer, const int& _size);
    virtual int DecoderVO(MessageVO& messVO, unsigned char* _buffer, const int& _size);
    virtual int CoderDISAPPEARANCE(MessageDISAPPEARANCE& messVO, unsigned char* _buffer, const int& _size);
    virtual int DecoderDISAPPEARANCE(MessageDISAPPEARANCE& messVO, unsigned char* _buffer, const int& _size);
    virtual int CoderSECTOR(MessageSECTOR& messVO, unsigned char* _buffer, const int& _size);
    virtual int DecoderSECTOR(MessageSECTOR& messVO, unsigned char* _buffer, const int& _size);
    virtual int CoderNETTED(MessageNETTED& messNETTED, unsigned char* _buffer, const int& _size);
    virtual int DecoderNETTED(MessageNETTED& messNETTED, unsigned char* _buffer, const int& _size);

protected:
    constexpr static unsigned int PREFIX_POSITION = 1;
    constexpr static unsigned int PREFIX_SIZE = 16;
    constexpr static unsigned int LEN_LOWER_POSITION = 17;
    constexpr static unsigned int LEN_LOWER_SIZE = 8;
    constexpr static unsigned int INFORMATION_TYPE_POSITION = 25;
    constexpr static unsigned int INFORMATION_TYPE_SIZE = 4;
    constexpr static unsigned int LEN_HIGH_POSITION = 29;
    constexpr static unsigned int LEN_HIGH_SIZE = 4;
    constexpr static unsigned int TIME1_POSITION = 33;
    constexpr static unsigned int TIME1_SIZE = 8;
    constexpr static unsigned int TIME2_POSITION = 41;
    constexpr static unsigned int TIME2_SIZE = 8;
    constexpr static unsigned int TIME3_POSITION = 49;
    constexpr static unsigned int TIME3_SIZE = 8;
    constexpr static unsigned int TIME4_POSITION = 57;
    constexpr static unsigned int TIME4_SIZE = 8;
    constexpr static unsigned int RADARID_LOWER_POSITION = 65;
    constexpr static unsigned int RADARID_LOWER_SIZE = 8;
    constexpr static unsigned int RADARID_HIGH_POSITION = 73;
    constexpr static unsigned int RADARID_HIGH_SIZE = 8;
    constexpr static unsigned int DESTINATIONID_LOWER_POSITION = 81;
    constexpr static unsigned int DESTINATIONID_LOWER_SIZE = 8;
    constexpr static unsigned int DESTINATIONID_HIGH_POSITION = 89;
    constexpr static unsigned int DESTINATIONID_HIGH_SIZE = 8;
    constexpr static unsigned int INFORMLABEL_LOWER_POSITION = 97;
    constexpr static unsigned int INFORMLABEL_LOWER_SIZE = 8;
    constexpr static unsigned int INFORMLABEL_HIGH_POSITION = 109;
    constexpr static unsigned int INFORMLABEL_HIGH_SIZE = 4;
    constexpr static unsigned int TRACKNUMBER_LOWER_POSITION = 113;
    constexpr static unsigned int TRACKNUMBER_LOWER_SIZE = 8;
    constexpr static unsigned int TRACKNUMBER_HIGH_POSITION = 121;
    constexpr static unsigned int TRACKNUMBER_HIGH_SIZE = 8;
    constexpr static unsigned int DISTANCE_LOW_POSITION = 129;
    constexpr static unsigned int DISTANCE_LOW_SIZE = 8;
    constexpr static unsigned int DISTANCE_MED_POSITION = 137;
    constexpr static unsigned int DISTANCE_MED_SIZE = 8;
    constexpr static unsigned int DISTANCE_HIGH_POSITION = 145;
    constexpr static unsigned int DISTANCE_HIGH_SIZE = 8;
    constexpr static unsigned int DISTANCE_DIVIDER = 1; // 16777.215 км макс передается по протоколу
    constexpr static unsigned int BEARING_LOW_POSITION = 153;
    constexpr static unsigned int BEARING_LOW_SIZE = 8;
    constexpr static unsigned int BEARING_HIGH_POSITION = 161;
    constexpr static unsigned int BEARING_HIGH_SIZE = 8;
    constexpr static double BEARING_DIVIDER = 0.0054931640625; // 0.0055 град
    constexpr static unsigned int HEIGHT_LOW_POSITION = 169;
    constexpr static unsigned int HEIGHT_LOW_SIZE = 8;
    constexpr static unsigned int HEIGHT_HIGH_POSITION = 177;
    constexpr static unsigned int HEIGHT_HIGH_SIZE = 8;
    constexpr static unsigned int HEIGHT_DIVIDER = 1; //
    constexpr static unsigned int SPEED_LOW_POSITION = 185;
    constexpr static unsigned int SPEED_LOW_SIZE = 8;
    constexpr static unsigned int SPEED_HIGH_POSITION = 193;
    constexpr static unsigned int SPEED_HIGH_SIZE = 8;
    constexpr static double SPEED_DIVIDER = 0.36; // (3600/1000)*0.1
    constexpr static unsigned int COURSE_LOW_POSITION = 201;
    constexpr static unsigned int COURSE_LOW_SIZE = 8;
    constexpr static unsigned int COURSE_HIGH_POSITION = 209;
    constexpr static unsigned int COURSE_HIGH_SIZE = 8;
    constexpr static double COURSE_DIVIDER = 0.01; //
    constexpr static unsigned int SUPPORTMODE_POSITION = 217;
    constexpr static unsigned int SUPPORTMODE_SIZE = 3;
    constexpr static unsigned int HEIGHTMODE_POSITION = 220;
    constexpr static unsigned int HEIGHTMODE_SIZE = 3;
    constexpr static unsigned int POINTTRACESOURCE_POSITION = 223;
    constexpr static unsigned int POINTTRACESOURCE_SIZE = 2;
    constexpr static unsigned int TRACKQUALITY_POSITION = 225;
    constexpr static unsigned int TRACKQUALITY_SIZE = 4;
    constexpr static unsigned int CORRECTIONFLAG_POSITION = 229;
    constexpr static unsigned int CORRECTIONFLAG_SIZE = 1;
    constexpr static unsigned int FIRSTPOINTFLAG_POSITION = 230;
    constexpr static unsigned int FIRSTPOINTFLAG_SIZE = 1;
    constexpr static unsigned int DELETEFLAG_POSITION = 231;
    constexpr static unsigned int DELETEFLAG_SIZE = 1;
    constexpr static unsigned int SIMULATIONFLAG_POSITION = 232;
    constexpr static unsigned int SIMULATIONFLAG_SIZE = 1;
    constexpr static unsigned int FOFFLAG_POSITION = 233;
    constexpr static unsigned int FOFFLAG_SIZE = 1;
    constexpr static unsigned int FOF_POSITION = 234;
    constexpr static unsigned int FOF_SIZE = 7;
    constexpr static unsigned int CLASSLABELFLAG_POSITION = 241;
    constexpr static unsigned int CLASSLABELFLAG_SIZE = 1;
    constexpr static unsigned int TYPECLASS_POSITION = 242;
    constexpr static unsigned int TYPECLASS_SIZE = 7;
    constexpr static unsigned int QUANTITYFLAG_POSITION = 249;
    constexpr static unsigned int QUANTITYFLAG_SIZE = 1;
    constexpr static unsigned int QUANTITY_POSITION = 250;
    constexpr static unsigned int QUANTITY_SIZE = 7;
    constexpr static unsigned int CHECKSUM_POSITION = 257;
    constexpr static unsigned int CHECKSUM_SIZE = 8;

    constexpr static double TIME_DIVIDER = 0.00000217;

    constexpr static unsigned int TIME_DIVIDER_AO = 128;

    constexpr static unsigned int MOCKLOGO_POSITION = 232;
    constexpr static unsigned int MOCKLOGO_SIZE = 1;
    constexpr static unsigned int CHECKSUMDIS_POSITION = 233;
    constexpr static unsigned int CHECKSUMDIS_SIZE = 8;

    constexpr static unsigned int SECTORNUMBER_POSITION = 115;
    constexpr static unsigned int SECTORNUMBER_SIZE = 6;
    constexpr static unsigned int SCANNUMBER_POSITION = 123;
    constexpr static unsigned int SCANNUMBER_SIZE = 6;
    constexpr static unsigned int CHECKSUMSECTOR_POSITION = 129;
    constexpr static unsigned int CHECKSUMSECOR_SIZE = 8;
    //-----------------NETTED
    constexpr static unsigned int RESPONSEBIT_POSITION = 105;
    constexpr static unsigned int RESPONSEBIT_SIZE = 1;
    constexpr static unsigned int RADARSTATIONDEPARTMENTMARK_LOW_POSITION = 113;
    constexpr static unsigned int RADARSTATIONDEPARTMENTMARK_LOW_SIZE = 8;
    constexpr static unsigned int RADARSTATIONDEPARTMENTMARK_HIGH_POSITION = 121;
    constexpr static unsigned int RADARSTATIONDEPARTMENTMARK_HIGH_SIZE = 8;
    constexpr static unsigned int RADARLONGITUDELOW_POSITION = 129;
    constexpr static unsigned int RADARLONGITUDELOW_SIZE = 8;
    constexpr static unsigned int RADARLONGITUDEMED_POSITION = 137;
    constexpr static unsigned int RADARLONGITUDEMED_SIZE = 8;
    constexpr static unsigned int RADARLONGITUDEHIGH_POSITION = 145;
    constexpr static unsigned int RADARLONGITUDEHIGH_SIZE = 8;
    constexpr static unsigned int RADARLONGITUDEHHIGH_POSITION = 153;
    constexpr static unsigned int RADARLONGITUDEHHIGH_SIZE = 8;
    constexpr static double RADARLONGITUDE_DIVIDER = 1.0 / 100000; //
    constexpr static unsigned int RADARLATITUDELOW_POSITION = 161;
    constexpr static unsigned int RADARLATITUDELOW_SIZE = 8;
    constexpr static unsigned int RADARLATITUDEMED_POSITION = 169;
    constexpr static unsigned int RADARLATITUDEMED_SIZE = 8;
    constexpr static unsigned int RADARLATITUDEHIGH_POSITION = 177;
    constexpr static unsigned int RADARLATITUDEHIGH_SIZE = 8;
    constexpr static unsigned int RADARLATITUDEHHIGH_POSITION = 185;
    constexpr static unsigned int RADARLATITUDEHHIGH_SIZE = 8;
    constexpr static double RADARLATITUDE_DIVIDER = 1.0 / 100000; //
    constexpr static unsigned int RADARALTITUDE_LOW_POSITION = 193;
    constexpr static unsigned int RADARALTITUDE_LOW_SIZE = 8;
    constexpr static unsigned int RADARALTITUDE_HIGH_POSITION = 201;
    constexpr static unsigned int RADARALTITUDE_HIGH_SIZE = 8;
    constexpr static unsigned int RADARALTITUDE_DIVIDER = 10; //  2 byte 65535 *10 = 655350 meters
    constexpr static unsigned int SYSTEMSTATUS_POSITION = 211;
    constexpr static unsigned int SYSTEMSTATUS_SIZE = 2;
    constexpr static unsigned int CHANNELTYPE_POSITION = 213;
    constexpr static unsigned int CHANNELTYPE_SIZE = 4;
    constexpr static unsigned int RADARNAME_POSITION = 217;
    constexpr static unsigned int RADARNAME_SIZE = 8 * 15;
    constexpr static unsigned int CHECKSUMNETTED_POSITION = 337;
    constexpr static unsigned int CHECKSUMNETTED_SIZE = 8;
};
