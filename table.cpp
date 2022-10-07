#include "table.h"

table::table() {
}

table::~table() {
}

void table::SetTable(table* tb, int* i_t, const char* cl, const char* ms, const char* sr, const char* st, int h, int p) {
	table t1;
	t1.Client.SetFIO(cl);
	t1.Massagist.SetFIO(ms);
	t1.Service.SetTitle(sr);
	t1.Place.SetStreet(st);
	t1.Place.SetHouse(h);
	t1.Service.SetPrice(p);
	t1.TableId = *i_t + 1;
	*tb = t1;
	*i_t = *i_t + 1;
}

void table::InputTable(table table[], client cl[], massage ms[], service sr[], place pl[], int i_t, int i_cl, int i_m, int i_sr, int i_p) {
	int clID, msID, srID, plID;
	cl->OutputClient(cl, i_cl);
	printf("\nВыберите ID клиента: ");
	do {
		InputInt(&clID);
		if (clID > i_cl || clID < 1)
			printf("\nПовторите попытку: ");
	} while (clID > i_cl || clID < 1);
	printf("\n");
	ms->OutputMassage(ms, i_m);
	printf("\nВыберите ID массажиста: ");
	do {
		InputInt(&msID);
		if (msID > i_m || msID < 1)
			printf("\nПовторите попытку: ");
	} while (msID > i_m || msID < 1);
	printf("\n");
	sr->OutputService(sr, i_sr);
	printf("\nВыберите ID услуги: ");
	do {
		InputInt(&srID);
		if (srID > i_sr || srID < 1)
			printf("\nПовторите попытку: ");
	} while (srID > i_sr || srID < 1);
	printf("\n");
	pl->OutputPlace(pl, i_p);
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

void table::OutputTable(table table[], int i) {
	printf("<ID>		<ФИО клиента>		     <ФИО массажсита>          <Услуга>	                     <Адрес>            <Цена>\n");
	for (int j = 0; j < i; j++)
		printf("\n%d%30s%30s%20s%25s,%d%15d", table[j].TableId, table[j].Client.ClientFIO(), table[j].Massagist.MassageFIO(), table[j].Service.ServiceTitle(), table[j].Place.PlaceStreet(), table[j].Place.PlaceHouse(), table[j].Service.ServicePrice());
}