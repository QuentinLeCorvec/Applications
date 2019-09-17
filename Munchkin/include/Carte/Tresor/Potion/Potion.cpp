/**
 * \file Potion.cpp
 * \brief implementation classe Potion
 * \author Le Corvec Quentin
 * \date Octobre 2014
 */

#include "Potion.hpp"


/****************************************************************************************************/
/********** Constructeur                                                                   **********/
/****************************************************************************************************/
Potion::Potion(int id, std::string n, std::string d, int p):Tresor(id,n,d,p) {}

/****************************************************************************************************/
/********** Destructeur **********/
/****************************************************************************************************/

Potion::~Potion(){}



/****************************************************************************************************/
/********** Accesseurs **********/
/****************************************************************************************************/
bool Potion::estPotion() {
  return true;
}
