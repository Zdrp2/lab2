#include "massage.h"

void SetMassage(massage* ms, int* i_m, const char* p, int st) {
	massage ms1;
	strcpy(ms1.fio, p);
	ms1.exp = st;
	ms1.MassageId = *i_m + 1;
	*ms = ms1;
	*i_m = *i_m + 1;
}

void InputMassage(massage *ms, int i) {
	massage ms1;
	printf("Введите стаж массажиста: ");
	InputInt(&ms1.exp);
	printf("Введите ФИО массажиста: ");
	InputString(ms1.fio);
	ms1.MassageId = i + 1;
	*ms = ms1;
}

void OutputMassage(massage ms[], int i) {
	for (int j = 0; j < i; j++)
		printf("%d) %d	%s\n", ms[j].MassageId, ms[j].exp, ms[j].fio);
}