#pragma once
#include <iostream>

using namespace std;

class Array
{
private:
	int* array;
	size_t size;
	static int count;
public:
	Array()noexcept : Array(nullptr, 1) {};
	Array(int* array_S, size_t size_S);
	explicit Array(int* array_S)noexcept : Array(array_S, 1) {};
	explicit Array(size_t size_S)noexcept : Array(nullptr, size_S) {};
	Array(Array&& array_S)noexcept;
	Array(const Array& array_S)noexcept : array(array_S.array), size(array_S.size) { count++; }

	const int* get_array() { return array; }
	void set_array(const int* array_S);

	void fill();
	void print();
	static int get_count() { return count; }

	~Array();
};