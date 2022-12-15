#include "place.h"

place::place() {
	street = "Нет улицы";
	house = 0;
	PlaceId = 0;
}

place::~place() {
}

void place::SetPlace(int* i_p, string p, int h) {
	(this + *i_p)->street = p;
	(this + *i_p)->house = h;
	(this + *i_p)->PlaceId = *i_p + 1;
	*i_p = *i_p + 1;
}

void place::InputPlace(int i) {
	printf("Введите улицу: ");
	cin>>(this + i)->street;
	printf("Введите номер дома: ");
	InputInt(&(this + i)->house);
	(this + i)->PlaceId = i + 1;
}

void place::OutputPlace(int i) {
	printf("<ID>\t\t\t<Адрес>\n");
	for (int j = 0; j < i; j++)
	{
		printf("%d   ", (this + j)->PlaceId);
		cout << (this + j)->street;
		printf(", %d\n", (this + j)->house);
	}
}

void place::SetStreet(string p) {
	this->street = p;
}

void place::SetHouse(int k) {
	this->house = k;
}

int place::PlaceHouse() {
	return this->house;
}

string place::PlaceStreet() {
	return this->street;

}