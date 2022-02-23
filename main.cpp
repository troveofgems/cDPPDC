#include <iostream>
#include <cmath>

using namespace std;
/* *
 * Section 5: Functions
 *
 * Objectives
 * ----------
 * * * * * * */
// * - Function Prototypes & Definitions
int functionProtoDefsTest();

// * - Function Return Types & Parameters
int functionTypesAndParamsTest();
void printHello();
void printNumber(int a);
int giveMe10();
int addThese(int a, int b, int c);

// * - Parameter Passing: Pass-By-Val vs Pass-By-Ref
int functionParameterPassingTest();
void passByVal(int someNum);
void passByRef(int& someNum);
void passByChallenge(int val, int& ref);

// * - Variable Scope & Life-time
int functionVarScopeLifecycleTest();
void someFunction(int someParameter);

// * - Function Overloading
int functionOverloadingTest();
int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int num1);

// * - cMath Library
int functionCMathLibTest();

// * - Function Recursion
int functionRecursionTest();
void countDownFrom(int num);
int sumValues(int num);
int getFactorial(int num);

/* *
* Section 5: Functions
*
* Projects
* ---------
* * * * * */
// * - Project Product Of Three
int productOfThreeTest();

// * - Project Sum Of Built-in Array Elements
int sumBuiltInTest();

// * - Project Sum Of Array Object Elements
int sumArrayObjectTest();

// * - Project Retrieving the sum of Array Object Elements By Reference
int sumByRefTest();

// * - Project Tic-Tac-Toe
int ticTacToeTest();


double myGlobalDouble = 3.14159;


int main() {
    cout << "Hello, Dustin! Running Section 5 C++ Modules!" << endl;
    functionProtoDefsTest();
    functionTypesAndParamsTest();
    functionParameterPassingTest();
    functionVarScopeLifecycleTest();
    functionOverloadingTest();
    functionCMathLibTest();
    functionRecursionTest();
    return 0;
}

int functionProtoDefsTest() {
    // A function is a named, reusable block of code that we can call when we want to use it.
    // A function may be defined above/outside the main function, but it is more common to create a
    // function prototype above main and put the function definition below it.

    // This file has been restructured to demonstrate Function Prototyping and Definitions.
    // Compare to previous iterations.  Future sections will utilize function prototyping from now on.
    cout << "Hello Dustin" << endl;
    return 0;
}

int functionTypesAndParamsTest() {
    // The below functions demonstrate just a small number of function return types and parameter usage.
    // Parameters are the defined values needed by the function
    // Arguments are the actual values of the parameters.
    printHello();
    printNumber(15);
    int returnValInt = giveMe10();
    cout << "returnValInt after giveMe10():  " << returnValInt << endl;
    int result = addThese(2, 4, 6);
    cout << "result after addThese(2, 4, 6): " << result << endl;
    return 0;
}
void printHello() {
    cout << "Hello There!" << endl;
}
void printNumber(int a) {
    cout << a << endl;
}
int giveMe10() {
    return 10;
}
int addThese(int a, int b, int c) {
    return a + b + c;
}

// * - Parameter Passing: Pass-By-Val vs Pass-By-Ref
int functionParameterPassingTest() {
    /*************/
    /*Pass-By-Val*/
    /*************/
    // Pass-by-value is the default parameter passing scheme for functions in C++
    // It should be though of as "pass-by-copy"
    int myNumber = 25;
    cout << "myNumber pre-call passByVal() is: " << myNumber << endl;
    passByVal(myNumber);
    cout << "myNumber post-call passByVal() is: " << myNumber << endl;

    /*************/
    /*Pass-By-Ref*/
    /*************/
    // Pass-by-reference gives the function more control over the variable
    // The parameter acts as an alias for the variable from the calling function
    // Values of parameters passed by reference that are changed reflect the change in the argument that was passed
    // to them.
    int myOverwrittenNumber = 30;
    cout << "myNumber pre-call passByRef() is: " << myOverwrittenNumber << endl;
    passByRef(myOverwrittenNumber);
    cout << "myNumber post-call passByRef() is: " << myOverwrittenNumber << endl;

    /***********/
    /*Challenge*/
    /***********/
    int hardVal = 15;
    int softVal = 0;
    cout << "hardVal pre-call passByChallenge() is: " << hardVal << endl;
    cout << "softVal pre-call passByChallenge() is: " << softVal << endl;
    passByChallenge(hardVal, softVal);
    cout << "Post-call passByChallenge() hardVal is: " << hardVal << endl;
    cout << "Post-call passByChallenge() softVal is: " << softVal << endl;

    return 0;
}
void passByVal(int someNum) {
    someNum = 100;
}
void passByRef(int& someNum) {
    someNum = 115;
}
void passByChallenge(int val, int& ref) {
    ref = val * 3;
}

