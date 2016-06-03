// ManyDimensionMatrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matrix.h"
#include "Matrix2.h"


int main()
{
	Matrix* pointerMatr;



	pointerMatr = new Matrix;
	pointerMatr->ConsoleOut();
	delete pointerMatr;
	std::cout << std::endl;


	pointerMatr = new Matrix2;
	pointerMatr->ConsoleOut();
	delete pointerMatr;
	std::cout << std::endl;





	system("pause");
    return 0;
}

