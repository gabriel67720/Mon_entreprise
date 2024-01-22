#pragma once
#include <string>
using namespace std;
class Employe
{
protected:
	string nom, prenom;
	int age;
public:
	string getNom();
	void setNom(string n);
	void setPrenom(string p);
	void setAge(int a);
};

