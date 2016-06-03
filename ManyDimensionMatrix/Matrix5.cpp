#include "stdafx.h"
#include "Matrix5.h"
using std::cout;
using std::endl;


Matrix5::Matrix5()
{
	size5 = GenerateSize();
	data = new int****[size];
	for (int i = 0; i<size; i++)
	{
		data[i] = new int***[size2];
		for (int j = 0; j<size2; j++)
		{
			data[i][j] = new int**[size3];
			for (int k = 0; k<size3; k++)
			{
				data[i][j][k] = new int*[size4];
				for(int x=0; x<size4; x++)
				{
					data[i][j][k][x] = new int[size5];					
				}
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
					for(int y=0; y<size5; y++)
					{
						data[i][j][k][x][y] = GenerateSize();
					}
				}
			}
		}
	}
}


Matrix5::~Matrix5()
{
	delete[] data;
	size4 = 0;
}

void Matrix5::ConsoleOut()
{
	cout << "size = " << size << endl;
	cout << "size2 = " << size2 << endl;
	cout << "size3 = " << size3 << endl;
	cout << "size3 = " << size3 << endl;
	cout << "size5 = " << size3 << endl << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j<size2; j++)
		{
			for (int k = 0; k<size3; k++)
			{
				for (int x = 0; x<size4; x++)
				{
					for(int y=0; y<size5; y++)
					{
						cout << data[i][j][k][x][y] << " ";
					}
					cout << endl;
				}
				cout << endl;
			}
			cout << endl;
		}
		cout << "\n\n" << endl;
	}
	cout << endl;
}
