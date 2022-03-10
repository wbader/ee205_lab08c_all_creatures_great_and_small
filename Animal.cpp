///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "Animal.h"

using namespace std;

const string kingdom = "Animalia";

Animal::Animal(const string &species) : species(species)
{
    Animal::species = species;
}

Animal::Animal(const string &species, Gender gender) : species(species), gender(gender) {}

Animal::Animal(const string &species, float weight) : species(species), weight(weight) {}

Animal::Animal(const string &species, Gender gender, float weight) : species(species), gender(gender), weight(weight) {}

Gender Animal::getGender() const {
    return gender;
}

void Animal::setGender(Gender gender) {
    Animal::gender = gender;
}

float Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(float weight) {
    Animal::weight = weight;
}

void Animal::printInfo() {

}

bool Animal::isValid() {
    return false;
}