// * - Variable Scope & Life-time
int functionVarScopeLifecycleTest() {
    // Variable Scope - where are variables accessible?
    // How long does a specific variable live?
    // Types of Scope/Lifetime:
    // 1. Global Variables
    // 2. Local Variables
    // 3. Static Local Variables


    int localToMain = 20;
    cout << "The local to main is: " << localToMain << endl;
    cout << "The global double is: " << myGlobalDouble << endl;

    someFunction(25);
    someFunction(38);
    someFunction(52);

    // this wont work => cout << myLocalVariable << endl;

    return 0;
}
void someFunction(int someParameter) {
    int myLocalVariable = 175;
    myLocalVariable++;
    myGlobalDouble++;

    cout << "My local number is " << myLocalVariable << endl;
    cout << "The parameter is: " << someParameter << endl;
    cout << "The Global Double (in someFunction) is: " << myGlobalDouble << endl;

    // this wont work => cout << localToMain << endl;

    // The following variable will have a scope of this function only but will persist throughout the lifetime of the
    // program aka: Static Local Variable
    static int myStaticLocalVariable = 5;
    myStaticLocalVariable++;
    cout << "My static variable is: " << myStaticLocalVariable << endl;
}

// * - Function Overloading
int functionOverloadingTest() {
    // Function Overloading is the process of creating multiple functions with the same name but different signatures
    // A Function signature consists of the name and parameter list of a function
    // Note that the signature doesn't include the return type
    // The parameters may vary by number, type, and order

    int overloadedIntResult = getResult(2, 5);
    string overloadedStringResult = getResult("Hello", "World");

    cout << "The overloaded int result was: " << overloadedIntResult << endl;
    cout << "The overloaded string result was: " << overloadedStringResult << endl;

    int cubedValue = getResult(3);
    cout << "The cubed value is: " << cubedValue << endl;
    return 0;
}
int getResult(int num1) {
    return num1 * num1 * num1;
}
int getResult(int num1, int num2) {
    return num1 * num2;
}
string getResult(string str1, string str2) {
    return str1 + " " + str2;
}

// * - cMath Library
int functionCMathLibTest() {
    // The cmath library contains many built-in functions that hve been defined by the C++ Language Developers
    // The library contains many functions, some which include:
        // sqrt for finding the square root
        // pow for finding the base taken to a power
        // ceil for rounding a value up to the nearest integer
        // floor for rounding a value down to the nearest integer

    int powResult = pow(2, 3);
    int sqrtResult = sqrt(25);
    int ceilResult = ceil(4.2);
    int floorResult = floor(4.2);

    cout << "pow(2, 3) => " << powResult << endl;
    cout << "sqrt(25) => " << sqrtResult << endl;
    cout << "ceil(4.2) => " << ceilResult << endl;
    cout << "floor(4.2) => " << floorResult << endl;

    double logParam = 512.0;
    double log2Result = log2(logParam);

    cout << "log2(512.0) => " << log2Result << endl;

    return 0;
}

// * - Function Recursion
int functionRecursionTest() {
    // Functions that call other functions are common practice.
    // When a function calls itself, this is referred to as function recursion.
    // Recursion in C++ requires the following:
      // 1. At least one base case (no recursion in this case)
      // 2. At least one recursive case (this is where recursion occurs)

    countDownFrom(10);
    int totalSum = sumValues(10);
    cout << "The sum is " << totalSum << endl;

    int factorialResult = getFactorial(6);
    cout << "The Factorial of 6! is: " << factorialResult << endl;

    return 0;
}
void countDownFrom(int num) {
    if (num >= 0) {
        cout << num << endl;
        countDownFrom(num - 1);
    }
}
int sumValues(int num) {
    if (num >= 1) {
        return num + sumValues(num - 1);
    }

    return num;
}

int getFactorial(int num) {
    if (num > 1) {
        return num * getFactorial(num - 1);
    }
    return 1;
}

/* *
* Section 5: Functions
*
* Projects
* ---------
* * * * * */
// * - Project Product Of Three
int productOfThreeTest() {
    return 0;
}

// * - Project Sum Of Built-in Array Elements
int sumBuiltInTest() {
    return 0;
}

// * - Project Sum Of Array Object Elements
int sumArrayObjectTest() {
    return 0;
}

// * - Project Retrieving the sum of Array Object Elements By Reference
int sumByRefTest() {
    return 0;
}

// * - Project Tic-Tac-Toe
int ticTacToeTest() {
    return 0;
}