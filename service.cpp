#include "service.h"

service::service() {
	title = "Нет названия";
	price = 0;
	ServiceId = 0;
}

service::~service() {
}

void service::SetService(int *i_sr, string p, int pr) {
	(this + *i_sr)->title = p;
	(this + *i_sr)->price = pr;
	(this + *i_sr)->ServiceId = *i_sr + 1;
	*i_sr = *i_sr + 1;
}

void service::InputService(int i) {
	printf("Введите название услуги: ");
	cin>>(this + i)->title;
	printf("Введите цену услуги: ");
	InputInt(&(this + i)->price);
	(this + i)->ServiceId = i + 1;
}

void service::OutputService(int i) {
	printf("<ID>\t\t<Цена>\t<Услуга>\n");
	for (int j = 0; j < i; j++)
	{
		printf("%d%10d", (this + j)->ServiceId, (this + j)->price);
		cout << (this + j)->title;
		printf("\n");
	}
}

void service::SetTitle(string p) {
	this->title = p;
}

void service::SetPrice(int k) {
	this->price = k;
}

string service::ServiceTitle() {
	return this->title;
}

int service::ServicePrice() {
	return this->price;
}