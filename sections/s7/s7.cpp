#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

#include "Person.h"
#include "Dog.h"
#include "AngryCatException.h"
#include "Grader.h"
#include "WarpDriveOverheating.h"

using namespace std;

/* *
 * Section 7: Exceptions & Debugging
 *
 * Objectives
 * ----------
 *  1. Exceptions
 *  - Objects representing exceptional situations
 *  - Exceptions as code issue indicators
 *  - Built-In Exceptions vs Custom Exceptions
 *  - How to handle exceptions for industry-level software
 *  - Fault Tolerance And Robustness
 *  2. Testing & Debugging
 *  - How to find bugs and remove them as early as possible
 * * * * * * */

// * - Exceptions and the Exception Hierarchy
void exceptionsHierarchyTest();

// * - Logic Errors
void logicErrorsTest();

// * - Runtime Errors & Throwing Exceptions
void runtimeErrorsAndExceptions();

// * - Rethrowing Exceptions
void rethrowingExceptionsTest();
void processPositive(int num);
void doSomething(int num);

// * - Custom Exceptions
void customExceptionsTest();
void feedKitty(int numTreats);

// * - Basic Testing & Debugging
void basicTestingAndDebugging();
int imBroken(int num1, int num2);

/* *
* Section 7: Exceptions & Debugging
*
* Projects
* ---------
* * * * * */
// * - Project Manage Out Of Range Errors
void handleOutOfRangeExceptionProject();

// * - Project Create Custom Exceptions
void createCustomExceptionsProject();

int main()
{
    cout << "Hello, Dustin! Running Section 7 C++ Modules!" << endl;
    //exceptionsHierarchyTest();
    //logicErrorsTest();
    //runtimeErrorsAndExceptions();
    //rethrowingExceptionsTest();
    //customExceptionsTest();
    //basicTestingAndDebugging();
    //handleOutOfRangeExceptionProject();
    createCustomExceptionsProject();
    return 0;
}

void exceptionsHierarchyTest() {
    cout << "Running Exceptions HierarchyTest Module..." << endl;
    // Exceptions
    // Object which represent a response to an event
    // Provide fault tolerance and program runtime robustness
    // Exception objects are created from classes, just like any other object.

    // C++ Exception Hierarchy
    // - The top of teh hierarchy is a class named exception
    // - THe other classes are derived from the exception class
    // - Related to the three primary principles of object-oriented programming:
    // 1. Encapsulation (Concern: Individual Classes)
    // 2. Inheritance (Concern: Relationships Between Classes)
    // 3. Polymorphism

    // Hierarchy is created using: Inheritance
    // Example
    // ------ ANIMAL ------
    // ---------|----------
    // _________|__________
    // |--------|---------|
    // Dog --- Cat --- Bird

    // What are the relationships between dog/cat/bird classes?
    // Java folx use Super/Sub Classes
    // C++ folx use Base/Derived Classes

    // Example of the C++ Exception Hierarchy Looks Like:
    // Exception
    // logic error ====== runtime_error ===== bad_optional_access ===== bad_typeid ===== .....
    // |
    // invalid_argument ==== out_of_range ==== ......

    vector<string> names(5);

    names.at(0) = "Dustin";
    names.at(1) = "Hunter";
    names.at(2) = "Brett";
    names.at(3) = "Sandra";
    names.at(4) = "Dooneese";

    for(string name: names)
    {
        cout << name << endl;
    }

    // Cause an exception without handling...
    //names.at(5) = "Break Me";

    // Cause an exception with handling...
    try {
        names.at(5) = "Break Me Gracefully";
    } catch (const out_of_range& err) {
        cout << err.what() << endl;
    }
}

void logicErrorsTest()
{
    cout << "Running Logic Errors Test Module..." << endl;
    // logic_error class
    // In general a logic error results from a fault in logic in our code.
    // Now consider another: length_error which occurs in situations involving invalid lengths

    vector<int> myNums;

    // Cause error without handling
    //myNums.resize(myNums.max_size() + 1);

    // Cause error and handle
    try
    {
        myNums.resize(myNums.max_size() + 1);
    }
    catch(const length_error& err)
    {
        cerr << err.what() << endl;
    }

    cout << "Yay! Such a big vector!" << endl;
}

void runtimeErrorsAndExceptions()
{
    cout << "Running Runtime Errors Test Module..." << endl;
    // Runtime Errors
    // runtime_error Class
    // Are typically external errors (ie they originate outside the program)
    // We must write defensive code that responds to unusual situations
    // Not a result of bad coding practice
    // We can control the signal to throw exceptions

    try
    {
        Person sysAdmin1("John");
        Person sysAdmin2("Bridget");
        Person sysAdmin3("Dustin");
        cout << "Sys Admin 1: " << sysAdmin1.getName() << endl;
        cout << "Sys Admin 2: " << sysAdmin2.getName() << endl;
        cout << "Sys Admin 3: " << sysAdmin3.getName() << endl;
    }
    catch (const runtime_error & err)
    {
        cerr << err.what() << endl;
    }

    try
    {
        Dog louie("Labraheeler");
        Dog vandal("German Shepard");
        Dog bailey("Boxapointer");

        cout << "Lou is a: " << louie.getBreed() << endl;
        cout << "Vandal is a: " << vandal.getBreed() << endl;
        cout << "Bailey is a: " << bailey.getBreed() << endl;

        Dog jinny("Poodle");
        jinny.getBreed();
    }
    catch (const runtime_error & err)
    {
        cerr << err.what() << endl;
    }
}

