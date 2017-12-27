#pragma once

#ifndef _ID_MESSAGE_
#define _ID_MESSAGE_

/**
* @file IdMessage.h
* Projet SDA
* @author Rudy Fernando
* @version 1 14/12/17
* @brief Spécialisation du type IdMessage
* Structures de données et algorithmes - DUT1 Paris 5
*/


struct IdMessage {
	enum { MAX = 21 };
	char exp[MAX];
	char dest[MAX];
	char d[9];//date
	char h[9];//heure
};

void afficher_idm(std::ostream& os, const IdMessage m);

void saisir_idm(std::istream& is, IdMessage m);

#endif