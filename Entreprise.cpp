#include "Entreprise.h"
#include <iostream>


void Entreprise::afficheVendeurs()
{
	cout << vendeurs[0].getNom();
}

void Entreprise::setVendeur(string nom, string prenom, int age)
{
	vendeurs[0].setNom(nom);
	vendeurs[0].setPrenom(prenom);
	vendeurs[0].setAge(age);

}

