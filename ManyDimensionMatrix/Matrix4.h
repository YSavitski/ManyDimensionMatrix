#pragma once
#include "Matrix3.h"
class Matrix4 :
	public Matrix3
{
private:
	int ****data = nullptr;
protected:
	int size4 = 0;
public:
	Matrix4();
	~Matrix4();
	virtual void ConsoleOut()override;
};

