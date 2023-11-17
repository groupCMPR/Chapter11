// Name: Vivian Huynh
// Date: 11/13/2023
// Description: Header file for template class minHeap

#ifndef MINHEAP_H
#define MINHEAP_H
#pragma once
#include <iostream> //For cout
#include <vector>   //For vector

using namespace std;

template <class T>
class min_heap
{
private:
	vector<T> arra;
	T getParent(int);

public:
	//CONSTRUCTOR
	min_heap(); //default

	//ACCESSORS
	int getSize() const;
	bool isEmpty() const;
	T getFront() const;
	bool push(const T&);

	//MUTATORS
	void pop();
	void reheapification(int);
	void display();
};

#include "min_heap.template"
#endif