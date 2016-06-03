#include "stdafx.h"
#include "Matrix2.h"
using std::cout;
using std::endl;


Matrix2::Matrix2()
{
	size2 = GenerateSize();
	data = new int*[size];
	for(int i=0; i<size; i++)
	{
		data[i] = new int[size2];
	}

	for(int i=0; i<size; i++)
	{
		for (int j=0; j<size2; j++)
		{
			data[i][j] = GenerateSize();
		}
	}
}


Matrix2::~Matrix2()
{
	size2 = 0;
	delete[] data;
}


void Matrix2::ConsoleOut()
{
	cout << "size = " << size << endl;
	cout << "size2 = " << size2 << endl<<endl;

	for(int i = 0; i < size; i++)
	{
		for (int j=0; j<size2; j++)
		{
			cout << data[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
