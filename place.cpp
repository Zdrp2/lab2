#include "place.h"

place::place() {
}

place::~place() {
}

void place::SetPlace(int* i_p, const char* p, int h) {
	strcpy((this + *i_p)->street, p);
	(this + *i_p)->house = h;
	(this + *i_p)->PlaceId = *i_p + 1;
	*i_p = *i_p + 1;
}

void place::InputPlace(int i) {
	printf("¬ведите улицу: ");
	InputString((this + i)->street);
	printf("¬ведите номер дома: ");
	InputInt(&(this + i)->house);
	(this + i)->PlaceId = i + 1;
}

void place::OutputPlace(int i) {
	printf("<ID>\t\t\t<јдрес>\n");
	for (int j = 0; j < i; j++)
		printf("%d%28s, %d\n", (this + j)->PlaceId, (this + j)->street, (this + j)->house);
}

void place::SetStreet(const char* p) {
	strcpy(this->street, p);
}

void place::SetHouse(int k) {
	this->house = k;
}

int place::PlaceHouse() {
	return this->house;
}

char* place::PlaceStreet() {
	return this->street;

}