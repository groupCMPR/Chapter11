//Names: Alexis Martinez, Angie Campos, John Kim, Neidy Malaga, & Vivian Huynh
//Date: 11/13/2023
//Description: Chapter 11 Assignment - Heaps

#include <iostream> //For cout

//HEADER FILE
#include "input.h" //For input validation
#include "Union_Intersect_Heap.h"
using namespace std;

//PROTOTYPES
int menuOption();

//Option 1 - Heap using vector
void option1();
void minHeap();
void maxHeap();
//Option 2 - Union and intersect of heaps
void option2();
//Option 3 - Heap in C++ STL
void option3();

//Precondition : N/A
//Postcondition: Calls option 1, 2, and 3
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

//Precondition : Calls from main
//Postcondition: Returns integer choice
int menuOption()
{
    cout << "\n\tCMPR131 Chapter 11: Heaps (Final Group 11)";
    cout << "\n\t" << string(100, char(205));
    cout << "\n\t\t1> Heap using vector";
    cout << "\n\t\t2> Union and intersect of heaps";
    cout << "\n\t\t3> Heap in C++ STL";
    cout << "\n\t" << string(100, char(196));
    cout << "\n\t\t0> Exit";
    cout << "\n\t" << string(100, char(205));

    return inputInteger("\n\t\tOption: ", 0, 3);
}

