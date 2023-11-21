// Name: Alexis Martinez
// Date: 11/19/2023
// Description: Header file for template class maxHeap

#pragma once
#include <iostream>  //For cout
#include <algorithm> //For make_heap
#include <vector>    //For vector
using namespace std;

template<class T>
class maxHeap
{
private:
    vector<T> myVec;

public:
    //gets size
    int size();
    //returns true/false
    bool empty();
    //finds the value returns true/false
    bool find(T);
    //pushes a valid data type
    void push(T);
    //returns front
    T front();
    //pops the front
    void pop();
    //output
    friend ostream& operator <<<>(ostream& out, const maxHeap<T>& obj);
};

#include "maxHeap.template"
