#include "service.h"

service::service() {
}

service::~service() {
}

void service::SetService(int *i_sr, const char* p, int pr) {
	strcpy((this + *i_sr)->title, p);
	(this + *i_sr)->price = pr;
	(this + *i_sr)->ServiceId = *i_sr + 1;
	*i_sr = *i_sr + 1;
}

void service::InputService(int i) {
	printf("Введите название услуги: ");
	InputString((this + i)->title);
	printf("Введите цену услуги: ");
	InputInt(&(this + i)->price);
	(this + i)->ServiceId = i + 1;
}

void service::OutputService(int i) {
	printf("<ID>\t\t<Услуга>\t<Цена>\n");
	for (int j = 0; j < i; j++)
		printf("%d%25s%10d\n", (this + j)->ServiceId, (this + j)->title, (this + j)->price);
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