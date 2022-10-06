#include "place.h"

void SetPlace(place* pl, int* i_p, const char* p, int h) {
	place pl1;
	strcpy(pl1.street, p);
	pl1.house = h;
	pl1.PlaceId = *i_p + 1;
	*pl = pl1;
	*i_p = *i_p + 1;
}

void InputPlace(place *pl, int i) {
	place pl1;
	printf("¬ведите улицу: ");
	InputString(pl1.street);
	printf("¬ведите номер дома: ");
	InputInt(&pl1.house);
	pl1.PlaceId = i + 1;
	*pl = pl1;
}

void OutputPlace(place pl[], int i) {
	for (int j = 0; j < i; j++)
		printf("%d) %s	%d\n", pl[j].PlaceId, pl[j].street, pl[j].house);
}