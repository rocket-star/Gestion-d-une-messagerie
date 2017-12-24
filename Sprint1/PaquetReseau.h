#pragma once

#ifndef _PAQUET_RESEAU_
#define _PAQUET_RESEAU_

/**
* @file PaquetReseau.h
* Projet SDA
* @author Rudy Fernando
* @version 1 14/12/17
* @brief Spécialisation du type PaquetReseau
* Structures de données et algorithmes - DUT1 Paris 5
*/

#include"IdMessage.h"
#include"BlocData.h"

const int MAX = 21;
struct PaquetReseau {
	int noPR;
	IdMessage IdMes;
	BlocData blocD;
	int finMess;
};


void saisir_pr(std::istream& is);

void afficher_pr(std::ostream& os, const PaquetReseau& pr);

#endif