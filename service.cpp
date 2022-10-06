#include "service.h"

void SetService(service *sr, int *i_sr, const char* p, int pr) {
	service sr1;
	strcpy(sr1.title, p);
	sr1.price = pr;
	sr1.ServiceId = *i_sr + 1;
	*sr = sr1;
	*i_sr = *i_sr + 1;
}

void InputService(service *sr, int i) {
	service sr1;
	printf("¬ведите название услуги: ");
	InputString(sr1.title);
	printf("¬ведите цену услуги: ");
	InputInt(&sr1.price);
	sr1.ServiceId = i + 1;
	*sr = sr1;
}

void OutputService(service sr[], int i) {
	for (int j = 0; j < i; j++)
		printf("%d) %s	%d\n", sr[j].ServiceId, sr[j].title, sr[j].price);
}