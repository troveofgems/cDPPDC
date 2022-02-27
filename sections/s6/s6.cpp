#include <iostream>
#include "./sections/s6/models/House/House.h"
#include "./sections/s6/models/Rectangle/Rectangle.h"
#include "./sections/s6/models/Book/Book.h"
#include "./sections/s6/models/BankAccount/BankAccount.h"
#include "./sections/s6/models/Pizza/Pizza.h"
#include "./sections/s6/models/Circle/Circle.h"

using namespace std;

/* *
 * Section 6: Classes & Objects
 * Classes & Objects, UML (Unified Modeling Language) helps to model classes during design
 * Objectives
 * ----------
 * * * * * * */
// * - Basics of OOP
void oopBasicsTest();

// * - Encapsulation
void encapsulationTest();
//void printHouseDataChallenge(const House& houseDetail); // Understand This!!
// It forces the function to treat house as a copy of the data and ensure that
// dangerous changes cannot occur inside functions where they shouldn't. (See line )

// * - Separate Compilation
void separateCompilationTest();

// * - Constructor/Destructor Concepts
void constructorsAndDestructorsTest();

// * - Rectangle Class
void rectangleClassExample();

// * - Book Class
void bookClassExample();

/* *
* Section 6: Classes & Objects
*
* Projects
* ---------
* * * * * */
// * - Project Back Account Class
void bankAccountClassProject();

// * - Project Pizza Class
void pizzaClassProject();

// * - Project Circle Class
void circleClassProject();

int main()
{
    cout << "Hello, Dustin! Running Section 6 C++ Modules!" << endl;
    oopBasicsTest();
    encapsulationTest();
    separateCompilationTest();
    constructorsAndDestructorsTest();
    rectangleClassExample();
    bookClassExample();
    bankAccountClassProject();
    pizzaClassProject();
    circleClassProject();
    return 0;
}

void oopBasicsTest()
{
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "Running the OOP Basics Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "Running the OOP Basics Module" << endl;
    cout << "Programming Paradigms include:" << endl;
    cout << "\t1. Procedural" << endl;
    cout << "\t2. Object-Oriented Programming (OOP)" << endl << endl;

    cout << "OOP encapsulates behaviors and data for a given model;" << endl;
    cout << "The 3 ordered principles of OOP are:" << endl;
    cout << "\t1. Encapsulation" << endl;
    cout << "\t2. Inheritance" << endl;
    cout << "\t3. Polymorphism" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "End of the OOP Basics Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;
}

void encapsulationTest()
{
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "Running the Encapsulation Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "Data Members & Member Functions" << endl;
    cout <<
         "The first primary principle of OOP: Its purpose is to unite behaviors and data into a centralized object."
         << endl;

    House myHouse;
    House yourHouse;
    House houseOfHouse;

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("yellow");

    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("red");

    houseOfHouse.setNumStories(1);
    houseOfHouse.setNumWindows(3);
    houseOfHouse.setColor("grey");

    myHouse.printHouseData();
    yourHouse.printHouseData();
    houseOfHouse.printHouseData();

    /*printHouseDataChallenge(myHouse);
    printHouseDataChallenge(yourHouse);
    printHouseDataChallenge(houseOfHouse);*/

    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "End of the Encapsulation Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;
}

/*void printHouseDataChallenge(const House& houseDetail)
{
    // houseDetail.setColor("Blue"); You should only give a function as much access as it needs, no more.
    cout << endl << endl;
    cout << "Printing House Data" << endl;
    cout << "This house contains the following features:" << endl;
    cout << "\t1. # of Stories: " << houseDetail.getNumStories() << endl;
    cout << "\t2. # of Windows: " << houseDetail.getNumWindows() << endl;
    cout << "\t3. House Color: " << houseDetail.getColor() << endl;
}*/

