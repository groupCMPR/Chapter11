// Name: Neidy Malaga
// Date: 11/16/2023
// Description: Header file for template class Union_Intersect_Heap

#pragma
#include <vector>     //For vector
#include <algorithm>  //For using heap in older compilers
#include <string>     //For string
#include <functional> //Required for std::greater<T>
#include "input.h"    //For input validation
using namespace std;

template <typename T>
class Union_or_Intersect_Heap {
private:
	vector<T> first_heap;
	vector<T> second_heap;
	vector<T> final_heap;
	string Union_or_Intersect;
	string Max_or_Min;
public:
	//constructor
	Union_or_Intersect_Heap(const string& prompt);

	//Mutators
	void set_Heap(const bool&);
	void set_Union(const bool&);
	void set_Intersect(const bool&);

	//Accessors, for data hiding into friend function
	bool is_Empty() const;
	string get_string_Union_or_Intersect() const;
	string get_string_Max_or_Min() const;
	typename vector<T>::const_iterator get_First_Begin() const;
	typename vector<T>::const_iterator get_First_End() const;
	typename vector<T>::const_iterator get_Second_Begin() const;
	typename vector<T>::const_iterator get_Second_End() const;
	typename vector<T>::const_iterator get_Final_Begin() const;
	typename vector<T>::const_iterator get_Final_End() const;

	//friend
	template <typename T>
	friend ostream& operator<< (ostream& out, const Union_or_Intersect_Heap<T>& obj);
};

#include "Union_Intersect_Heap.template"
