#pragma once
#ifndef _FACE_H
#define _FACE_H

#include <string>
#include <iostream>
using namespace std;

class IFace {
public:
	virtual void show() = 0;
	virtual IFace* clone() = 0;
	virtual ~IFace() {};
};
class Face : public IFace {
private:
	string shape;
protected:
	string getShape();
	Face * clone();
public:
	Face() {
		shape = "";
	}
	Face(string sh) : shape(sh) {
	}
	virtual void show();
};
class EyedFace : public Face
{
private:
	int eyes;
public:
	int count = 0;
	EyedFace(string sh, int ey);
	void show();
	EyedFace *clone();
	~EyedFace();
};

#endif