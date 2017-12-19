#pragma once




struct IdMessqge {
	enum { MAX = 21 };
	char exp[MAX];
	char dest[MAX];
	char d[9];//date
	char h[9];//heure
};

void afficher(std::ostream& os, const IdMessqge& m);

