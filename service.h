#include "osn.h"

class service
{
private:
	int ServiceId;
	int price;
	char title[100];
public:
	service();

	~service();

	void InputService(int i);

	void OutputService(int i);

	void SetService(int* i_sr, const char* p, int pr);

	void SetTitle(const char* p);

	void SetPrice(int k);

	char* ServiceTitle();

	int ServicePrice();

};
