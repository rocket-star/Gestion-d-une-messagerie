#pragma once
#ifndef _BLOC_DATA_
#define _BLOC_DATA_

/**
* @file BlocData.h
* Projet SDA
* @author Rudy Fernando
* @version 1 14/12/17
* @brief Sp�cialisation du type BlocData
* Structures de donn�es et algorithmes - DUT1 Paris 5
*/

enum { MAX = 21 };


struct BlocData {
	unsigned int noBloc;
	char data[MAX];
};


/**
* @brief Affiche un BlocData
* @param [in] os : flux d'affichage
* @param [in] b : BlocData � afficher
*/
void afficher(std::ostream& os, const BlocData& b);


/**
* @brief Saisie d'un BlocData
* @param [in] is : flux d'affichage
* @param [in-out] b : BlocData � remplir
*/
BlocData saisir(std::istream& is);

#endif
