#pragma once
#include "constants.h"

struct MessageVO {
    uint16_t prefix { 0 }; // 2 Bytes          //  Prefix 1 & Prefix2
    uint16_t len { 0 }; // 1 Bytes + 4 bits //  Message lenght
    uint8_t information_type { 0 }; // 4 bits           //  Information type
    uint32_t time { 0 }; // 4 Bytes          //  Time (time of current day)
    uint16_t radar_ID { 0 }; // 2 Bytes          //  Souce device identification
    uint16_t destination_ID { 0 }; // 2 Bytes          //  Destination device identification
    uint16_t information_label { 0 }; // 1 Bytes + 4 bits //  Information label
    uint16_t track_number { 0 }; // 2 Bytes          //  Track batch number
    uint32_t distance { 0 }; // 3 Bytes          //  Distance, m
    double bearing { 0 }; // 2 Bytes          //  Bearing, deg
    uint16_t height { 0 }; // 2 Bytes          //  Height, m
    double speed { 0 }; // 2 Bytes          //  Speed, km/h
    double course { 0 }; // 2 Bytes          //  Course, deg
    uint8_t support_mode { 0 }; // 3 bits           //  Tracking mode : 0 - automatic, 1 - manual                   //SUPPORT_MODE
    uint8_t height_mode { 0 }; // 3 bits           //  Height mode : 0 - height is invalid
    uint8_t point_trace_source { 0 }; // 2 bits           //  Point trace source : 0 - means from radar
    uint8_t track_quality { 0 }; // 4 bits           //  Track quality
    bool correction_flag { false }; // 1 bit            //  Correction flag : 1 - means correction target
    bool first_point_flag { false }; // 1 bit            //  First point flag : 1 - means the first point ot the target //SUPPORT_SIGN
    bool delete_flag { false }; // 1 bit            //  Delete flag : 1 - means delete target                       //SUPPORT_SIGN
    bool simulation_flag { false }; // 1 bit            //  Simulation flag : 1 - means simulation target               //TRACK_MODE
    bool fof_flag { false }; // 1 bit            //  Friend or foe flag : 1 - means the attribute is valid, 0 -  the attribute is invalid             //FRIEND_OR_FOE
    uint8_t friend_or_foe { 0 }; // 7 bits           //  Friend or foe  : 2 - means me/friend                                                           //FRIEND_OR_FOE
    bool class_label_flag { false }; // 1 bit            //  Class label  : 1 - means the type is valid, 0 -  means the type is invalid
    uint8_t type_class { 0 }; // 7 bits           //  Type : 1 - means mainframe (LP)
    bool quantity_flag { false }; // 1 bit            //  Quantity flag : 1 - means the quantity is valid, 0- means the quantyti is invalid   // GROUPING
    uint8_t quantity { 0 }; // 7 bit            //  Quantity  : 1 - means one rack(frame)   // GROUPING
    uint8_t checksum { 0 }; // 1 Byte           //  Check end
};
struct MessageDISAPPEARANCE {
    uint16_t prefix { 0 }; // 2 Bytes          //  Prefix 1 & Prefix2
    uint16_t len { 0 }; // 1 Bytes + 4 bits //  Message lenght
    uint8_t information_type { 0 }; // 4 bits           //  Information type
    uint32_t time { 0 }; // 4 Bytes          //  Time (time of current day)
    uint16_t radar_ID { 0 }; // 2 Bytes          //  Souce device identification
    uint16_t destination_ID { 0 }; // 2 Bytes          //  Destination device identification
    uint16_t information_label { 0 }; // 1 Bytes + 4 bits //  Information label
    uint16_t track_number { 0 }; // 2 Bytes          //  Track batch number
    uint8_t support_mode { 0 }; // 3 bits           //  Tracking mode : 0 - automatic, 1 - manual                   //SUPPORT_MODE
    uint8_t height_mode { 0 }; // 3 bits           //  Height mode : 0 - height is invalid
    uint8_t point_trace_source { 0 }; // 2 bits           //  Point trace source : 0 - means from radar
    uint8_t track_quality { 0 }; // 4 bits           //  Track quality
    bool correction_flag { false }; // 1 bit            //  Correction flag : 1 - means correction target
    bool first_point_flag { false }; // 1 bit            //  First point flag : 1 - means the first point ot the target //SUPPORT_SIGN
    bool delete_flag { true }; // 1 bit            //  Delete flag : 1 - means delete target                       //SUPPORT_SIGN
    bool mock_logo { false }; // 1 bit            //  Mock logo bit
    uint8_t checksum { 0 }; // 1 Byte           //  Check end
};
struct MessageSECTOR {
    uint16_t prefix { 0 }; // 2 Bytes          //  Prefix 1 & Prefix2
    uint16_t len { 0 }; // 1 Bytes + 4 bits //  Message lenght
    uint8_t information_type { 0 }; // 4 bits           //  Information type
    uint32_t time { 0 }; // 4 Bytes          //  Time (time of current day)
    uint16_t radar_ID { 0 }; // 2 Bytes          //  Souce device identification
    uint16_t destination_ID { 0 }; // 2 Bytes          //  Destination device identification
    uint16_t information_label { 0 }; // 1 Bytes + 4 bits //  Information label

    uint8_t sector_number { 0 }; // 6 bits          //  Sector number
    uint8_t scan_number { 0 }; // 6 bits          //  scan number
    uint8_t checksum { 0 }; // 1 Byte           //  Check end
};
struct MessageNETTED {
    uint16_t prefix { 0 }; // 2 Bytes          //  Prefix 1 & Prefix2
    uint16_t len { 0 }; // 1 Bytes + 4 bits //  Message lenght
    uint8_t information_type { 0 }; // 4 bits           //  Information type
    uint32_t time { 0 }; // 4 Bytes          //  Time (time of current day)
    uint16_t radar_ID { 0 }; // 2 Bytes          //  Souce device identification
    uint16_t destination_ID { 0 }; // 2 Bytes          //  Destination device identification
    uint16_t information_label { 0 }; // 1 Bytes + 4 bits //  Information label
    uint8_t response { false }; // 1 bit            // Responce 1- requires the receiving end to give confirmation of the correct reception of the infirmation, 0 - no confirmation required
    uint16_t radar_id { 0 }; //  2 Bytes          // Radar station departmenr mark
    double radar_longitude { 0 }; //4 Bytes       // Radar longitude unit 1/100000
    double radar_latitude { 0 }; //4 Bytes       // Radar latitude unit 1/100000
    uint16_t radar_altitude { 0 }; //  2 Bytes          // Radar altitude unit is 10 meters
    uint8_t system_status { 0 }; // 4 bits //  System status : 0- means real working enviroment, 2- means simulated working enviroment
    uint8_t channel_type { 0 }; // 4 bits //  Channel type :  1- means radar channel
    uint8_t radar_name[15]; // 15 Bytes // Radar station name
    uint8_t checksum { 0 }; // 1 Byte           //  Check end
};
