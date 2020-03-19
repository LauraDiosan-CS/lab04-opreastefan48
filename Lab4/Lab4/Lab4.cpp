#include "Cheltuieli.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>

using namespace std;

Cheltuieli::Cheltuieli() {
	this->tip = NULL;
	this->zi = 0;
	this->luna = 0;
	this->suma = 0;
}

Cheltuieli::Cheltuieli(char* tip, int zi, int luna, int suma)
{
	this->tip = new char[strlen(tip) + 1];
	strcpy_s(this->tip, 1 + strlen(tip), tip);
	this->zi = zi;
	this->luna = luna;
	this->suma = suma;
}

Cheltuieli::Cheltuieli(const Cheltuieli& c) {
	cout << "copy constructor" << endl;
	this->tip = new char[strlen(c.tip) + 1];
	strcpy_s(this->tip, 1 + strlen(c.tip), c.tip);
	this->zi = c.zi;
	this->luna = c.luna;
	this->suma = c.suma;
}

Cheltuieli::~Cheltuieli() {
	if (this->tip) {
		delete[] this->tip;
		this->tip = NULL;
	}
}

char* Cheltuieli::getName() {
	return this->tip;
}

int Cheltuieli::getZi() {
	return this->zi;
}

int Cheltuieli::getLuna() {
	return this->luna;
}
int Cheltuieli::getSuma() {
	return this->suma;
}


void Cheltuieli::setTip(char* tip)
{
	if (this->tip) {
		delete[] this->tip;
	}
	this->tip = new char[strlen(tip) + 1];
	strcpy_s(this->tip, strlen(tip) + 1, tip);
}

void Cheltuieli::setZi(int zi) {
	this->zi = zi;

}void Cheltuieli::setLuna(int luna) {
	this->luna = luna;

}void Cheltuieli::setSuma(int suma) {
	this->suma = suma;
}

ostream& operator<<(ostream& os, const Cheltuieli& c)
{
	os <<" Tipul cheltuielii: "<< c.tip << ". Ziua: " << c.zi<<". Luna: " << c.luna<< ". Suma:" <<c.suma;
	return os;
}

