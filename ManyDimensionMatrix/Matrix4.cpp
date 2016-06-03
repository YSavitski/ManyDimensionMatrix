#include "stdafx.h"
#include "Matrix4.h"
using std::cout;
using std::endl;


Matrix4::Matrix4()
{
	size4 = GenerateSize();
	data = new int***[size];
	for (int i = 0; i<size; i++)
	{
		data[i] = new int**[size2];
		for (int j = 0; j<size2; j++)
		{
			data[i][j] = new int*[size3];
			for(int k=0; k<size3; k++)
			{
				data[i][j][k] = new int[size4];
			}
		}
	}



	for (int i = 0; i<size; i++)
	{
		for (int j = 0; j<size2; j++)
		{
			for (int k = 0; k<size3; k++)
			{
				for (int x = 0; x<size4; x++)
				{
					data[i][j][k][x] = GenerateSize();
				}
			}
		}
	}
}


Matrix4::~Matrix4()
{
	delete[] data;
	size4 = 0;
}

void Matrix4::ConsoleOut()
{
	cout << "size = " << size << endl;
	cout << "size2 = " << size2 << endl;
	cout << "size3 = " << size3 << endl;
	cout << "size4 = " << size3 << endl<<endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j<size2; j++)
		{
			for (int k = 0; k<size3; k++)
			{
				for(int x=0; x<size4; x++)
				{
					cout << data[i][j][k][x] << " ";
				}
				cout << endl;
			}
			cout << endl;
		}
		cout << "\n\n" << endl;
	}
	cout << endl;
}
