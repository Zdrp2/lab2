#include "osn.h"

struct place
{
	int PlaceId;
	char street[50];
	int house;
};

void InputPlace(place* pl, int i);

void OutputPlace(place pl[], int i);

void SetPlace(place* pl, int* i_p, const char* p, int h);
