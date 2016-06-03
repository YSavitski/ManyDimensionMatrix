#pragma once
#include "Matrix4.h"
class Matrix5 :
	public Matrix4
{
private:
	int *****data = nullptr;
protected:
	int size5 = 0;
public:
	Matrix5();
	~Matrix5();
	virtual void ConsoleOut()override;
};

