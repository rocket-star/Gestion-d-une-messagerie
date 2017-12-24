/**
* @file BlocData.cpp
* Projet SDA
* @author Rudy Fernando
* @version 1 14/12/17
* @brief Spécialisation des fonctions de BlocData
* Structures de données et algorithmes - DUT1 Paris 5
*/



#include <iostream>
#include <fstream>
#include <string.h>
#include "BlocData.h"


void afficher_bd(std::ostream& os, const BlocData& b) {
	//os.width(MAX);
	os << b.noBloc << " ";
	os << b.data[MAX];
}


BlocData saisir_bd(std::istream& is, BlocData& b) {
	BlocData b;
	int tmp;
	string mot;
	is >> tmp;
	is >> mot;
	is >> mot;
	is >> mot;
	is >> mot;
	is >> tmp;
	is >> b.noBloc;
	//is.width(MAX);//prend 21 caractere qui suivent
	is >> b.data;
}