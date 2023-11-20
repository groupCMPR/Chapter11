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
class minHeap
{
private:
	vector<T> arra;
	T getParent(int);

public:
	//CONSTRUCTOR
	minHeap(); //default

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

#include "minHeap.template"
#endif
