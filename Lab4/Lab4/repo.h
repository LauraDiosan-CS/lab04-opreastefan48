#pragma once
#include "Cheltuieli.h"

class Repo {
private:
	Cheltuieli cheltuieli[40];
	int n;
public:
	Repo();
	~Repo();
	void addCheltuieli(Cheltuieli c);
	Cheltuieli* getAll();
};