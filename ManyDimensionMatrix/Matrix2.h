#pragma once
#include "Matrix.h"
class Matrix2 :
	public Matrix
{
private:
	int **data = nullptr;
protected:
	int size2 = 0;
public:
	Matrix2();
	~Matrix2();
	virtual void ConsoleOut()override;
};

