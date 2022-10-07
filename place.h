#include "osn.h"

class place
{
private:
	int PlaceId;
	char street[50];
	int house;
public:
	place();

	~place();

	void InputPlace(place* pl, int i);

	void OutputPlace(place pl[], int i);

	void SetPlace(place* pl, int* i_p, const char* p, int h);

	void SetStreet(const char* p);

	void SetHouse(int k);

	int PlaceHouse();

	char* PlaceStreet();
};
