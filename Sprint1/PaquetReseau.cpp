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
#include "PaquetReseau.h"


void saisir_pr(std::istream& is) {
	PaquetReseau p;
	is >> p.noPR;
	is >> ws;
	is >> p.IdMes;
	is >> ws;
	is >> p.blocD;
	is >> p.finMess;
}

void afficher_pr(std::ostream& os, const IdMessqge& m) {
	os << p.noPR << " ";
	os << p.IdMes << " ";
	os << p.blocD << " ";
	os << p.finMess << " ";
}

