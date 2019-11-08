#include "HTeacher.h"

int HTeacher::salary()
{
	return Teacher::salary() + bonus;
}
