/**
 * \file Joueur.hpp
 * \brief declaration classe Joueur
 * \author Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

/****************************************************************************************************/


#include "../Personnage.hpp"
#include "../../Munchkin/Munchkin.hpp"
#include "../../Carte/Porte/Race/Race.hpp"
#include "EtatJoueur/DebutTour/DebutTour.hpp"
#include "EtatJoueur/OuvrirPorte/OuvrirPorte.hpp"
#include "EtatJoueur/Bagarre/Bagarre.hpp"
#include "EtatJoueur/FinTour/FinTour.hpp"
#include "EtatJoueur/Attente/Attente.hpp"
#include "../../Carte/Tresor/Equipement/CouvreChef/CouvreChef.hpp"
#include "../../Carte/Tresor/Equipement/Main/Main.hpp"
#include "../../Carte/Tresor/Equipement/Chaussure/Chaussure.hpp"
#include "../../Carte/Tresor/Equipement/Armure/Armure.hpp"
#include <string>

/****************************************************************************************************/

class Munchkin;

class DebutTour;
class OuvrirPorte;
class Bagarre;
class FinTour;
class Attente;


class EtatJoueur;

class Main;
class Armure;
class Chaussure;
class CouvreChef;

class Joueur:public Personnage{
  public:


    /**
	*\fn	Joueur()
	*\brief	Constructeur de Joueur
	*\param j	jeu
	*\param i	identifiant
	*\param r	race du joueur
	*/
    Joueur(Munchkin * j, int i, Race * r);

    /**
	*\fn	~Joueur()
	*\brief	Destructeur de Joueur
	*/
    ~Joueur();

	/**
	*\fn	void afficher()
	*\brief	Affichage des caract�ristiques du joueur
	*/
    void afficher();
	
	/**
	*\fn	void defausser(Carte *c)
	*\brief	Permet au joueur de d�fausser une carte
	*\param c Carte � d�fausser
	*/
	void defausser(Carte *c);
	
	/**
	*\fn	void finTour()
	*\brief	Permet au joueur de terminer son tour
	*/
	void finTour();
	
	/**
	*\fn	void equiperEquipement(Carte * e)
	*\brief	Permet au joueur d'�quiper un equipement
	*\param e Carte equipement � �quiper
	*/
	void equiperEquipement(Carte * e);
	
	/**
	*\fn	void equiperCouvreChef(Carte * c)
	*\brief	Permet au joueur d'�quiper un CouvreChef
	*\param c Carte CouvreChef � �quiper
	*/
	void equiperCouvreChef(Carte * c);
	
	/**
	*\fn	void equiper1Main(Carte * m)
	*\brief	Permet au joueur d'�quiper un objet 1 main
	*\param m Carte objet 1 main � �quiper
	*/
	void equiper1Main(Carte * m);
	
	/**
	*\fn	void equiper2Main(Carte * m)
	*\brief	Permet au joueur d'�quiper un objet 2 mains
	*\param m Carte objet 2 mains � �quiper
	*/
	void equiper2Main(Carte * m);
	
	/**
	*\fn	void equiperArmure(Carte * a)
	*\brief	Permet au joueur d'�quiper une armure
	*\param a Carte armure � �quiper
	*/
	void equiperArmure(Carte * a);
	
	/**
	*\fn	void equiperChaussure(Carte * c)
	*\brief	Permet au joueur d'�quiper des chaussures
	*\param c Carte chaussures � �quiper
	*/
	void equiperChaussure(Carte * c);

    /**
	*\fn	void setNbCartesMain(int n)
	*\brief	Change la valeur du nombre max de cartes en main
	*\param n ///\ valeur du nombre max de cartes en main
	*/
    void setNbCartesMain(int n);
	
	/**
	*\fn	void getNbCartesMain()
	*\brief	Renvoie la valeur du nombre max de cartes en main
	*\return nombre max de cartes en main
	*/
    int getNbCartesMain();
	
	 /**
	*\fn	void setValDeguerpir(int val)
	*\brief	Change la valeur du bonus pour deguerpir
	*\param val ///\ valeur du bonus pour deguerpir
	*/
    void setValDeguerpir(int val);
	
	/**
	*\fn	void getValDeguerpir
	*\brief	Renvoie la valeur du bonus pour deguerpir
	*\return valeur du bonus pour deguerpir
	*/
    int getValDeguerpir();
    Carte * getRace();
	
	 /**
	*\fn	void setRace(Carte *r)
	*\brief	Change la race du joueur
	*\param r ///\ race du joueur
	*/
    void setRace(Carte *r);
	
	/**
	*\fn	int getId()
	*\brief	Renvoie l'identifiant du joueur
	*\return identifiant du joueur
	*/
    int getId();

	 /**
	*\fn	void setEtat(EtatJoueur * e)
	*\brief	Change l'�tat du joueur
	*\param e ///\ �tat du joueur
	*/
	void setEtat(EtatJoueur * e);
	
	/**
	*\fn	EtatJoueur * getEtat()
	*\brief	Renvoie l'�tat du joueur
	*\return �tat du joueur
	*/
	EtatJoueur * getEtat();

	/**
	*\fn	DebutTour * getDebut()
	*\brief	Renvoie l'�tat debut
	*\return �tat debut
	*/
    DebutTour * getDebut();
	
