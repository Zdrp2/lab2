#include "client.h"

client::client() {
}

client::~client() {
}

void client::SetClient(client* cl, int* i_cl, const char* p) {
	client cl1;
	strcpy(cl1.fio, p);
	cl1.clientId = *i_cl + 1;
	*cl = cl1;
	*i_cl = *i_cl + 1;
}

void client::InputClient(client *cl, int i) {
	client cl1;
	printf("Введите ФИО клиента: ");
	InputString(cl1.fio);
	cl1.clientId = i + 1;
	*cl = cl1;
}

void client::OutputClient(client cl[], int i) {
	printf("<ID>\t\t<ФИО>\n");
	for (int j = 0; j < i; j++)
		printf("%d%27s\n", cl[j].clientId, cl[j].fio);
}

char* client::ClientFIO() {
	return this->fio;
}

void client::SetFIO(const char* p) {
	strcpy(this->fio, p);
}