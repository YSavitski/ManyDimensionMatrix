#include "stdafx.h"
#include "Matrix3.h"
using std::cout;
using std::endl;

Matrix3::Matrix3()
{
	size3 = GenerateSize();
	data = new int**[size];
	for(int i=0; i<size; i++)
	{
		data[i] = new int*[size2];
		for(int j=0; j<size2; j++)
		{
			data[i][j] = new int[size3];
		}
	}

	for (int i = 0; i<size; i++)
	{
		for (int j = 0; j<size2; j++)
		{
			for(int k=0; k<size3; k++)
			{
				data[i][j][k] = GenerateSize();
			}
		}
	}
	
}


Matrix3::~Matrix3()
{
	delete[]data;
	size3 = 0;
}

void Matrix3::ConsoleOut()
{
	cout << "size = " << size << endl;
	cout << "size2 = " << size2 << endl;
	cout << "size3 = " << size3 << endl<<endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j<size2; j++)
		{
			for(int k=0; k<size3; k++)
			{
				cout << data[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
		
	}
	cout << endl;
}
