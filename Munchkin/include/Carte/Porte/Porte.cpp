/**
 * \file Porte.cpp
 * \brief implementation classe Porte
 * \author Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#include "Porte.hpp"

/****************************************************************************************************/


/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/
////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : Porte(std::string nom, std::string description):Carte(nom, description)
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Constructeur par défaut
////////////////////////////////////////////////////////////////////////////////////////////////////
Porte::Porte(int id, std::string nom, std::string description):Carte(id, nom, description) {
}

/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : ~Porte()
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Destructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Porte::~Porte() {
}

bool Porte::estPorte(){
  return true;
}

