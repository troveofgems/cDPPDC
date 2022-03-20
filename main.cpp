#include <iostream>
#include <string>

#include "DynamicDogs.h"
#include "DynamicRectangles.h"
#include "DynamicCircles.h"

using namespace std;

/* *
 * Section 8: Pointers
 * - Also called pointer variables
 * - Known as raw pointers to distinguish them from C++ 11 smart pointers (managed pointers)
 * - Holds a memory address
 * - Refers to the data of interest indirectly
 *
 * Objectives
 * ----------
 *  - Intro To Pointers
 *  - Dynamic Memory
 *  - Const Correctness
 * * * * * * */

// * - Intro To Pointers
void introToPointersTest();

// * - Dynamic Memory
void dynamicMemoryTest();

// * - Const Correctness
void constCorrectnessTest();
void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();
void noChange(const double* const myDouble);

/* *
* Section 8: Pointers
*
* Projects
* ---------
* * * * * */
// * - Project Dynamically Creating Rectangles
void dynamicallyCreateRectanglesProject();

// * - Project Dynamically Creating Circles
void dynamicallyCreateCirclesProject();
void printDynamicallyCreatedCircles(DynamicCircle** circleArray, int numberOfCircles);

int main()
{
    cout << "Hello, Dustin! Running Section 8 C++ Modules!" << endl;
    //introToPointersTest();
    //dynamicMemoryTest();
    //constCorrectnessTest();
    //dynamicallyCreateRectanglesProject();
    dynamicallyCreateCirclesProject();
    return 0;
}

void introToPointersTest()
{
    cout << "Running the Intro To Pointers Module" << endl;
    // They may also be referred to as pointer variables
    // holds a memory address and refers to data of interest INDIRECTLY

    // Declaring a pointer uses syntax as follows:
    // int* myIntPtr; // => Pointer to an integer
    // using ptr or Ptr in the identifier is common practice
    // If you declare multiple variables per line:
    // int *myPtr1, *myPtr2, *myPtr3, *myPtr5, *myPtr6.

    int someHardValInt = 8080;
    int* where_does_it_live_ptr = &someHardValInt;

    cout << "someHardValInt is set to " << someHardValInt << endl;
    cout << "Pointer address is: " << where_does_it_live_ptr << endl;
    cout << "Pointer de-referenced (*where_does_it_live): " << *where_does_it_live_ptr << endl;

    *where_does_it_live_ptr = 3000;

    cout << "Pointer value after change is: " << *where_does_it_live_ptr << endl;

    // Three situations in which we use the asterisk (*) in C++ include:

    // 1. Between a data type and identifier in a pointer declaration:
    // => int* myNum;

    // 2. As the unary de-reference operator
    // => *myNum = 250;

    // 3. Used as the binary multiplication operator
    // => int myNum = yourNum * hisNum;

    double myDouble = 3.14;
    double* where_does_double_live_ptr = &myDouble;
    cout << "myDouble set to: " << myDouble << endl;
    cout << "myDouble Address is: " << where_does_double_live_ptr << endl;
    cout << "myDouble de-referenced is: " << *where_does_double_live_ptr << endl << endl;
}

void dynamicMemoryTest()
{
    cout << "Running the Dynamic Memory Module" << endl;
    // Dynamic Memory
    // Is allocated at runtime instead of being set at compile time
    // Useful because we often don't know how many variables we may need.

    // C++ syntax for Dynamic Memory
    // new Keyword allows you to reserve memory on the free store, more commonly known as the heap
    // delete Keyword returns the allocated memory to the heap once no longer useful to the program

    //int* myIntPtr = new int(123); or
    int* myIntPtr = new int; // => Allocates memory from the heap
    *myIntPtr = 250; // => Sets a value for the allocated memory block

    cout << *myIntPtr << endl;

    delete myIntPtr; // => Returns the memory to the heap
    myIntPtr = nullptr; // => Purges the invalid address now held by myIntPtr even though it was destroyed earlier.
    // nullptr => references location 0. Yes 0. Old Paradigms: 0 or NULL instead of nullptr.

    // When you declare regular variables like integers, doubles, strings, booleans, etc., and you're NOT using the new
    // keyword, the memory is allocated on what is called the runtime stack. The memory is managed by the system.
    // and once out of scope is returned to the stack automatically. However, when we define pointers, and use the new
    // keyword to allocate memory to store the pointer data, the memory that's allocated must be returned to the stack
    // manually using the delete keyword. If memory is not returned, it results in memory leaks.  Too many memory
    // leaks crashes an application/computer/device or worse.

    // attempting to access the location of a destroyed variable without purging the invalid data is
    // known as a dangling pointer.

    bool* myBoolPtr = new bool;
    *myBoolPtr = true;

    cout << "Val No BoolAlpha: " << *myBoolPtr << endl;
    cout << "Val BoolAlpha: " << boolalpha << *myBoolPtr << endl;

    delete myBoolPtr;
    myBoolPtr = nullptr;

    DynamicDogs* louiePtr = new DynamicDogs("Louie", "Labraheeler");
    DynamicDogs* baileyPtr = new DynamicDogs("Bailey", "Boxapointer");
    DynamicDogs* vandalPtr = new DynamicDogs("Vandal", "German Shepherd");

    cout << endl;
    cout << "Using Arrow Member Access: " << endl;
    cout << louiePtr->getName() << " is a " << louiePtr->getBreed() << endl;
    cout << baileyPtr->getName() << " is a " << baileyPtr->getBreed() << endl;
    cout << vandalPtr->getName() << " is a " << vandalPtr->getBreed() << endl;

    cout << endl;
    cout << "Using De-referencing & the Dot Operator Access: " << endl;
    cout << (*louiePtr).getName() << " is a " << (*louiePtr).getBreed() << endl;
    cout << (*baileyPtr).getName() << " is a " << (*baileyPtr).getBreed() << endl;
    cout << (*vandalPtr).getName() << " is a " << (*vandalPtr).getBreed() << endl;

    delete louiePtr;
    delete baileyPtr;
    delete vandalPtr;

    louiePtr = nullptr;
    baileyPtr = nullptr;
    vandalPtr = nullptr;

    // Dynamic Arrays
    // Arrays are contiguous blocks of memory and are automatically de-referenced upon use.
    int array_size = 0;
    cout << "Ready to build a dynamic array? How big would you like to build it?\n" << endl;
    cin >> array_size;

    int* myArray = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        myArray[i] = i * 2;
    }

    for (int i = 0; i < array_size; i++)
    {
        cout << myArray[i] << endl;
    }

    delete[] myArray;
}

