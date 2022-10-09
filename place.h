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

	void InputPlace(int i);

	void OutputPlace(int i);

	void SetPlace(int* i_p, const char* p, int h);

	void SetStreet(const char* p);

	void SetHouse(int k);

	int PlaceHouse();

	char* PlaceStreet();
};
