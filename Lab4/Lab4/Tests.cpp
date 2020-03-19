#include <assert.h>
#include <string.h>
#include "Tests.h"
#include "Cheltuieli.h"

void testCheltuieli() {

	Cheltuieli cheltuieli[2];
	char* tip1 = new char[10];
	char* tip2 = new char[10];

	strcpy_s(tip1, sizeof "haine", "haine");
	strcpy_s(tip2, sizeof "gaz", "gaz");
	Cheltuieli c1(tip1, 23,2,100);	
	Cheltuieli c2(tip2, 12,12,1560);
	cheltuieli[0] = c1;
	cheltuieli[1] = c2;
	assert(cheltuieli[0].getSuma() == 100);
	assert(cheltuieli[1].getSuma() == 1560);
	assert(cheltuieli[0].getLuna() == 2);

}