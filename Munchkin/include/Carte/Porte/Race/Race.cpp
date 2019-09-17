
/**
 * \file Race.cpp
 * \brief implémentation classe Race
 * \author Le Corvec Quentin
 * \date Octobre 2014
 */

#include "Race.hpp"

Race::Race(int id, std::string nom, std::string description): Porte(id, nom, description) {}

Race::~Race(){}

bool Race::estRace() {
  return true;
}
