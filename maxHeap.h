#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
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
