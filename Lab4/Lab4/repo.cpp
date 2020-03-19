#include "Repo.h"

Repo::Repo() {
	this->n = 0;
}
Repo::~Repo() {
	this->n = 0;
}
void Repo::addCheltuieli(Cheltuieli c) {
	this->cheltuieli[this->n++] = c;
}

Cheltuieli* Repo::getAll() {
	return this->cheltuieli;
}