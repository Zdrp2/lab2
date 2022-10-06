#include "osn.h"
#include "client.h"
#include "massage.h"
#include "service.h"
#include "place.h"

struct table
{
	int TableId;
	client Client;
	massage Massagist;
	service Service;
	place Place;
};

void InputTable(table table[], client cl[], massage ms[], service sr[], place pl[], int i_t, int i_cl, int i_m, int i_sr, int i_p);

void OutputTable(table table[], int i);

void SetTable(table* tb, int* i_t, const char* cl, const char* ms, const char* sr, const char* st, int h, int p);