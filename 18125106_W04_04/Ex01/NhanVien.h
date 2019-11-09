#ifndef NHANVIEN_H
#define NHANVIEN_H
#include "Date.h"

class NV {
private:
	char* staffID;
	char* fullname;
	Date dob;
	char* address;
public:
	NV();
	NV(char* id);
	NV(char* id, char* name);
	NV(char* id, char* name, Date bday);
	NV(char* id, char* name, Date bday, char* addr);
	~NV();
	void input();
	void output();
};

#endif
