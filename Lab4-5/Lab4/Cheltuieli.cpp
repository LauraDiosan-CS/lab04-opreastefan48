#include "Cheltuieli.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>

using namespace std;
Cheltuieli::Cheltuieli() {
	this->tip = NULL;
	this->zi = 0;
	this->suma = 0;
}
//Crearea unei cheltuieli
//in: 2 var int si un char, reprezentand valorile cheltuielii
//out: 
Cheltuieli::Cheltuieli(const char* tip, int zi, int suma)
{
	this->tip = new char[strlen(tip) + 1];
	strcpy_s(this->tip, 1 + strlen(tip), tip);
	this->zi = zi;
	this->suma = suma;
}


Cheltuieli::Cheltuieli(const Cheltuieli& c) {
	cout << "copy constructor" << endl;
	this->tip = new char[strlen(c.tip) + 1];
	strcpy_s(this->tip, 1 + strlen(c.tip), c.tip);
	this->zi = c.zi;
	this->suma = c.suma;
}

Cheltuieli::~Cheltuieli() {
	if (this->tip) {
		delete[] this->tip;
		this->tip = NULL;
	}
}
// returneaza tipul cerut
char* Cheltuieli::getTip() {
	return this->tip;
}
// returneaza ziua ceruta
int Cheltuieli::getZi() {
	return this->zi;
}

// returneaza sumacerut

int Cheltuieli::getSuma() {
	return this->suma;
}

//seteaza tipul
void Cheltuieli::setTip(const char* n) {
	if (tip) delete[]tip;
	tip = new char[strlen(n) + 1];
	strcpy_s(tip, strlen(n) + 1, n);
}

void Cheltuieli::setZi(int zi) {
	this->zi = zi;


}void Cheltuieli::setSuma(int suma) {
	this->suma = suma;
}

ostream& operator<<(ostream& os, const Cheltuieli& c)
{
	os << " Tipul cheltuielii: " << c.tip << ". Ziua: " << c.zi << ". Suma: " << c.suma;
	return os;
}

istream& operator>>(istream& is, Cheltuieli& c)
{
	cout << "Dati tipul cheltuielii: ";
	char* tip = new char[10];
	is >> tip;
	cout << "Dati ziua: ";
	int z, s;
	cin >> z;
	cout << "Dati suma platita: ";
	cin >> s;
	c.setTip(tip);
	c.setSuma(s);
	c.setZi(z);
	delete[] tip;
	return is;
}
Cheltuieli& Cheltuieli::operator=(const Cheltuieli& c) {
	if (this == &c) return *this;

	if (tip) delete[] tip;
	tip = new char[strlen(c.tip) + 1];
	strcpy_s(tip, strlen(c.tip) + 1, c.tip);
	zi = c.zi;
	suma = c.suma;
	return *this;
}

bool Cheltuieli::operator==(const Cheltuieli& c) {
	return (strcmp(tip, c.tip) == 0) and (zi == c.zi) and (suma == c.suma);
}