	/**
	*\fn	OuvrirPorte * getOuvrirLaPorte()
	*\brief	Renvoie l'�tat ouvrirLaPorte
	*\return �tat ouvrirLaPorte
	*/
	OuvrirPorte * getOuvrirLaPorte();
	
	/**
	*\fn	Bagarre * getBagarre()
	*\brief	Renvoie l'�tat bagarre
	*\return �tat bagarre
	*/
	Bagarre * getBagarre();
	
	/**
	*\fn	FinTour * getFin()
	*\brief	Renvoie l'�tat fin
	*\return �tat fin
	*/
	FinTour * getFin();
	
	/**
	*\fn	Attente * getAttente()
	*\brief	Renvoie l'�tat attente
	*\return �tat attente
	*/
	Attente * getAttente();

	/**
	*\fn	vector<Carte*>& getBagage()
	*\brief	Renvoie le bagage du joueur
	*\return bagage du joueur
	*/
	vector<Carte*>& getBagage();
	
	/**
	*\fn	vector<Carte*>& getEquipe()
	*\brief	Renvoie les �quipements �quip�s du joueur
	*\return �quipements �quip�s du joueur
	*/
	vector<Carte*>& getEquipe();
	
	/**
	*\fn	vector<Carte*>& getMain()
	*\brief	Renvoie la main du joueur
	*\return la main du joueur
	*/
	vector<Carte*>& getMain();
	
	/**
	*\fn	Carte * getMaing()
	*\brief	Renvoie l'equipement tenu dans la main gauche du joueur
	*\return l'equipement tenu dans la main gauche du joueur
	*/
	Carte * getMaing();
	
	/**
	*\fn	void setMaing(Carte * m)
	*\brief	change l'equipement tenu dans la main gauche du joueur
	*\param m nouvel equipement tenu dans la main gauche du joueur
	*/
	void setMaing(Carte * m);
	
	/**
	*\fn	Carte * getMaind()
	*\brief	Renvoie l'equipement tenu dans la main droite du joueur
	*\return l'equipement tenu dans la main droite du joueur
	*/
	Carte * getMaind();
	
	/**
	*\fn	void setMaind(Carte * m)
	*\brief	change l'equipement tenu dans la main droite du joueur
	*\param m nouvel equipement tenu dans la main droite du joueur
	*/
	void setMaind(Carte * m);
	
	/**
	*\fn	Carte * getTorse()
	*\brief	Renvoie l'equipement que le joueur porte sur le torse
	*\return equipement que le joueur porte sur le torse
	*/
	Carte * getTorse();
	
	/**
	*\fn	void setTorse(Carte * a)
	*\brief	Change l'equipement que le joueur porte sur le torse
	*\param nouvel equipement que le joueur porte sur le torse
	*/
	void setTorse(Carte * a);
	
	/**
	*\fn	Carte * getPieds()
	*\brief	Renvoie l'equipement que le joueur porte aux pieds
	*\return equipement que le joueur porte aux pieds
	*/
	Carte * getPieds();
	
	/**
	*\fn	void setPieds(Carte * c)
	*\brief	Change l'equipement que le joueur porte aux pieds
	*\param nouvel  equipement que le joueur porte aux pieds
	*/
	void setPieds(Carte * c);
	
	/**
	*\fn	Carte * getTete()
	*\brief	Renvoie l'equipement que le joueur porte sur la t�te
	*\return equipement que le joueur porte sur la t�te
	*/
	Carte * getTete();
	
	/**
	*\fn	void setTete(Carte * c)
	*\brief	Change l'equipement que le joueur porte sur la t�te
	*\return nouvel equipement que le joueur porte sur la t�te
	*/
	void setTete(Carte * c);


	Munchkin * getJeu();


  private:
    //Attributs
    int id;/*!< identifient du joueur*/
    int nbCartesMain;/*!< nombre de cartes que le joueur peut avoir en main*/
    int valDeguerpir;/*!< bonus pour deguerpir*/

	DebutTour * debut;/*!< etat de debut du tour*/
    OuvrirPorte * ouvrirLaPorte;/*!< etat ouvrirPorte*/
	Bagarre * bagarre;/*!< etat Bagarre*/
	FinTour * fin;/*!< etat FinTour*/
	Attente * attente;/*!< etat Attente*/


	EtatJoueur * etat_;/*!< etat courant*/

	Carte * race;/*!< Race du joueur*/

    std::vector<Carte*>  main;/*!< liste cartes dans la main du joueur*/
    std::vector<Carte*> bagage;/*!< liste des equipements non �quip�s*/
    std::vector<Carte*> equipe;/*!< liste des equipements �quip�s*/
    Carte * maing;/*!< Equipement port� dans la main gauche*/
    Carte * maind;/*!< Equipement port� dans la main droite*/
    Carte * pieds;/*!< Equipement port� aux pieds*/
    Carte * torse;/*!< Equipement port� sur le torse*/
    Carte * tete;/*!< Equipement port� sur la t�te*/

    Munchkin * jeu;/*!<partie en cours*/



}; //Class Joueur

/****************************************************************************************************/

#endif //JOUEUR_HPP

/****************************************************************************************************/
