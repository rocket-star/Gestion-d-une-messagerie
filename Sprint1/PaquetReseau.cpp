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


PaquetReseau saisir_pr(std::istream& is) {
	PaquetReseau pr;

	is >> pr.noPR;
	saisir_idm(is, pr.IdMes);
	is >> pr.finMess;
	saisir_bd(is, pr.blocD);
	return pr;
}

void afficher_pr(std::ostream& os, PaquetReseau pr) {
	os << pr.noPR << " ";
	afficher_idm(os, pr.IdMes);
	os << pr.finMess << " ";
	afficher_bd(os, pr.blocD);
}

