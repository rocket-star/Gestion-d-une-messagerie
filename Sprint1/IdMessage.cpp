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

void saisir(std::istream& is) {
	IdMessqge m;
	is >> m.exp[MAX];
	is >> m.dest[MAX];
	is >> m.d[9];
	is >> m.h[9];
}

void afficher(std::ostream& os, const IdMessqge& m) {
	os << m.exp[MAX] << " ";
	os << m.dest[MAX] << " ";
	os << m.d[9] << " ";
	os << m.h[9] << " ";
}





