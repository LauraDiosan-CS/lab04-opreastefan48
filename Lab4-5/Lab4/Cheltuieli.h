#pragma once
#include <ostream>
using namespace std;

class Cheltuieli {
private:
	char* tip;
	int zi,suma;
public:
	Cheltuieli();
	Cheltuieli(const char* tip, int zi,int suma);
	Cheltuieli(const Cheltuieli& c);
	Cheltuieli& operator=(const Cheltuieli&);

	~Cheltuieli();
	char* getTip();
	int getZi();
	int getSuma();
	void setTip(const char* n);
	void setZi(int zi);
	void setSuma(int suma);
	bool operator==(const Cheltuieli&);
	friend ostream& operator<<(ostream& os, const Cheltuieli& c);
	friend istream& operator>>(istream&, Cheltuieli&);


};
