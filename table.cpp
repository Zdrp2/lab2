#include "table.h"

void SetTable(table* tb, int* i_t, const char* cl, const char* ms, const char* sr, const char* st, int h, int p) {
	table t1;
	strcpy(t1.Client.fio, cl);
	strcpy(t1.Massagist.fio, ms);
	strcpy(t1.Service.title, sr);
	strcpy(t1.Place.street, st);
	t1.Place.house = h;
	t1.Service.price = p;
	t1.TableId = *i_t + 1;
	*tb = t1;
	*i_t = *i_t + 1;
}

void InputTable(table table[], client cl[], massage ms[], service sr[], place pl[], int i_t, int i_cl, int i_m, int i_sr, int i_p) {
	int clID, msID, srID, plID;
	OutputClient(cl, i_cl);
	printf("\nВыберите ID клиента: ");
	do {
		InputInt(&clID);
		if (clID > i_cl || clID < 1)
			printf("\nПовторите попытку: ");
	} while (clID > i_cl || clID < 1);
	printf("\n");
	OutputMassage(ms, i_m);
	printf("\nВыберите ID массажиста: ");
	do {
		InputInt(&msID);
		if (msID > i_m || msID < 1)
			printf("\nПовторите попытку: ");
	} while (msID > i_m || msID < 1);
	printf("\n");
	OutputService(sr, i_sr);
	printf("\nВыберите ID услуги: ");
	do {
		InputInt(&srID);
		if (srID > i_sr || srID < 1)
			printf("\nПовторите попытку: ");
	} while (srID > i_sr || srID < 1);
	printf("\n");
	OutputPlace(pl, i_p);
	printf("\nВыберите ID пункта: ");
	do {
		InputInt(&plID);
		if (plID > i_p || plID < 1)
			printf("\nПовторите попытку: ");
	} while (plID > i_p || plID < 1);
	table[i_t].Client = cl[clID - 1];
	table[i_t].Massagist = ms[msID - 1];
	table[i_t].Service = sr[srID - 1];
	table[i_t].Place = pl[plID - 1];
	table[i_t].TableId = i_t + 1;
}

void OutputTable(table table[], int i) {
	printf("<ID>		<ФИО клиента>		     <ФИО массажсита>          <Услуга>	                     <Адрес>            <Цена>\n");
	for (int j = 0; j < i; j++)
		printf("\n%d%30s%30s%20s%25s,%d%15d", table[j].TableId, table[j].Client.fio, table[j].Massagist.fio, table[j].Service.title, table[j].Place.street, table[j].Place.house, table[j].Service.price);
}