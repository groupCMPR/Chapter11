// Name: Neidy Malaga
// Date: 11/16/2023
// Description: Header file for template class Union_Intersect_Heap

#pragma
#include <vector>     //For vector
#include <algorithm>  //Fpr heap
#include <string>     //For string
#include <functional> //Required for std::greater<int>
#include "input.h"    //For input validation
using namespace std;

template <typename T>
class Union_Intersect_Heap {
private:
	vector<T> first_heap;
	vector<T> second_heap;
	vector<T> final_heap;
	string prompt_action;
	string prompt;
public:
	//constructor
	Union_Intersect_Heap(const string& prompt);

	//Mutators
	void set_Heap();
	void set_Union(const bool& is_max);
	void set_Intersect(const bool& is_max);

	//Accessors, for data hiding into friend function
	bool get_Empty() const;
	string get_Prompt_Action() const;
	string get_Prompt() const;
	typename vector<T>::const_iterator get_First_Begin() const;
	typename vector<T>::const_iterator get_First_End() const;
	typename vector<T>::const_iterator get_Second_Begin() const;
	typename vector<T>::const_iterator get_Second_End() const;
	typename vector<T>::const_iterator get_Final_Begin() const;
	typename vector<T>::const_iterator get_Final_End() const;

	//friend
	template <typename T>
	friend ostream& operator<< (ostream& out, const Union_Intersect_Heap<T>& obj);
};

#include "Union_Intersect_Heap.template"
