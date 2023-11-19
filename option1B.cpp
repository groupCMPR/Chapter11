#include <iostream>
#include "input.h"
#include "maxHeap.h"

using namespace std;

int mainMenu();
void option1();
void optionBMaxHeap();

int main() {

	do {
		system("cls");

		switch (mainMenu()) {
		case 0: return EXIT_SUCCESS;
		case 1: system("cls"); option1(); break;
		default: cout << "\n\tERROR - INVALID OPTION"; break;
		}
		cout << "\n\n\t";
		system("pause");

	} while (true);


	return EXIT_SUCCESS;
}

int mainMenu() {
	cout << "\n\tCMPR131 Chapter 11: Heaps ";
	cout << "\n\t" << string(100, char(205));
	cout << "\n\t\t1> Heap using vector";
	cout << "\n\t\t2> Union and intersect of heaps";
	cout << "\n\t\t3> Heap in C++ STL";
	cout << "\n\t" << string(100, char(196));
	cout << "\n\t\t0> Exit";
	cout << "\n\t" << string(100, char(205));
	
	return inputInteger("\n\t\tOption: ", 0, 3);
}


void optionBMaxHeap() {
	maxHeap<int> heap;
	do {
		system("cls");
		cout << "\n\tB> Max Heap";
		cout << "\n\t" << string(100, char(205));
		cout << "\n\t\t1. size";
		cout << "\n\t\t2. empty";
		cout << "\n\t\t3. push";
		cout << "\n\t\t4. front";
		cout << "\n\t\t5. pop";
		cout << "\n\t\t6. display";
		cout << "\n\t" << string(100, char(196));
		cout << "\n\t\t0> return";
		cout << "\n\t" << string(100, char(205));


		switch (inputInteger("\n\t\tOption: ", 0, 6)) {
		case 0: return;
		case 1: cout << "\n\t\tSize of the heap: " << heap.size(); break;
		case 2:
			if (heap.empty()) {
				cout << "\n\t\tThe heap is empty.";
			}
			else cout << "\n\t\tThe heap is not empty.";
			break;
		case 3: heap.push(inputInteger("\n\t\tEnter an integer element to push onto the heap: ")); break;
		case 4: 
			if (heap.empty()) {
				cout << "\n\t\tThe heap is empty.";
				break;
			}
			cout << "\n\t\tThe first element of the heap: " << heap.front();
			break;
		case 5:
			if (heap.empty()) {
				cout << "\n\t\tThe heap is empty.";
				break;
			}
			cout << "\n\t\tThe first element of the heap has been removed."; heap.pop();
			break;
		case 6:
			if (heap.empty()) {
				cout << "\n\t\tThe heap is empty.";
				break;
			}
			cout << "\n\t\t" << heap; 
			break;
		default: cout << "\n\tERROR - INVALID OPTION"; break;
		}
		cout << "\n\n\t";
		system("pause");
	} while (true);
}

void option1() {
	do {
		system("cls");
		cout << "\n\t1> Heap using vector";
		cout << "\n\t" << string(100, char(205));
		cout << "\n\t\tA> Min heap";
		cout << "\n\t\tB> Max heap";
		cout << "\n\t" << string(100, char(196));
		cout << "\n\t\t0> return";
		cout << "\n\t" << string(100, char(205));

		switch (inputChar("\n\t\tOption: ", static_cast<string>("AB0"))) {
		case '0': return;
		case 'B': optionBMaxHeap(); break;
		default: "\n\tERROR - INVALID OPTION"; break;
		}
		cout << "\n\n\t";
		system("pause");
	} while (true);
}