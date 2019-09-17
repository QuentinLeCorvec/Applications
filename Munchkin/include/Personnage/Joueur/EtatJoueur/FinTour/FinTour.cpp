/**
 * \file FinTour.cpp
 * \brief implémentation classe FinTour
 * \author Le Corvec Quentin
 * \date Octobre 2014
 */

#include "FinTour.hpp"

FinTour::FinTour(Joueur * j):EtatJoueur(j){
	}

FinTour::~FinTour(){}

void FinTour::finirTour(){
	if(joueur->getMain().size()<6){
		joueur->setEtat(joueur->getFin());
		joueur->finTour();
	}
	else{
		cout<<"Vous devez défausser de cartes pour n'en avoir plus que 5 en main"<<endl;
	}
}

void FinTour::defausserCarte(Carte * c){
	joueur->defausser(c);
}

void FinTour::changerRace(Carte * r){
  if(r->estRace()) {
	if(joueur->getRace()->getNom()!="Humain"){
		joueur->getRace()->retirer(joueur);
		joueur->getJeu()->getDefausse().push_back(joueur->getRace());

	}
	else delete joueur->getRace();
	joueur->setRace(r);
	joueur->getRace()->appliquer(joueur);
  }
}

void FinTour::poseEquipement(Carte * e){
	joueur->getBagage().push_back(e);
}

void FinTour::equiper(Carte * e){
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

void FinTour::poserMalediction(Joueur * cible, Carte * m){
  if(m->estMalediction()) {
	m->appliquer(cible);
	joueur->getJeu()->defausser(m);
  }
}
