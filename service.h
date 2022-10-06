#include "osn.h"

struct service
{
	int ServiceId;
	int price;
	char title[100];
};

void InputService(service* sr, int i);

void OutputService(service sr[], int i);

void SetService(service* sr, int *i_sr, const char* p, int pr);
