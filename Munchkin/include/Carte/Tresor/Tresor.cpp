/**
 * \file Tresor.cpp
 * \brief implementation classe Tresor
 * \author Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#include "Tresor.hpp"

/****************************************************************************************************/

/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/
Tresor::Tresor(int id, std::string n, std::string d, int p) : Carte(id, n, d), prix(p) {}

/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : ~Tresor()
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Destructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Tresor::~Tresor() {
}

/****************************************************************************************************/
/**********          Accesseurs                                                            **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : estVide() const
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Affiche la carte
////////////////////////////////////////////////////////////////////////////////////////////////////

int Tresor::getPrix(){
	return prix;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//M�thode : estVide() const
//Param�tre : Aucun
//Pr�condition : Aucune
//Postcondition : Aucune
//Description : Affiche la carte
////////////////////////////////////////////////////////////////////////////////////////////////////

bool Tresor::estTresor(){
	return true;
}
/****************************************************************************************************/
/**********          Mutateurs                                                             **********/
/****************************************************************************************************/



/****************************************************************************************************/