//Precondition : Calls from main
//Postcondition: Returns char and implements min and max heaps
void option1()
{
    Union_Intersect_Heap<int> max_heap();
    Union_Intersect_Heap<int> min_heap();

    do
    {
        system("cls");
        cout << "\n\t1> Heap using vector";
        cout << "\n\t" << string(100, char(205));
        cout << "\n\t\tA> Min heap";
        cout << "\n\t\tB> Max heap";
        cout << "\n\t" << string(100, char(196));
        cout << "\n\t\t0> return";
        cout << "\n\t" << string(100, char(205));

        switch (inputChar("\n\t\tOption: ", static_cast<string>("AB0")))
        {
        case '0': return;
        case 'A': minHeap(); break;
        case 'B': maxHeap(); break;
        default: cout << "\t\tERROR: - Invalid option. Please re-enter"; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

//Precondition : Calls from option 1
//Postcondition: Implements the min heap
void minHeap()
{
    do
    {
        system("cls");
        cout << "\n\tA> Min Heap";
        cout << "\n\t" << string(100, char(205));
        cout << "\n\t\t1. size";
        cout << "\n\t\t2. empty";
        cout << "\n\t\t3. push";
        cout << "\n\t\t4. front";
        cout << "\n\t\t5. pop";
        cout << "\n\t\t6. display";
        cout << "\n\t" << string(100, char(196));
        cout << "\n\t\t0. return";
        cout << "\n\t" << string(100, char(205));

        switch (inputInteger("\n\t\tOption: ", 0, 6))
        {
        case 0: return;
        case 1: break;
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: break;
        case 6: break;
        default: cout << "\t\tERROR: - Invalid option. Please re-enter"; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

//Precondition : Calls from option 1
//Postcondition: Implements max heap
void maxHeap()
{
    do
    {
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
        cout << "\n\t\t0. return";
        cout << "\n\t" << string(100, char(205));

        switch (inputInteger("\n\t\tOption: ", 0, 6))
        {
        case 0: return;
        case 1: break;
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: break;
        case 6: break;
        default: cout << "\t\tERROR: - Invalid option. Please re-enter"; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

//Precondition : Calls from main
//Postcondition: Implements the union and intersection of two max/min heaps
void option2()
{
    Union_Intersect_Heap<int> max_heap("Max");
    Union_Intersect_Heap<int> min_heap("Min");

    do
    {
        system("cls");
        cout << "\n\t2> Union and intersect heap";
        cout << "\n\t" << string(100, char(205));
        cout << "\n\t\tA> Set Max Heaps";
        cout << "\n\t\tB> Set Min Heaps";
        cout << "\n\t\tC> Union two max Heaps";
        cout << "\n\t\tD> Intersect two max Heaps";
        cout << "\n\t\tE> Union two min Heaps";
        cout << "\n\t\tF> Intersect two min Heaps";
        cout << "\n\t" << string(100, char(196));
        cout << "\n\t\t0> return";
        cout << "\n\t" << string(100, char(205));

        switch (inputChar("\n\t\tOption: ", static_cast<string>("ABCDEF0")))
        {
        case '0': return;
        case 'A': max_heap.set_Heap(); break;
        case 'B': min_heap.set_Heap(); break;
        case 'C': {

            if (max_heap.get_Empty()) {
                cout << "\n\tMax Heap is empty.";
                break;
            }

            max_heap.set_Union(true);

            cout << max_heap;

            break;
        }
        case 'D': {

            if (max_heap.get_Empty()) {
                cout << "\n\tMax Heap is empty.";
                break;
            }

            max_heap.set_Intersect(true);

            cout << max_heap;
            break;
        }
        case 'E': {
            if (min_heap.get_Empty()) {
                cout << "\n\tMin Heap is empty.";
                break;
            }

            min_heap.set_Union(false);

            cout << min_heap;

            break;
        }
        case 'F': {
            if (min_heap.get_Empty()) {
                cout << "\n\tMin Heap is empty.";
                break;
            }

            min_heap.set_Intersect(false);

            cout << min_heap;
            break;
        }
        default: cout << "\t\tERROR: - Invalid option. Please re-enter"; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

//Precondition : Calls from main
//Postcondition: Implements heap with algorithm
void option3()
{
    do
    {
        system("cls");
        cout << "\n\t3> Heap in C++ STL";
        cout << "\n\t" << string(100, char(205));
        cout << "\n\t\tA> create a dynamic array";
        cout << "\n\t\tB> push_back() an element";
        cout << "\n\t\tC> make_heap()";
        cout << "\n\t\tD> front()";
        cout << "\n\t\tE> push_heap()";
        cout << "\n\t\tF> pop_heap()";
        cout << "\n\t\tG> sort_heap()";
        cout << "\n\t\tH> is_heap()";
        cout << "\n\t\tI> is_heap_until()";
        cout << "\n\t\tJ> display";
        cout << "\n\t" << string(100, char(196));
        cout << "\n\t\t0> return";
        cout << "\n\t" << string(100, char(205));

        switch (inputChar("\n\t\tOption: ", static_cast<string>("ABCDEFGHIJ0")))
        {
        case '0': return;
        case 'A': break;
        case 'B': break;
        case 'C': break;
        case 'D': break;
        case 'E': break;
        case 'F': break;
        case 'G': break;
        case 'H': break;
        case 'I': break;
        case 'J': break;
        default: cout << "\t\tERROR: - Invalid option. Please re-enter"; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

//unionize maximum heaps
//vector<int> max_heap_1 = { 12, 5, 6, 2 };
//vector<int> max_heap_2 = { 12, 9, 6 };

//make_heap(max_heap_1.begin(), max_heap_1.end());
//make_heap(max_heap_2.begin(), max_heap_2.end());

//for (auto iter = max_heap_2.begin(); iter < max_heap_2.end(); ++iter) {
//	if (find(max_heap_1.begin(), max_heap_1.end(), *iter) == max_heap_1.end())
//		max_heap_1.push_back(*iter);
//}

//make_heap(max_heap_1.begin(), max_heap_1.end());

//for (auto iter = max_heap_1.begin(); iter < max_heap_1.end(); ++iter)
//	cout << *iter << " ";





////unionize minimum heap
//vector<int> min_heap_1 = { 2, 5, 6, 12 };
//vector<int> min_heap_2 = { 6, 12, 9 };

//make_heap(min_heap_1.begin(), min_heap_1.end());
//make_heap(min_heap_2.begin(), min_heap_2.end());

//for (auto iter = min_heap_2.begin(); iter < min_heap_2.end(); ++iter) {
//	if (find(min_heap_1.begin(), min_heap_1.end(), *iter) == min_heap_1.end())
//		min_heap_1.push_back(*iter);
//}

////reheapify into a minimum heap
//make_heap(min_heap_1.begin(), min_heap_1.end(), greater<int>());

//for (auto iter = min_heap_1.begin(); iter < min_heap_1.end(); ++iter)
//	cout << *iter << " ";









	//intersect maximum
	//vector<int> max_heap_1 = { 12, 5, 6, 2 };
	//vector<int> max_heap_2 = { 12, 9, 6 };
	//vector<int> intersect_max;
	//make_heap(max_heap_1.begin(), max_heap_1.end());
	//make_heap(max_heap_2.begin(), max_heap_2.end());


	//for (auto iter = max_heap_2.begin(); iter < max_heap_2.end(); ++iter) {
	//	if (find(max_heap_1.begin(), max_heap_1.end(), *iter) != max_heap_1.end())
	//		intersect_max.push_back(*iter);
	//}

	//make_heap(intersect_max.begin(), intersect_max.end());

	//for (auto iter = intersect_max.begin(); iter < intersect_max.end(); ++iter)
	//	cout << *iter << " ";




	////intersect minimum
	//vector<int> max_heap_1 = { 12, 5, 6, 2 };
	//vector<int> max_heap_2 = { 12, 9, 6 };
	//vector<int> intersect_min;
	//make_heap(max_heap_1.begin(), max_heap_1.end());
	//make_heap(max_heap_2.begin(), max_heap_2.end());


	//for (auto iter = max_heap_2.begin(); iter < max_heap_2.end(); ++iter) {
	//	if (find(max_heap_1.begin(), max_heap_1.end(), *iter) != max_heap_1.end())
	//		intersect_min.push_back(*iter);
	//}

	//make_heap(intersect_min.begin(), intersect_min.end(), greater<int>());

	//for (auto iter = intersect_min.begin(); iter < intersect_min.end(); ++iter)
	//	cout << *iter << " ";
