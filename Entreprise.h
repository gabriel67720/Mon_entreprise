#pragma once
#include <string>
#include "Vendeur.h"
using namespace std;

class Entreprise
{
private:
	string nom;
	Vendeur vendeurs[5];

public:
	void afficheVendeurs();
	void setVendeur(string nom, string prenom, int age);
};

