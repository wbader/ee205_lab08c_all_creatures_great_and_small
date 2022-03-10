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
#include <iostream>

using namespace std;

const string Animal::kingdom = "Animalia";

Animal::Animal(const string &newSpecies)
{
    setSpecies(newSpecies);
}

Animal::Animal(const string &newSpecies, Gender newGender) : gender(newGender)
{
    setSpecies(newSpecies);
}

Animal::Animal(const string &newSpecies, float newWeight)
{
    setSpecies(newSpecies);
    setWeight(newWeight);
}

Animal::Animal(const string &newSpecies, Gender newGender, float newWeight) : gender(newGender)
{
    setSpecies(newSpecies);
    setWeight(newWeight);
}

Gender Animal::getGender() const {
    return gender;
}

void Animal::setGender(Gender newGender) {
    if(Animal::gender != UNKNOWN_GENDER)
    {
        throw logic_error("Previous gender must be UNKNOWN_GENDER");
    }

    Animal::gender = newGender;
}

float Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(float newWeight) {
    if (!validateWeight(newWeight))
        throw invalid_argument("Weight must be >0");

    Animal::weight = newWeight;
}

const string &Animal::getKingdom() {
    return kingdom;
}

const string &Animal::getSpecies() const {
    return species;
}

const void Animal::printInfo() {
    cout << "Animal Fields" << endl;
    cout << "\tKingdom [" << getKingdom() << "]" << endl;
    cout << "\tSpecies [" << getSpecies() << "]" << endl;
    cout << "\tWeight  [" << getWeight() << "]" << endl;
    cout << "\tGender  [" << getGender() << "]" << endl;
}

bool Animal::isValid() {
    if(!validateWeight(weight))
        return false;

    return true;
}

bool Animal::validateWeight(const float newWeight) {
    if(newWeight == UNKNOWN_WEIGHT)
        return true;

    if(newWeight > 0)
        return true;

    // if newWeight isn't unknown or > 0, its invalid
    return false;
}

bool Animal::validateSpecies(const std::string newSpecies) {
    if(newSpecies.empty())
        return false;

    return true;
}

void Animal::setSpecies(const std::string newSpecies) {
    if(!validateSpecies(newSpecies))
        throw invalid_argument("Species can't be empty");

    Animal::species = newSpecies;
}
