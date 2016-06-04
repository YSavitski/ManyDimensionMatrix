#pragma once
class Matrix
{
private:
	int * data = nullptr;
protected:
	int size = 0;
	int GenerateSize();
public:
	Matrix();
	virtual ~Matrix();
	virtual void ConsoleOut();
};

