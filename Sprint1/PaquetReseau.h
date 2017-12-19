#pragma once
#include"IdMessage.h"
#include"BlocData.h"


struct PaquetReseau {
	int noPR;
	IdMessqge IdMes;
	BlocData blocD;
	int finMess;
};


void saisir_pr(std::istream& is);

void afficher_pr(std::ostream& os, const IdMessqge& m);