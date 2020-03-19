#pragma once
#include <ostream>
using namespace std;

class Cheltuieli {
private:
	char* tip;
	int zi,luna,suma;
public:
	Cheltuieli();
	Cheltuieli(char* tip, int zi,int luna,int suma);
	Cheltuieli(const Cheltuieli& c);
	~Cheltuieli();
	char* getName();
	int getZi();
	int getLuna();
	int getSuma();
	void setTip(char* tip);
	void setZi(int zi);
	void setLuna(int luna);
	void setSuma(int suma);
	friend ostream& operator<<(ostream& os, const Cheltuieli& s);


};
