#include "client.h"

client::client() {
}

client::~client() {
}

void client::SetClient(int* i_cl, const char* p) {
	strcpy((this+*i_cl)->fio, p);
	(this+*i_cl)->clientId = *i_cl + 1;
	*i_cl = *i_cl + 1;
}

void client::InputClient(int i) {
	printf("Введите ФИО клиента: ");
	InputString((this+i)->fio);
	(this+i)->clientId = i + 1;
}

void client::OutputClient(int i) {
	printf("<ID>\t\t<ФИО>\n");
	for (int j = 0; j < i; j++)
		printf("%d%27s\n", (this+j)->clientId, (this + j)->fio);
}

char* client::ClientFIO() {
	return this->fio;
}

void client::SetFIO(const char* p) {
	strcpy(this->fio, p);
}