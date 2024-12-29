#include "Array.h"

Array::Array(int* array_S, size_t size_S)noexcept : array{ new int[size] }, size{ size_S }
{
	count++;
	if (array_S)
	{
		for (int i{ 0 }; i < size; i++)
		{
			array[i] = array_S[i];
		}
	}
}
Array::Array(Array&& array_S)noexcept : array{ array_S.array }, size{ array_S.size }
{
	array_S.array = nullptr;
	array_S.size = 0;
	count++;
}

void Array::set_array(const int* array_S)
{
	if (array)
	{
		delete[] array;
	}
	array = new int[size];
	for (int i{ 0 }; i < size; i++)
	{
		array[i] = array_S[i];
	}
}

void Array::print()
{
	for (size_t i{ 0 }; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n";
}

void Array::fill()
{
	array = new int[size];
	for (size_t i{ 0 }; i < size; i++)
	{
		cin >> array[i];
	}
}

int Array::count{ 0 };

Array::~Array()
{
	count--;
	delete[] array;
}