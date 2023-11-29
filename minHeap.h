// Name: Vivian Huynh
// Date: 11/13/2023
// Description: Header file for template class minHeap

#pragma once
#include <iostream>  //For cout
#include <vector>    //For vector
#include <algorithm> //For make_heap

using namespace std;

template <class T>
class minHeap
{
private:
	vector<T> myVector;

public:
	//CONSTRUCTOR
	minHeap(); //default

	//ACCESSORS
	int getSize() const;
	bool isEmpty() const;
	T getFront() const;
	bool push(const T&);

	//MUTATORS
	void reheapification();
	void pop();
	void display() const;
};

#include "minHeap.template"
