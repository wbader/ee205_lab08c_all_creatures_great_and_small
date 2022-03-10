///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file animal.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
#define EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H

#include <string>

enum Gender
{
    UNKNOWN_GENDER, MALE, FEMALE
};

const float UNKOWN_WEIGHT = -1;

class animal {
protected:
    static const std::string kingdom;
    std::string species;  // Required
    enum Gender gender = UNKNOWN_GENDER;
    float weight = UNKOWN_WEIGHT;
};


#endif //EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
