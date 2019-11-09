#include "VIPReader.h"

VIPReader::VIPReader()
{
	Reader();
}
VIPReader::VIPReader(char * id, char * name)
{
	Reader(id, name);
}
VIPReader::VIPReader(char * id, char * name, Date date)
{
	Reader(id, name, date);
}
VIPReader::VIPReader(char * id, char * name, Date date, char * sex)
{
	Reader(id, name, date, sex);
}
int VIPReader::fee()
{
	return _fee;
}
void VIPReader::output() 
{
	Reader::out();
	cout << " Monthly fee: " << fee() << endl;
}