void separateCompilationTest()
{
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "Start of the Separate Compilation Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;

    cout << "The House Class should really be compiled separately then included into main.cpp" << endl;
    cout << "These are known as Specification (.h)/Implementation (.cpp) Files" << endl;

    cout << "The functions, class definitions, and function members have been moved to the following files:" << endl;
    cout << "\t1.  House.cpp - Implementation File" << endl;
    cout << "\t2.  House.h - Specification File" << endl;

    cout << "The above two files were compiled, then sourced to the main.cpp file" << endl;
    cout << "This completes the separate compilation module." << endl << endl;

    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "End of the Separate Compilation Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;
}

void constructorsAndDestructorsTest()
{
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "Start of the Constructors/Destructors Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;

    cout << "Constructors" << endl;
    cout << "=============" << endl;
    cout << "\t1.  Must have the same name as the class itself" << endl;
    cout << "\t2.  Are functions" << endl;
    cout << "\t3.  Can be overloaded" << endl;
    cout << "\t4.  Have no return type, not even void" << endl;
    cout << "\t5.  Are called when an object is created" << endl;

    cout << "Destructors" << endl;
    cout << "=============" << endl;
    cout << "\t1.  There may only be one" << endl;
    cout << "\t2.  Does cleanup when the object is removed from memory" << endl;
    cout << "\t\t2a.  ie: Called when the object is destroyed" << endl;

    House defaultValueHouse;
    defaultValueHouse.printHouseData();

    House advancedHouse(2, 3, "silver");
    advancedHouse.printHouseData();

    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "End of the Constructors/Destructors Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;
}

void rectangleClassExample()
{
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "Start of the Rectangle Class Example Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;

    Rectangle r1;
    Rectangle r2(5.0, 4.2);

    cout << "r1 area is: " << r1.area() << endl;
    cout << "r2 area is: " << r2.area() << endl;

    r1.setLength(22.57);
    r1.setWidth(7.71);

    cout << "r1 re-dimensioned new area is: " << r1.area() << endl;
    cout << "r1 perimeter is: " << r1.perimeter() << endl << endl;

    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "End of the Rectangle Class Example Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;
}

void bookClassExample()
{
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "Start of the Book Class Example Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;

    Book treasureIsland("Robert Louis Stevenson", "Treasure Island", "Fantasy", 292);
    treasureIsland.printBookDetails();

    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "End of the Book Class Example Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;
}

void bankAccountClassProject()
{
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "Start of the Bank Account Class Example Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;

    BankAccount DG1500("Dustin", 100.00);
    BankAccount HJ2785("Hunter Jung", 2785.00);

    DG1500.printAccountDetails();

    DG1500.deposit(-1.50);
    DG1500.deposit(17.50);

    DG1500.printAccountDetails();
    DG1500.withdraw(200.78);

    DG1500.withdraw(17.31);
    DG1500.printAccountDetails();

    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "End of the Bank Account Class Example Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;
}

void pizzaClassProject()
{
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "Start of the Pizza Class Example Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;

    Pizza defaultPizza("Cheese", 10, 12);

    defaultPizza.addTopping("Pepperoni");

    defaultPizza.printReceipt();

    cout << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "End of the Pizza Class Example Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;
}

void circleClassProject()
{
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "Start of the Circle Class Example Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;

    Circle defaultCircle;

    cout << "Default Circle Details: " << endl;
    cout << "Radius: " << defaultCircle.getRadius() << endl;
    cout << "Area: " << defaultCircle.getArea() << endl;
    cout << "Circumference: " << defaultCircle.getCircumference() << endl;

    cout << endl;
    Circle myCustomCircle(25.75);
    cout << "Custom Circle Details: " << endl;
    cout << "Radius: " << myCustomCircle.getRadius() << endl;
    cout << "Area: " << myCustomCircle.getArea() << endl;
    cout << "Circumference: " << myCustomCircle.getCircumference() << endl;

    cout << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "End of the Circle Class Example Module" << endl;
    cout << "=================================" << endl;
    cout << "=================================" << endl << endl;
}