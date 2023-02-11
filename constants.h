#pragma once
#include <QString>
#include <iostream>
#include <ostream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <stdlib.h>
#endif

const int JH18_VO_SIZE = 33;
const int JH18_DISAPPEARANCE_SIZE = 30;
const int JH18_SECTOR_SIZE = 17;
const int JH18_NETTED_SIZE = 43;

typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;

struct GwAO {
    // Aircraft detection time
    // Время локации воздушного объекта
    //    CVMTimeVal T;
    // Описание в файле /include/cvmstructs.h
    // Description in file /include/cvmstructs.h

    // Ages of the data provided.
    //   TrackDataAges track_data_ages;

    // Coordinates
    // Координаты
    //  Coordinates coordinates;

    // Velocities and course
    // Скорости и курс
    //   VelocitiesAndCourse velocity_course;

    // Track or plot status
    //  TrackStatus status;

    //IFF codes for mode 1, 2, 3, 4, 5
    //Коды IFF ответов в режимах 1, 2, 3, 4, 5
    //   IffCode iff_code;

    //  Data derived directly by the aircraft.
    //  AircraftDerivedData aircraft_derived_data;

    // Coordinates, velocities and accelerations errors
    // Ошибки измерения координат, скоростей и ускорений
    //   MeasuringErrors measuring_errors;

    // Frequency, period, duration and their deviations
    // Частота, период, длительность и их девиации
    //  SignalParameters signal_parameters;

    // PSR and SSR plot characteristics
    // Характеристики первичной и вторичной отметок
    //  RadarPlotCharacteristics plot_characteristics;

    //All measured data related to the last report used to update the track.
    // MeasuredInformation measured_information;

    // Calculated Mode of Movement of a target.
    // ModeOfMovement mode_of_movement;

    // List of Sensors contributing to the system track
    // ContributingSensors contributing_sensors[CountOfSources];

    // Etalon data
    // EtalonData etalon_data;

    // Data Source Identifier
    uint8_t sac; // SAC - System Area Code
    uint8_t sic; // SIC - System Identification Code

    uint8_t service_identification; // Identification of the service provided to one or more users (0 - no service identification).

    // Source number in local numeration (if type_info TY_INPUT or TY_OUTPUT)
    uint8_t source_number;

    // Source type
    // Тип источника
    uint8_t source_type;
    //		Допустимые значения описаны в файле /include/constants.h, секция ТИП_ИСТОЧНИКА
    //		Allowable values described in file /include/constants.h, section SOURCE_TYPE

    // Information type
    // Тип информации
    uint8_t type_info : 2;
    //		Допустимые значения описаны в файле /include/constants.h, секция ТИП_ИНФОРМАЦИИ
    //		Allowable values described in file /include/constants.h, section TYPE_INFO

    uint8_t information_type : 4; //1 Byte    //  Признак состава информации /
    //		Допустимые значения описаны в файле /include/constants.h, секция ТИП_ИНФОРМАЦИИ
    //		Allowable values described in file /include/constants.h, section INFORMATION_TYPE

    // Number in source system
    // Номер в системе источника
    int16_t number_in_source; //TODO подумать над необходимостью отрицательных чисел

    // Number in destination system
    // номер в системе приемника
    int16_t number_in_dest; //TODO подумать над необходимостью отрицательных чисел

    // Unified number
    // номер единый
    uint16_t unified_number;

    // Aircraft number
    // Номер борта
    uint32_t aircraft_number;

    // Information type
    // Тип информации

    // Aircraft class
    uint8_t aircraft_class;
    //		Допустимые значения описаны в файле /include/constants.h, секция AIRCRAFT CLASS
    //		Allowable values described in file /include/constants.h, section AIRCRAFT CLASS

    // Aircraft subclass
    uint8_t aircraft_subclass;
    //		Допустимые значения описаны в файле /include/constants.h, секция AIRCRAFT SUBCLASS
    //		Allowable values described in file /include/constants.h, section AIRCRAFT SUBCLASS

    // Aircraft model
    uint32_t aircraft_model;

    // A radar cross-section of the AO.
    // Эффективная отражающая поверхность ВО.
    float radar_cross_section;

    //Уникальный номер источника
    //TODO Подумать над целесообразностью этого поля
    //Используется только для выдачи на SC4I в протоколе Ранин
    int32_t unique_source_number;

    GwAO()
    {
        memset(this, 0, sizeof(GwAO));
    }
};
typedef struct GwAO GwAO;
const unsigned short MT_GWAO = 100;
const unsigned char MESSKEY[3] = { 170, 85, 195 };
struct HEADERMES {
    uint8_t MessKey[3]; // must be always on a first position !
    int32_t MessLength;
    uint16_t MessType; // Тип сообщения /
    uint8_t MessInfo; // Дополнительная информация /
        // для РЛИ - номер источника /
    uint8_t MessSender; // Отправитель сообщения /
    uint8_t MessReceiver;
    HEADERMES()
    {
        MessKey[0] = MESSKEY[0];
        MessKey[1] = MESSKEY[1];
        MessKey[2] = MESSKEY[2];
        MessLength = 0;
        MessType = 0;
        MessInfo = 0;
        MessSender = 0;
        MessReceiver = 0;
    }

    HEADERMES(const unsigned short& _type, const unsigned int& _size)
    {
        MessKey[0] = MESSKEY[0];
        MessKey[1] = MESSKEY[1];
        MessKey[2] = MESSKEY[2];
        MessLength = _size;
        MessType = _type;
        MessInfo = 0;
        MessSender = 0;
        MessReceiver = 0;
    }
};
struct GwAOMess : public HEADERMES {
    GwAO Data;

    GwAOMess()
        : HEADERMES(MT_GWAO, sizeof(GwAOMess))
    {
    }
};
typedef struct GwAOMess GwAOMess;

class constants {
public:
    constants();
};
