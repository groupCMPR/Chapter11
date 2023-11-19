#pragma once
#include <iostream>
#include <vector>
using namespace std;

template<class T>
class maxHeap
{
private:
    vector<T> myVec;
    //helper functions
    int parent(int);
    int leftNode(int);
    int rightNode(int);
    void heap_down(int);
    void heap_up(int);
   

public:
    //gets size
    int size();
    //returns true/false
    bool empty();
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

template<typename T>
int maxHeap<T>::parent(int);

template<typename T>
int maxHeap<T>::leftNode(int);

template<typename T>
int maxHeap<T>::rightNode(int);

template<typename T>
void maxHeap<T>::heap_down(int);

template<typename T>
void maxHeap<T>::heap_up(int);