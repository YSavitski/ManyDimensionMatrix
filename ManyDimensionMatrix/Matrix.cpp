#include "stdafx.h"
#include "Matrix.h"
#include <random>
using std::cout;
using std::endl;

Matrix::Matrix()
{
	size = GenerateSize();
	data = new int[size];
	
	for(int i =0; i<size; i++)
	{
		data[i] = GenerateSize();
	}
}


Matrix::~Matrix()
{
	size = 0;
	delete[] data;
}

int Matrix::GenerateSize()
{
	std::random_device randNum;
	std::default_random_engine iterator(randNum());
	std::uniform_int_distribution<int> uniform_dist(3, 7);
	int number = uniform_dist(iterator);
	return number;
}

void Matrix::ConsoleOut()
{
	cout << "size = " << size << endl << endl;;
	for (int i = 0; i<size; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}
