#include "client.h"

client::client() {
	clientId = 0;
	fio = "Нет имени";
}

client::~client() {
}

void client::SetClient(int* i_cl, string p) {
	(this+*i_cl)->fio = p;
	(this+*i_cl)->clientId = *i_cl + 1;
	*i_cl = *i_cl + 1;
}

void client::InputClient(int i) {
	printf("Введите ФИО клиента: ");
	cin>>(this+i)->fio;
	(this+i)->clientId = i + 1;
}

void client::OutputClient(int i) {
	printf("<ID>\t\t<ФИО>\n");
	for (int j = 0; j < i; j++)
	{
		printf("%d   ", (this + j)->clientId);
		cout << (this + j)->fio;
		printf("\n");
	}
}

string client::ClientFIO() {
	return this->fio;
}

void client::SetFIO(string p) {
	this->fio = p;
}
