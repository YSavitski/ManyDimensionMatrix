// ManyDimensionMatrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matrix.h"
#include "Matrix2.h"
#include "Matrix3.h"
#include "Matrix4.h"
#include "Matrix5.h"


int main()
{
	Matrix* pointerMatr;

	char dim;
    _dim:
	std::cout << "Enter matrix's dimmension (1 to 5): "; 
	std::cin >> dim;	
	switch(dim)
	{
	case '1':
		pointerMatr = new Matrix;
		pointerMatr->ConsoleOut();
		break;
	case '2':
		pointerMatr = new Matrix2;
		pointerMatr->ConsoleOut();
		break;
	case '3':
		pointerMatr = new Matrix3;
		pointerMatr->ConsoleOut();
		break;
	case '4':
		pointerMatr = new Matrix4;
		pointerMatr->ConsoleOut();
		break;
	case '5':
		pointerMatr = new Matrix5;
		pointerMatr->ConsoleOut();
		break;

	default:
		std::cout << "Incorrect input dimmension! Please repeate input!" << std::endl;
		goto _dim;
	}

	_choose:
	char choose;
	std::cout << "Continue? (y or n): "; std::cin >> choose;
	switch(choose)
	{
	case 'y': 
		goto _dim;
		

	case 'n':
		std::cout << "Bye!))" << std::endl;
		break;
	default:
		std::cout << "Incorrect answer the quastion!" << std::endl;
		goto _choose;
	}


	delete pointerMatr;
	system("pause");
    return 0;
}

