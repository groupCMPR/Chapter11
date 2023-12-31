// Name: John Kim
// Date: 11/18/2023
// Description: Header file for template class Implement_Heap

#pragma once
#include <iostream>  //For cout
#include <algorithm> //For heap
#include <vector>    //For vector
#include <random>    //For rng distribution

#include "input.h"
template <typename T>
class Implement_Heap {
private:
	vector<T> Heap;
public:
	//constructor
	Implement_Heap();

	//mutator
	void set_Vector(const int& vector_Size);
	void set_push_back(const T& value);
	void set_heap();
	void set_push_heap();
	void set_pop_heap();
	void set_sort_heap();

	//accessor
	T is_Front() const;
	bool is_Heap() const;
	bool is_Empty() const;
	void display_until_heap() const;


	template <typename T>
	friend ostream& operator<< (ostream& out, const Implement_Heap<T>& obj);
};

#include "Implement_Heap.template"
