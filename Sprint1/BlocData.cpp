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
#include "BlocData.h"


void afficher(std::ostream& os, const BlocData& b) {
	os.width(BlocData::MAX);
	os << b.noBloc << " ";
	os << b.data[MAX];
}


BlocData saisir(std::istream& is) {
	BlocData b;
	is >> b.noBloc;
	is.width(BlocData::MAX);//prend 21 caractere qui suivent
	is >> b.data;

}