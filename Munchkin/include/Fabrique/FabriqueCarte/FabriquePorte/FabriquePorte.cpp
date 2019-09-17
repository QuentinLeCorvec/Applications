#include "FabriquePorte.hpp"

FabriquePorte::FabriquePorte():FabriqueCarte(){
  monstre = 0;
  malediction = 0;
  race = 0;
}

FabriquePorte::~FabriquePorte(){}

Carte * FabriquePorte::fabriquer(std::vector<std::string> champs){
	if(champs.front()=="Monstre"){
		++monstre;
		if(champs.size()>6 && champs[5]=="2"){
			return new Monstre(1100+monstre,champs[1],champs[2],std::stoi(champs[3]),std::stoi(champs[4]),std::stoi(champs[5]));
		}
			return new Monstre(1100+monstre,champs[1],champs[2],std::stoi(champs[3]),std::stoi(champs[4]));
	}
	else if(champs.front()=="Malediction"){
		++malediction;
		return new Malediction(1200+malediction, champs[1],champs[2]);
	}
	else if(champs.front()=="Race"){
		++race;
		return new Race(1300+race,champs[1],champs[2]);
	}
	return NULL;
}
