/**
 * \file CarteSupMain.cpp
 * \brief implementation classe CarteSupMain
 * \author Le Corvec Quentin
 * \date Octobre 2014
 */

#include "CarteSupMain.hpp"
#include "../../../Personnage/Joueur/Joueur.hpp"

CarteSupMain::CarteSupMain(Carte * c, int v):Comportement(c->getId(),"CarteSupMain","",c, v) {
}

CarteSupMain::~CarteSupMain() { }

void CarteSupMain::appliquer(Personnage * p) {
	carte->appliquer(p);
	((Joueur*)p)->setNbCartesMain(((Joueur*)p)->getNbCartesMain()+valeur);
}

void CarteSupMain::retirer(Personnage * p) {
	carte->retirer(p);
	((Joueur*)p)->setNbCartesMain(((Joueur*)p)->getNbCartesMain()-valeur);
}
