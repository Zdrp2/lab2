#include "osn.h"

class client
{ 
private:
	int clientId;
	char fio[100];
public:
	client();

	~client();

	void InputClient(int i);

	void SetClient(int* i_cl, const char* p);

	void OutputClient(int i);

	char* ClientFIO();

	void SetFIO(const char* p);
};