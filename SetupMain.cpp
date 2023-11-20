//Names: Alexis Martinez, John Kim, Neidy Malaga, & Vivian Huynh
//Date: 11/13/2023
//Description: Chapter 11 Assignment - Heaps

#include <iostream> //For cout

//HEADER FILE
#include "input.h"                //For input validation
#include "minHeap.h"              //For option 1 (min)
#include "maxHeap.h"              //For option 1 (max)
#include "Union_Intersect_Heap.h" //For option 2
#include "Implement_Heap.h"       //For option 3

using namespace std;

//PROTOTYPES
int menuOption();

//Option 1 - Heap using vector
void option1();
void minHeapVector();
void maxHeapVector();
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
        case 'A': minHeapVector(); break;
        case 'B': maxHeapVector(); break;
        default: cout << "\t\tERROR: - Invalid option. Please re-enter"; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

//Precondition : Calls from option 1
//Postcondition: Implements the min heap
void minHeapVector()
{
    minHeap<int> minimum;

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
        case 1: 
        {
            cout << "\n\t\tSize of the heap: " << minimum.getSize() << '\n';
        }break;
        case 2: 
        {
            if (minimum.isEmpty() == true)
            {
                cout << "\n\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\tThe heap is not empty.\n";
            }
        }break;
        case 3: 
        {
            int size = minimum.getSize();
            int value = inputInteger("\n\t\tEnter an integer element to push onto the heap: ");
            while (minimum.push(value) == false)
            {
                cout << "\t\tERROR: the element, " << value << ", already existed in the heap. Please re-specify.\n";
                value = inputInteger("\n\t\tEnter an integer element to push onto the heap: ");
            }
            
            minimum.reheapification();
        }break;
        case 4: 
        {
            if (minimum.isEmpty() == true)
            {
                cout << "\n\t\tThe heap is empty.\n";
                break;
            }

            cout << "\n\t\tThe first element of the heap: " << minimum.getFront();
        }break;
        case 5: 
        {
            if (minimum.isEmpty() == true)
            {
                cout << "\n\t\tThe heap is empty.\n";
                break;
            }
            minimum.pop();
            cout << "\n\t\tThe first element of the heap has been removed.";
        }break;
        case 6: 
        {
            if (minimum.isEmpty() == true)
            {
                cout << "\n\t\tThe heap is empty.\n";
                break;
            }
            minimum.display();
        }break;
        default: cout << "\t\tERROR: - Invalid option. Please re-enter"; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

//Precondition : Calls from option 1
//Postcondition: Implements max heap
void maxHeapVector()
{
    maxHeap<int> heap;

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
        case 3: {
			do {
				int number = inputInteger("\n\t\tEnter an integer element to push onto the heap: ");

				if (!heap.find(number)) {
					heap.push(number);
					break;
				}
				else {
					cout << "\n\t\tERROR: the element, " << number << ", already existed in the heap.Please re - specify.";
				}

			} while (true);
			
			break;
		}
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
    Implement_Heap<int> heap;

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
        case 'A': heap.set_Vector(inputInteger("\n\tEnter the size of the dynamic array: ", 1, 100)); break;
        case 'B': heap.set_push_back(inputInteger("\n\tEnter an element: ", true)); break;
        case 'C': heap.set_heap(); cout << "\n\tVector is now a heap."; break;
        case 'D':
            if (heap.is_Heap()) {
                cout << "\n\tThe maximum element of heap: " << heap.is_Front();
            }
            else
                cout << "\n\tVector is not a heap.";

            break;
        case 'E': heap.set_push_heap();
            cout << "\n\tThe heap has a new element added.";

            break;
        case 'F':
            if (heap.is_Heap()) {
                heap.set_pop_heap();
                cout << "\n\tThe heap has been popped.";
            }
            else
                cout << "\n\tVector is not a heap.";

            break;
        case 'G':
            if (heap.is_Heap()) {
                heap.set_sort_heap();
                cout << "\n\tThe heap has been sorted.";
            }
            else
                cout << "\n\tVector is not a heap.";

            break;
        case 'H':
            if (heap.is_Heap())
                cout << "\n\tThe vector is a heap.";
            else
                cout << "\n\tVector is not a heap.";
            break;
        case 'I':
            heap.display_until_heap();
            break;
        case 'J': cout << heap; break;
        default: cout << "\t\tERROR: - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}
