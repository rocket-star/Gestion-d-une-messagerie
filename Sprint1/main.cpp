#include<iostream>
#include<fstream>
#include "PaquetReseau.h"
using namespace std;

int main() {

	char nomFichier[80];
	cout << "saisir le nom du fichier" << endl;
	cin >> nomFichier;
	ifstream fLigne(nomFichier, ios_base::in);//fichier ouvert en lecture
	if (fLigne.fail()) {
		cerr << "Ouverture de" << nomFichier << "imposible" << endl;
		exit(1);
	}
	while (fLigne.good()) {
		PaquetReseau pr = saisir_pr(fLigne);
		afficher_pr(cout, pr);
	}
	fLigne.close();
	system("pause");
	return 0;
}