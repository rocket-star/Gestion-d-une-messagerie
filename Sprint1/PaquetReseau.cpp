/**
* @file IdMessage.cpp
* Projet SDA
* @author
* @version 1 14/12/17
* @brief Spécialisation des fonctions de PaquetReseau
* Structures de données et algorithmes - DUT1 Paris 5
*/



#include <iostream>
#include <fstream>
#include <string.h>
#include "PaquetReseau.h"
#include "IdMessage.h"
#include "BlocData.h"
using namespace std;


void saisir_pr(std::istream& is) {
	PaquetReseau p;
	std::string tmp;

	is >> p.noPR;
	saisir_idm(is, p.IdMes);
	is >> p.finMess;
	saisir_bd(is, p.blocD);
}

void afficher_pr(std::ostream& os, const PaquetReseau& pr) {
	PaquetReseau pr;
	os << pr.noPR << " ";
	afficher_idm(os, pr.IdMes);
	os << pr.finMess << " ";
	afficher_bd(os, pr.blocD);
}

