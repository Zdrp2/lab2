#include "osn.h"

class massage
{
private:
	int MassageId;
	int exp;
	string fio;
public:
	massage();

	~massage();

	void InputMassage(int);

	void OutputMassage(int i);

	void SetMassage(int* i_m, string p, int st);

	string MassageFIO();

	void SetFIO(string p);
};
