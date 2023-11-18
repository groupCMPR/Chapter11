// Chapter 11 - VectorHeap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //For cout
#include <sstream>  //For stringstream
#include <vector>
#include <algorithm>

//HEADER FILE 
#include "input.h"  //For input validation


using namespace std;

int menuOption();
void option1();
void option2();
void option3();

int option3Menu();

int option3Array();
int option3Push_back();
int option3Make_heap();
int option3Front();
int option3Push_heap();
int option3Pop_heap();
int option3Sort_heap();
int option3Is_heap();
int option3Is_heap_until();
int option3Display();



int main()
{
	do
	{
		system("cls");
		switch (menuOption())
		{
		case 0: exit(0);
		case 1: system("cls"); option1(); break;
		case 2: system("cls"); option2(); break;
		case 3: system("cls"); option3(); break;
		default: cout << "\t\tERROR: - Invalid option. Please re-enter"; break;
		}
		cout << "\n";
		system("pause");
	} while (true);
	return 0;
}

int menuOption()
{
	cout << "\n\tCMPR131 Chapter 11 - Heaps";
	cout << "\n\t" << string(100, char(205));
	cout << "\n\t\t1> Heap using vector";
	cout << "\n\t\t2> Union and intersect of heaps";
	cout << "\n\t\t3> Heap in C++ STL";
	cout << "\n\t" << string(100, char(196));
	cout << "\n\t\t0> Exit";
	cout << "\n\t" << string(100, char(205));

	return inputInteger("\n\t\tOption: ", 0, 3);
}
void option2() {}
void option1() {}


void option3()
{
	do
	{
		switch (option3Menu())
		{
		case 0: exit(0);
		case 'A': option3Array(); break;
		case 'B': option3Push_back(); break;
		case 'C': option3Make_heap(); break;
		case 'D': option3Front(); break;
		case 'E': option3Push_heap(); break;
		case 'F': option3Pop_heap(); break;
		case 'G': option3Sort_heap(); break;
		case 'H': option3Is_heap(); break;
		case 'I': option3Is_heap_until(); break;
		case 'J': option3Display(); break;
		default: cout << "\t\tERROR: - Invalid option. Please re-enter"; break;
		}
		cout << "\n";
		system("pause");
	} while (true);

}

int option3Menu()
{
	cout << "\n\t3> Heap in C++ STL";
	cout << "\n\t" << string(100, char(205));
	cout << "\n\t\t	A > create a dynamic array";
		cout << "\n\t\t	B > push_back() an element";
		cout << "\n\t\t	C > make_heap()";
		cout << "\n\t\t	D > front()";
		cout << "\n\t\t	E > push_heap()";
		cout << "\n\t\t	F > pop_heap()";
		cout << "\n\t\t	G > sort_heap()";
		cout << "\n\t\t	H > is_heap()";
		cout << "\n\t\t	I > is_heap_until()";
		cout << "\n\t\t	J > display";
	cout << "\n\t" << string(100, char(196));
	cout << "\n\t\t0> return";
	cout << "\n\t" << string(100, char(205));

	return inputChar("\t\t\tOption: ", (static_cast<string>("ABCDEFGHIJ0")));
	
}

int option3Array()
{
	vector<int> Hello = { 25, 65, 34, 12, 93 };


	return 0;
}

int option3Push_back()
{

	vector<int> Hello = { 25, 65, 34, 12, 93 };


	return 0;
}

int option3Make_heap()
{

	vector<int> Hello = { 25, 65, 34, 12, 93 };

	make_heap(Hello.begin(), Hello.end());
	cout << "This is make_heap completed:  ";

	for (int x : Hello)
		cout << x << " ";	
	return 0;
}

int option3Front()
{
	vector<int> Hello = { 25, 65, 34, 12, 93 };

	make_heap(Hello.begin(), Hello.end());
	cout << "This is make_heap completed:  ";

	
	
	for (int x : Hello)
		cout << x << " ";
	
	cout << "This is the front:  " << Hello.front();
	return 0;
}

int option3Push_heap()
{

	vector<int> Hello = { 25, 65, 34, 12, 93 };
	
	Hello.push_back(50);
	push_heap(Hello.begin(), Hello.end());

	for (int& x : Hello)
		cout << x << " ";

	cout << "This is the front:  " << Hello.front();

	return 0;
}

int option3Pop_heap()
{

	vector<int> Hello = { 25, 65, 34, 12, 93 };


	pop_heap(Hello.begin(), Hello.end());
	Hello.pop_back();
	for (int& x : Hello)
		cout << x << " ";
	return 0;
}

int option3Sort_heap()
{
	vector<int> Hello = { 25, 65, 34, 12, 93 };

	make_heap(Hello.begin(), Hello.end());
	cout << "This is make_heap completed:   ";
	for (int x : Hello)
		cout << x << " ";

	sort_heap(Hello.begin(), Hello.end());

	cout << "This is sort_heap completed:   ";
	for (int& x : Hello)
		cout << x << " ";

	return 0;
}

int option3Is_heap()
{
	vector<int> Hello = { 25, 65, 34, 12, 93 };

	make_heap(Hello.begin(), Hello.end());

	bool heapVar = is_heap(Hello.begin(), Hello.end());



		if (heapVar)
		{
			cout << "This is a heap!";
		}
		else
		{
			cout << "This is NOT a heap!";
		}
			


	return 0;
}


//for ( int i = 0; i < lookup.length(); i++)

int option3Is_heap_until()
{

	vector<int> Hello = { 3, 1, 5, 1, 9, 8 };

	make_heap(Hello.begin(), Hello.end());


	bool heapVar = is_heap(Hello.begin(), Hello.end());
	

	if (heapVar)
	{
		cout << "This is a heap!\n";
	}
	else
	{
		cout << "This is NOT a heap!\n";
	}
	

	is_heap_until(Hello.begin(), Hello.end());

	auto it = is_heap_until(Hello.begin(), Hello.end());
	

	if (it != Hello.end()) {
		std::cout << "Heap stops at index " << distance(Hello.begin(), it) << '\n';
	}
	else {
		std::cout << "Range is a complete heap\n";
	}


	for (vector<int>::iterator it = Hello.begin(); it != Hello.end(); ++it) {
		cout << *it << " ";
	}



	/*for (int& x : Hello)
		cout << x << " ";*/
	return 0;
}

int option3Display()
{

	vector<int> Hello = { 25, 65, 34, 12, 93 };

	for (int& x : Hello)
		cout << x << " ";
	return 0;
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
