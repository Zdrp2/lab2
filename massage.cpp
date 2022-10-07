#include "massage.h"

massage::massage() {
}

massage::~massage() {
}

void massage::SetMassage(massage* ms, int* i_m, const char* p, int st) {
	massage ms1;
	strcpy(ms1.fio, p);
	ms1.exp = st;
	ms1.MassageId = *i_m + 1;
	*ms = ms1;
	*i_m = *i_m + 1;
}

void massage::InputMassage(massage *ms, int i) {
	massage ms1;
	printf("Введите стаж массажиста: ");
	InputInt(&ms1.exp);
	printf("Введите ФИО массажиста: ");
	InputString(ms1.fio);
	ms1.MassageId = i + 1;
	*ms = ms1;
}

void massage::OutputMassage(massage ms[], int i) {
	printf("<ID>\t\t<ФИО>\t\t<Стаж>\n");
	for (int j = 0; j < i; j++)
		printf("%d%25s%10d\n", ms[j].MassageId, ms[j].fio, ms[j].exp);
}

void massage::SetFIO(const char* p) {
	strcpy(this->fio, p);
}

char* massage::MassageFIO() {
	return this->fio;
}