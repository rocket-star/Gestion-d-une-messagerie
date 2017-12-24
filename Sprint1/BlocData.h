#pragma once
#ifndef _BLOC_DATA_
#define _BLOC_DATA_

/**
* @file BlocData.h
* Projet SDA
* @author Rudy Fernando
* @version 1 14/12/17
* @brief Spécialisation du type BlocData
* Structures de données et algorithmes - DUT1 Paris 5
*/

const int MAX = 21;


struct BlocData {
	unsigned int noBloc;
	char data[MAX];
};


/**
* @brief Affiche un BlocData
* @param [in] os : flux d'affichage
* @param [in] b : BlocData à afficher
*/
void afficher_bd(std::ostream& os, const BlocData& b);


/**
* @brief Saisie d'un BlocData
* @param [in] is : flux d'affichage
* @param [in-out] b : BlocData à remplir
*/
BlocData saisir_bd(std::istream& is, BlocData& b);

#endif
