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

	void InputMassage(int);

	void OutputMassage(int i);

	void SetMassage(int* i_m, const char* p, int st);

	char* MassageFIO();

	void SetFIO(const char* p);
};
