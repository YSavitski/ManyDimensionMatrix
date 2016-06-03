#pragma once
#include "Matrix2.h"
class Matrix3 :
	public Matrix2
{
private:
	int ***data = nullptr;
protected:
	int size3 = 0;
public:
	Matrix3();
	~Matrix3();
	virtual void ConsoleOut()override;
};