void constCorrectnessTest()
{
    // Const Correctness references to how to use the const keyword correctly in different circumstances
    // For our purposes, specifically circumstances involving pointers, we have:
    // 1. Non-constant pointer to non-constant data
        noConst();
    // 2. Constant pointer to non-constant data
        cp2ncd();
    // 3. Non-constant pointer to constant data
        ncp2cd();
    // 4. Constant pointer to constant data
        cp2cd();

    // Challenge
    double* myDoublePtr = new double;
    *myDoublePtr = 12.45;
    noChange(myDoublePtr);
}
void noConst()
{
    cout << endl;
    cout << "Running without any constants" << endl;
    int* intPtr = new int(50);
    cout << "\torig value: " << *intPtr << endl;

    *intPtr = 100;
    cout << "\tchanged value: " << *intPtr << endl;

    delete intPtr; // Return to the heap

    intPtr = new int(125); // New Int Heap Space Entirely same var name
    cout << "\tUnrelated New Int: " << *intPtr << endl;

    delete intPtr;
    intPtr = nullptr;
}
void cp2ncd()
{
    cout << endl;
    cout << "Running with pointer as a constant, data not a constant" << endl;
    int* const intPtr = new int(275);
    cout << "\torig value: " << *intPtr << endl;

    *intPtr = 250;
    cout << "\tchanged value: " << *intPtr << endl;

    delete intPtr;
    //intPtr = nullptr; // => This also wont work. Pointer may not be reassigned.
    //intPtr = new int(200); // => This wont work. Pointer may not be reassigned.
}
void ncp2cd()
{
    cout << endl;
    cout << "Running with pointer as a non-constant, data is a constant" << endl;
    const int* intPtr = new int(325);
    cout << "Pointer address: " << intPtr << endl;
    cout << "\torig value: " << *intPtr << endl;

    delete intPtr;
    intPtr = nullptr;

    intPtr = new int(733);
    cout << "Pointer address: " << intPtr << endl;
    cout << "\tChanged Pointer Value: " << *intPtr << endl;

    //*intPtr = 299; // => This wont work. Data may not be reassigned.
}
void cp2cd()
{
    cout << endl;
    cout << "Running with pointer as a constant, data is a constant as well" << endl;
    const int* const intPtr = new int(9000);
    cout << "Pointer address: " << intPtr << endl;
    cout << "\tHis Power Level...It's Over " << *intPtr << "!!!!!!!!!!!!" << endl;

    //*intPtr = 0; //=> This won't work

    delete intPtr;
    //intPtr = nullptr; //=> This won't work
}
void noChange(const double* const myDouble)
{
    cout << endl << endl;
    cout << "Pointer Address: " << myDouble << endl;
    cout << "Pointer Value: " << *myDouble << endl;

    //*myDouble = 12.88;

    delete myDouble;
    //myDouble = new double(1.58);
}

void dynamicallyCreateRectanglesProject()
{
    cout << "Running the Dynamically Created Rectangles Project" << endl;
    const int ARR_SIZE = 3;
    DynamicRectangle* rectanglePtrs[ARR_SIZE];

    rectanglePtrs[0] = new DynamicRectangle(5, 3);
    rectanglePtrs[1] = new DynamicRectangle(20, 40);
    rectanglePtrs[2] = new DynamicRectangle(2, 10);

    for (int i = 0; i < ARR_SIZE; i += 1)
    {
        cout << "Rectangle " << i << ": " << endl;
        cout << "\tPerimeter: " << rectanglePtrs[i]->perimeter() << endl;
        cout << "\tArea: " << rectanglePtrs[i]->area() << endl;
        cout << endl;
    }

    for (int i = 0; i < ARR_SIZE; i += 1)
    {
        delete rectanglePtrs[i];
        rectanglePtrs[i] = nullptr;
    }
}

void dynamicallyCreateCirclesProject()
{
    cout << "Running the Dynamically Created Rectangles Project" << endl;
    int howMany = 0;
    int radius = 0;

    cout << "How many circles would you like to create? " << endl;
    cin >> howMany;

    DynamicCircle** circles = new DynamicCircle* [howMany];

    for(int i = 0; i < howMany; i += 1)
    {
        double radius = 0.0;
        cout << "What radius for circle " << i << "?" << endl;
        cin >> radius;

        circles[i] = new DynamicCircle(radius);
    }

    cout << endl;
    printDynamicallyCreatedCircles(circles, howMany);
}

void printDynamicallyCreatedCircles(DynamicCircle** circleArray, int numberOfCircles)
{
    for(int i = 0; i < numberOfCircles; i += 1)
    {
        cout << "Circle " << i << endl;
        cout << "\t Circumference: " << circleArray[i]->getCircumference() << endl;
        cout << "\t Area: " << circleArray[i]->getArea() << endl;
        cout << endl;
    }
}