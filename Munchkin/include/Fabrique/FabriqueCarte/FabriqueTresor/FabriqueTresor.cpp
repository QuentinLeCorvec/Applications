#include "FabriqueTresor.hpp"


FabriqueTresor::FabriqueTresor():FabriqueCarte(){
  potion = 0;
  equipement = 0;
  armure = 0;
  main = 0;
  chaussure = 0;
  couvrechef = 0;
}

FabriqueTresor::~FabriqueTresor(){
}

Carte * FabriqueTresor::fabriquer(std::vector<std::string> champs){
	if(champs.front()=="Potion"){
		return new Potion(2100+potion,champs[1],champs[2],std::stoi(champs[3]));
	}
	else if(champs.front()=="Equipement"){
		return new Equipement(2200+equipement,champs[1],champs[2],std::stoi(champs[3]));
	}
	else if(champs.front()=="Armure"){
		return new Armure(2300+armure,champs[1],champs[2],std::stoi(champs[3]));
	}
	else if(champs.front()=="Main"){
		if(champs.size()>5 && champs[4]=="2") return new Main(2400+main,champs[1],champs[2],stoi(champs[3]),stoi(champs[4]));
		else return new Main(2400+main,champs[1],champs[2],stoi(champs[3]));
	}
	else if(champs.front()=="Chaussure"){
		return new Chaussure(2500+chaussure,champs[1],champs[2],stoi(champs[3]));
	}
	else if(champs.front()=="CouvreChef"){
		return new CouvreChef(2600+couvrechef,champs[1],champs[2],stoi(champs[3]));
	}
	return NULL;
}
