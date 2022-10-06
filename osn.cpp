#include "osn.h"

bool SavedString(char *p)
{
	int f = 0;
	if (strpbrk(p, STR_BAN) != NULL)
		f = 1;
	if (p[0] == ' ')
		f = 1;
	if (f == 1)
		return false;
	else
		return true;
}

void InputString(char* p)
{
	int f;
	do {
		f = 0;
		fgets(p, 100, stdin);
		if (p[0] == '\n')
			f = 1;
		if (f == 0)
		{
			p[strlen(p) - 1] = '\0';
			if (!SavedString(p))
				f = 1;
		}
		if (f == 1)
		{
			printf("Неверный ввод!\n");
			printf("Повторите ввод: ");
		}
	} while (f == 1);
}

bool SaveInt(char *p)
{
	int f = 0;
	if (strpbrk(p, STR_INT) != NULL)
		f = 1;
	if (strpbrk(p, STR) == NULL)
		f = 1;
	if (f == 1)
		return false;
	else
		return true;
}

void InputInt(int *k)
{
	int f;
	char p[10];
	do {
		f = 0;
		scanf("%s", p);
		if (!SaveInt(p))
		{
			while (getchar() != '\n');
			f = 1;
			printf("Неверный ввод!\n");
			printf("Повторите ввод: ");
		}
		else
		{
			*k = atoi(p);
			while (getchar() != '\n');
		}
	} while (f);
}