void rethrowingExceptionsTest()
{
    cout << "Running Rethrowing Exceptions Test Module..." << endl;
    // Sometimes it's useful to rethrow an exception
    // Further processing can be performed

    int input = 0;

    cout << "Please provide a number" << endl;

    try
    {
        cin >> input;
        doSomething(input);
        cout << "Processing Complete: 100%" << endl;
    }
    catch(const invalid_argument& err)
    {
        cout << "RethrowingExceptionsTest() says there is an invalid arg error..." << endl;
        cerr << err.what() << endl;
    }
    catch(const out_of_range& err)
    {
        cout << "RethrowingExceptionsTest() says there is an OOR error..." << endl;
        cerr << err.what() << endl;
    }
}
void processPositive(int num)
{
    cout << "Welcome to the positive integer processor!" << endl;
    if (num >= 0 && num <= 100)
    {
        cout << "Yay! Received a positive number!" << endl;
    }
    else if (num > 100)
    {
        throw out_of_range("Number may not be greater than 100!");
    }
    else
    {
        throw invalid_argument("Negative number received! Noes!!");
    }
}
void doSomething(int num)
{
    try
    {
        processPositive(num);
        cout << "doSomething processed successfully..." << endl;
    }
    catch(const invalid_argument& err)
    {
        cout << "doSomething failed to process successfully IA..." << endl;
        cout << "rethrowing..." << endl;
        throw; // this is the rethrow
    }
    catch(const out_of_range& err)
    {
        cout << "doSomething failed to process successfully OOR..." << endl;
        cout << "rethrowing..." << endl;
        throw; // this is the rethrow
    }
}

void customExceptionsTest()
{
    cout << "Running Custom Exceptions Test Module..." << endl;
    // We usually try to use the built-in exceptions provided for us.
    // Sometimes, it's important to make our own custom exceptions though
    // Especially if the way we need handle the exception differs significantly from the built-in exceptions.
    // We can use inheritance by making a custom exception inherit from either the exception class or one of its
    // descendants.

    int numTreats = 0;
    cout << "How many treats do you want to feed kitty?" << endl;
    cin >> numTreats;

    try
    {
        feedKitty(numTreats);
    }
    catch(const AngryCatException& err)
    {
        cout << err.what() << endl;
    } // If catching generic runtime errors, make sure to put IT UNDER THE ANGRYCATEXCEPTION!!
    // Otherwise: Inheritance Conflict.
}
void feedKitty(int numTreats)
{
    if(numTreats < 7) {
        throw AngryCatException("Kitty Has Shred Your Pillow...");
    }

    cout << "Kitty is pleased with your decision." << endl;
}

void basicTestingAndDebugging()
{
    cout << "Running Basic Testing & Debugging Test Module..." << endl;
    // Debugging tools help us fix our code
    // Terms
    // Bug
    // - Compile-time error, Runtime Error, Logic Error
    // - Testing means running the program in an attempt to expose bugs
    // - Debugging removing the bugs (literally de-bugging)

    // => Precompile-time error:
    // int a

    try
    {
        int a;
        a = imBroken(5, 15);

        cout << "a(5, 15) is: " << a << endl;

        a = imBroken(20, 0);
        cout << "a(20, 0) is: " << a << endl;

        cout << a << endl;
    }
    catch(const invalid_argument& err)
    {
        cerr << err.what() << endl;
    }
}
int imBroken(int num1, int num2)
{
    int result = 0;

    if (num2 != 0)
    {
        result = num1 / num2;
    }
    else
    {
        throw invalid_argument("Cannot Divide by 0");
    }

    return result;
}

void handleOutOfRangeExceptionProject()
{
    // Create a Grading Program
    // + getLetterGrade(int grade)
    // returns
    // F - 0:59 - inclusive
    // D - 60:69 - inclusive
    // C - 70:79 - inclusive
    // B - 80:89 - inclusive
    // A - 90-100 - inclusive
    // All Others Are Exceptions
    // Exception Error Message: "Percentage provided must fall between 0-100. Try Again."
    cout << "Running Handle OOR Grade Range Project Module..." << endl;

    try
    {
        Grader test1 = Grader(100);
        cout << test1.getLetterGrade() << endl;

        Grader test2 = Grader(95);
        cout << test2.getLetterGrade() << endl;

        Grader test3 = Grader(85);
        cout << test3.getLetterGrade() << endl;

        Grader test4 = Grader(75);
        cout << test4.getLetterGrade() << endl;

        Grader test5 = Grader(65);
        cout << test5.getLetterGrade() << endl;

        Grader test6 = Grader(55);
        cout << test6.getLetterGrade() << endl;

        Grader test7 = Grader(-55);
        cout << test7.getLetterGrade() << endl;
    }
    catch(const out_of_range& err)
    {
        cerr << err.what() << endl;
    }
}

void createCustomExceptionsProject()
{
    // Create a new exception class
    // - WarpDriveOverheating
    // Warp drive must remain degrees Celsius or lower
    // Default Exception Message is: "Warp drive has exceeded safe temperature tolerance"
    // Write Only a single constructor
    // Inherit from the overflow_error class
    // Also write a warpTest Function
    // Call it multiple times with different temperatures
    // Handle cases within tolerance and those over 80 degrees

    WarpDriveOverheating speed_1 = WarpDriveOverheating();
    try {
        speed_1.WarpTest(30);
        speed_1.WarpTest(60);
        speed_1.WarpTest(75);
        speed_1.WarpTest(80);
    }
    catch(const overflow_error& err)
    {
        cerr << err.what() << endl;
    }
}