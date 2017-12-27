/**
* @file IdMessage.cpp
* Projet SDA
* @author
* @version 1 14/12/17
* @brief Spécialisation des fonctions de IdMessage
* Structures de données et algorithmes - DUT1 Paris 5
*/



#include <iostream>
#include <fstream>
#include "IdMessage.h"

void saisir_idm(std::istream& is, IdMessage m) {
	//int nb;
	//is >> nb;
	is >> m.exp;
	is >> m.dest;
	is >> m.d;
	is >> m.h;
}

void afficher_idm(std::ostream& os, const IdMessage m) {
	os << m.exp << " ";
	os << m.dest << " ";
	os << m.d << " ";
	os << m.h << " ";
}





