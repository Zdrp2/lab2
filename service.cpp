#include "service.h"

service::service() {
}

service::~service() {
}

void service::SetService(service *sr, int *i_sr, const char* p, int pr) {
	service sr1;
	strcpy(sr1.title, p);
	sr1.price = pr;
	sr1.ServiceId = *i_sr + 1;
	*sr = sr1;
	*i_sr = *i_sr + 1;
}

void service::InputService(service *sr, int i) {
	service sr1;
	printf("Введите название услуги: ");
	InputString(sr1.title);
	printf("Введите цену услуги: ");
	InputInt(&sr1.price);
	sr1.ServiceId = i + 1;
	*sr = sr1;
}

void service::OutputService(service sr[], int i) {
	printf("<ID>\t\t<Услуга>\t<Цена>\n");
	for (int j = 0; j < i; j++)
		printf("%d%25s%10d\n", sr[j].ServiceId, sr[j].title, sr[j].price);
}

void service::SetTitle(const char* p) {
	strcpy(this->title, p);
}

void service::SetPrice(int k) {
	this->price = k;
}

char* service::ServiceTitle() {
	return this->title;
}

int service::ServicePrice() {
	return this->price;
}