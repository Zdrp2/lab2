#include "osn.h"

class service
{
private:
	int ServiceId;
	int price;
	string title;
public:
	service();

	~service();

	void InputService(int i);

	void OutputService(int i);

	void SetService(int* i_sr, string p, int pr);

	void SetTitle(string p);

	void SetPrice(int k);

	string ServiceTitle();

	int ServicePrice();

};
