#include "osn.h"

class place
{
private:
	int PlaceId;
	string street;
	int house;
public:
	place();

	~place();

	void InputPlace(int i);

	void OutputPlace(int i);

	void SetPlace(int* i_p, string p, int h);

	void SetStreet(string p);

	void SetHouse(int k);

	int PlaceHouse();

	string PlaceStreet();
};
