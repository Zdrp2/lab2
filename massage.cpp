#include "massage.h"

massage::massage() {
}

massage::~massage() {
}

void massage::SetMassage(int* i_m, const char* p, int st) {
	strcpy((this+*i_m)->fio, p);
	(this+*i_m)->exp = st;
	(this+*i_m)->MassageId = *i_m + 1;
	*i_m = *i_m + 1;
}

void massage::InputMassage(int i) {
	printf("������� ���� ����������: ");
	InputInt(&(this + i)->exp);
	printf("������� ��� ����������: ");
	InputString((this + i)->fio);
	(this + i)->MassageId = i + 1;
}

void massage::OutputMassage(int i) {
	printf("<ID>\t\t<���>\t\t<����>\n");
	for (int j = 0; j < i; j++)
		printf("%d%25s%10d\n", (this+j)->MassageId, (this + j)->fio, (this + j)->exp);
}

void massage::SetFIO(const char* p) {
	strcpy(this->fio, p);
}

char* massage::MassageFIO() {
	return this->fio;
}