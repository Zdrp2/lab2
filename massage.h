#include "osn.h"

class massage
{
private:
	int MassageId;
	int exp;
	char fio[100];
public:
	massage();

	~massage();

	void InputMassage(massage* ms, int);

	void OutputMassage(massage ms[], int i);

	void SetMassage(massage* ms, int* i_m, const char* p, int st);

	char* MassageFIO();

	void SetFIO(const char* p);
};
