#include "massage.h"

massage::massage() {
	MassageId = 0;
	exp = 0;
	fio = "Нет имени";
}

massage::~massage() {
}

void massage::SetMassage(int* i_m, string p, int st) {
	(this+*i_m)->fio = p;
	(this+*i_m)->exp = st;
	(this+*i_m)->MassageId = *i_m + 1;
	*i_m = *i_m + 1;
}

void massage::InputMassage(int i) {
	int exp1;

	printf("Введите стаж массажиста: ");
	cin >> exp1;
	try {
		while (getchar() != '\n');
		if (exp1 < 5 || exp1 > 60) throw exp1;
		(this + i)->exp = exp1;
	}
	catch(const int) {
		cout << "Неправильный стаж массажиста: " << exp1 << endl;
	}

	printf("Введите ФИО массажиста: ");
	cin>>(this + i)->fio;
	(this + i)->MassageId = i + 1;
}

void massage::OutputMassage(int i) {
	printf("<ID>\t\t<Стаж>\t\t<ФИО>\n");
	for (int j = 0; j < i; j++)
	{
		printf("%d%10d   ", (this + j)->MassageId, (this + j)->exp);
		cout << (this + j)->fio;
		printf("\n");
	}
}

void massage::SetFIO(string p) {
	this->fio = p;
}

string massage::MassageFIO() {
	return this->fio;
}