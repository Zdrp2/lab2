#include "table.h"

table::table() {

}

table::~table() {
}

void table::SetTable(int* i_t, string cl, string ms, string sr, string st, int h, int p) {
	(this + *i_t)->Client.SetFIO(cl);
	(this + *i_t)->Massagist.SetFIO(ms);
	(this + *i_t)->Service.SetTitle(sr);
	(this + *i_t)->Place.SetStreet(st);
	(this + *i_t)->Place.SetHouse(h);
	(this + *i_t)->Service.SetPrice(p);
	(this + *i_t)->TableId = *i_t + 1;
	*i_t = *i_t + 1;
}

void table::InputTable(client cl[], massage ms[], service sr[], place pl[], int i_t, int i_cl, int i_m, int i_sr, int i_p) {
	int clID, msID, srID, plID;
	cl->OutputClient(i_cl);
	printf("\n�������� ID �������: ");
	do {
		InputInt(&clID);
		if (clID > i_cl || clID < 1)
			printf("\n��������� �������: ");
	} while (clID > i_cl || clID < 1);
	printf("\n");
	ms->OutputMassage(i_m);
	printf("\n�������� ID ����������: ");
	do {
		InputInt(&msID);
		if (msID > i_m || msID < 1)
			printf("\n��������� �������: ");
	} while (msID > i_m || msID < 1);
	printf("\n");
	sr->OutputService(i_sr);
	printf("\n�������� ID ������: ");
	do {
		InputInt(&srID);
		if (srID > i_sr || srID < 1)
			printf("\n��������� �������: ");
	} while (srID > i_sr || srID < 1);
	printf("\n");
	pl->OutputPlace(i_p);
	printf("\n�������� ID ������: ");
	do {
		InputInt(&plID);
		if (plID > i_p || plID < 1)
			printf("\n��������� �������: ");
	} while (plID > i_p || plID < 1);
	this[i_t].Client = cl[clID - 1];
	this[i_t].Massagist = ms[msID - 1];
	this[i_t].Service = sr[srID - 1];
	this[i_t].Place = pl[plID - 1];
	this[i_t].TableId = i_t + 1;
}

void table::OutputTable(int i) {
	printf("<ID>		<��� �������>		     <��� ����������>          <������>	                     <�����>            <����>\n");
	for (int j = 0; j < i; j++)
	{
		printf("\n%d  ", this[j].TableId);
		cout << this[j].Client.ClientFIO();
		printf(" ");
		cout << this[j].Massagist.MassageFIO();
		printf(" ");
		cout << this[j].Service.ServiceTitle();
		printf(" ");
		cout << this[j].Place.PlaceStreet();
		printf(", %d%10d", this[j].Place.PlaceHouse(), this[j].Service.ServicePrice());
	}
}

//���� �������
int table::GetId() {
	return this->Client.clientId;
}
