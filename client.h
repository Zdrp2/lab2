#include "osn.h"

class client
{ 
private:
	int clientId;
	char fio[100];
public:
	client();

	~client();

	void InputClient(client* cl, int i);

	void SetClient(client* cl, int* i_cl, const char* p);

	void OutputClient(client cl[], int i);

	char* ClientFIO();

	void SetFIO(const char* p);
};