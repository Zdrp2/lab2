#include "client.h"

void SetClient(client* cl, int* i_cl, const char* p) {
	client cl1;
	strcpy(cl1.fio, p);
	cl1.clientId = *i_cl + 1;
	*cl = cl1;
	*i_cl = *i_cl + 1;
}

void InputClient(client *cl, int i) {
	client cl1;
	printf("������� ��� �������: ");
	InputString(cl1.fio);
	cl1.clientId = i + 1;
	*cl = cl1;
}

void OutputClient(client cl[], int i) {
	for (int j = 0; j < i; j++)
		printf("%d) %s\n", cl[j].clientId, cl[j].fio);
}