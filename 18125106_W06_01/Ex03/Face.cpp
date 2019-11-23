#include "Face.h"

string Face::getShape()
{
	return shape;
}

Face *Face::clone()
{
	return new Face(*this);
}

void Face::show()
{
	cout << "Shape: " << shape << endl;
}

EyedFace::EyedFace(string sh, int ey) : Face(sh)
{
	eyes = ey;
	count++;
}

void EyedFace::show()
{
	Face::show();
	cout << "Eyes: " << eyes << endl;
}

EyedFace *EyedFace::clone()
{
	return new EyedFace(this->getShape(), eyes);
}

EyedFace::~EyedFace()
{
	count--;
}
