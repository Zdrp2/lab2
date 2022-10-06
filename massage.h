#include "osn.h"

struct massage
{
	int MassageId;
	int exp;
	char fio[100];
};

void InputMassage(massage* ms, int);

void OutputMassage(massage ms[], int i);

void SetMassage(massage* ms, int* i_m, const char* p, int st);
