#include "osn.h"

class client
{ 
	friend class table;
private:
	int clientId;
	string fio;
public:
	client();

	~client();

	void InputClient(int i);

	void SetClient(int* i_cl, string p);

	void OutputClient(int i);

	string ClientFIO();

	void SetFIO(string p);
};