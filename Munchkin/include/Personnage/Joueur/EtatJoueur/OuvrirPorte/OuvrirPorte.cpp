/**
 * \file OuvrirPorte.cpp
 * \brief implémentation classe OuvrirPorte
 * \author Le Corvec Quentin
 * \date Octobre 2014
 */

#include "OuvrirPorte.hpp"

OuvrirPorte::OuvrirPorte(Joueur *j):EtatJoueur(j){}

OuvrirPorte::~OuvrirPorte(){}

void OuvrirPorte::piocherPorteFaceCache(){
	Carte * c=joueur->getJeu()->piocherPorte();
	cout<<"J'ai pioché "<<c->getNom()<<endl;
	joueur->getMain().push_back(c);
	joueur->setEtat(joueur->getFin());

}

void OuvrirPorte::changerRace(Carte * r){
	if(joueur->getRace()->getNom()!="Humain"){
		joueur->getRace()->retirer(joueur);
		joueur->getJeu()->getDefausse().push_back(joueur->getRace());
	}
	else delete joueur->getRace();
	joueur->setRace(r);
	joueur->getRace()->appliquer(joueur);
}

void OuvrirPorte::poseEquipement(Carte * e){
	joueur->getBagage().push_back(e);
}

void OuvrirPorte::equiper(Carte * e){
  if(e->estEquipement()) {
    e->appliquer(joueur);
	if(e->estMain()){
			if(((Main*)e->getCarte())->getNbMain()==1) joueur->equiper1Main((Main*)e);
			else joueur->equiper2Main((Main*)e);
	}
	if(e->estArmure())joueur->equiperArmure((Armure*)e);
	if(e->estCouvreChef())joueur->equiperCouvreChef((CouvreChef*)e);
	if(e->estChaussure())joueur->equiperChaussure((Chaussure*)e);
	else joueur->equiperEquipement(e);
  }
}



void OuvrirPorte::poserMalediction(Joueur * cible, Carte * m){
  if(m->estMalediction()) {
	m->appliquer(cible);
	joueur->getJeu()->defausser(m);
  }
}

void OuvrirPorte::combattre(Carte * m){
  if(m->estMonstre()) {
	joueur->setEtat(joueur->getBagarre());
	joueur->getEtat()->combattre(m);
  }
}
