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
	printf("������� ���� ����������: ");
	InputInt(&ms1.exp);
	printf("������� ��� ����������: ");
	InputString(ms1.fio);
	ms1.MassageId = i + 1;
	*ms = ms1;
}

void massage::OutputMassage(massage ms[], int i) {
	for (int j = 0; j < i; j++)
		printf("%d) %d	%s\n", ms[j].MassageId, ms[j].exp, ms[j].fio);
}

void massage::SetFIO(const char* p) {
	strcpy(this->fio, p);
}

char* massage::MassageFIO() {
	return this->fio;
}