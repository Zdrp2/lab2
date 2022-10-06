#include "osn.h"

struct client
{
	int clientId;
	char fio[100];
};

void InputClient(client *cl, int i);

void SetClient(client* cl, int* i_cl, const char* p);

void OutputClient(client cl[], int i);