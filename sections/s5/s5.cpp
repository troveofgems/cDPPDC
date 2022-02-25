#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <stdlib.h>

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
int productOfThreeTest(int a, int b, int c);

// * - Project Sum Of Built-in Array Elements
int sumBuiltInTest(int arrayOfNumbers[], int arrSize);

// * - Project Sum Of Array Object Elements
int sumArrayObjectTest(array<int, 10> theObjectArray);

// * - Project Retrieving the sum of Array Object Elements By Reference
void sumByRefTest(array<int, 10> theObjectArray, int& theRunningSum);

// * - Project Tic-Tac-Toe
const int ROWS = 3;
const int COLS = 3;
int ticTacToeTest();
// * - TTT Helpers
void runGame();
void initializeGame(string gameBoard[ROWS][COLS]);
void printCurrentBoard(string gameBoard[ROWS][COLS]);
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS], int moveCount);
bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS]);
string getWinner(string gameBoard[ROWS][COLS]);
bool isBoardFull(string gameBoard[ROWS][COLS]);
vector<string> phpLikeExplode(const string& s, const char& c);
int terminateTicTacToe();

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
    productOfThreeTest(3, 6, 9);
    int arrayOfNumbers[6]{0, 1, 2, 3, 4, 5};
    sumBuiltInTest(arrayOfNumbers, 6);
    array<int, 10> primaryObjectArray {0, 1, 2, 3, 4, 5, 7, 9, 11, 13};
    sumArrayObjectTest(primaryObjectArray);
    int sumRef = 0;
    cout << "Sum Ref prior to fxn call is: " << sumRef << endl;
    sumByRefTest(primaryObjectArray, sumRef);
    cout << "Sum Ref post fxn call is: " << sumRef << endl;
    ticTacToeTest();
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
int productOfThreeTest(int a, int b, int c) {
    int product = a * b * c;
    cout << "Product of " << a << ", " << b << ", " << c << " = " << product << endl;
    return product;
}

// * - Project Sum Of Built-in Array Elements
int sumBuiltInTest(int arrayOfNumbers[], int arrSize) {
    int sum = 0;
    for(int i = 0; i < arrSize; i += 1) {
        cout << arrayOfNumbers[i] << endl;
        sum += arrayOfNumbers[i];
    }
    cout << "Total sum of the array was: " << sum << endl;
    return 0;
}

// * - Project Sum Of Array Object Elements
int sumArrayObjectTest(array<int, 10> theObjectArray) {
    int sum = 0;

    for (int item : theObjectArray) {
        sum += item;
    }

    cout << "The sum of the object array is: " << sum << endl;

    return sum;
}

// * - Project Retrieving the sum of Array Object Elements By Reference
void sumByRefTest(array<int, 10> theObjectArray, int& theRunningSum) {
    theRunningSum = sumArrayObjectTest(theObjectArray);
}

// * - Project Tic-Tac-Toe
int ticTacToeTest() {
    runGame();
    return 0;
}
void runGame() {
    cout << endl << endl << "Beginning a game of Tic-Tac-Toe" << endl;
    bool gameOver = false;

    string gameBoard[ROWS][COLS]{
            {"0,0", "0,1", "0,2"},
            {"1,0", "1,1", "1,2"},
            {"2,0", "2,1", "2,2"}
    };

    initializeGame(gameBoard);

    do {
        // Check If Board Is Complete
        gameOver = isBoardFull(gameBoard);
    } while (gameOver);
}

void initializeGame(string gameBoard[ROWS][COLS]) {
    static int moveCount = 0;
    bool beginWithPlayerX = true;
    getUserInput(beginWithPlayerX, gameBoard, moveCount);
}

void printCurrentBoard(string gameBoard[ROWS][COLS]) {
    cout << gameBoard[0][0] << " | " << gameBoard[0][1] << " | " << gameBoard[0][2] << endl;
    cout << "- - - - - - - -" << endl;
    cout << gameBoard[1][0] << " | " << gameBoard[1][1] << " | " << gameBoard[1][2] << endl;
    cout << "- - - - - - - -" << endl;
    cout << gameBoard[2][0] << " | " << gameBoard[2][1] << " | " << gameBoard[2][2] << endl;
}

void getUserInput(bool xTurn, string gameBoard[ROWS][COLS], int moveCount)
{
    printCurrentBoard(gameBoard);
    int rowInput = 0, colInput = 0;
    string userInput;
    string pTurn = xTurn ? "X" : "O";
    cout << "Player " << pTurn << " turn." << endl;
    cout << "Please select a game-board tile by its id then press enter to place your token (Ex: 1,1 <Enter>)" << endl;
    cin >> userInput;

    cout << "User Selected Panel " << userInput << endl;
    vector<string> expandedInput{phpLikeExplode(userInput, ',')};
    rowInput = stoi(expandedInput[0]);
    colInput = stoi(expandedInput[1]);

    if (
            (rowInput > 2 || rowInput < 0) ||
            (colInput > 2 || colInput < 0))
    {
        cout << "You have made an invalid tile selection. Please try again..." << endl;
        getUserInput(xTurn, gameBoard, moveCount);
    }

    bool validTileSelectionMade = !cellAlreadyOccupied(rowInput, colInput, gameBoard);
    if (validTileSelectionMade)
    {
        moveCount += 1;
        gameBoard[rowInput][colInput] = xTurn ? "X" : "O";
        xTurn  = !xTurn;
        string potentialWinner = getWinner(gameBoard);
        bool winnerExists = potentialWinner != " ";
        if (winnerExists) {
            cout << "We have a winner!!" << endl;
            cout << "Congratulations to Player " << potentialWinner << "!!" << endl;
            terminateTicTacToe();
        } else if (moveCount == 9) {
            isBoardFull(gameBoard);
            terminateTicTacToe();
        }
        getUserInput(xTurn, gameBoard, moveCount);
    } else {
        cout << "You have made an invalid tile selection. Please try again..." << endl;
        getUserInput(xTurn, gameBoard, moveCount);
    }
}

bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS])
{
    return gameBoard[row][col] == "X" || gameBoard[row][col] == "O";
}

string getWinner(string gameBoard[ROWS][COLS])
{
    string winner = " ";

    bool
            winningCombo_1 = (gameBoard[0][0] == gameBoard[0][1] && gameBoard[0][0] == gameBoard[0][2]), //Row 1 Horizontal
    winningCombo_2 = (gameBoard[1][0] == gameBoard[1][1] && gameBoard[1][0] == gameBoard[1][2]), //Row 2 Horizontal
    winningCombo_3 = (gameBoard[2][0] == gameBoard[2][1] && gameBoard[2][0] == gameBoard[2][2]), //Row 3 Horizontal
    winningCombo_4 = (gameBoard[0][0] == gameBoard[1][0] && gameBoard[0][0] == gameBoard[2][0]), //Col 1 Vertical
    winningCombo_5 = (gameBoard[0][1] == gameBoard[1][1] && gameBoard[0][1] == gameBoard[2][1]), //Col 2 Vertical
    winningCombo_6 = (gameBoard[0][2] == gameBoard[1][2] && gameBoard[1][2] == gameBoard[2][2]), //Col 3 Vertical
    winningCombo_7 = (gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2]), //Diag 1
    winningCombo_8 = (gameBoard[0][2] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][0]); //Diag 2

    if (winningCombo_1 || winningCombo_4 || winningCombo_7) winner = gameBoard[0][0];
    if (winningCombo_6 || winningCombo_8) winner = gameBoard[0][2];
    if (winningCombo_2) winner = gameBoard[1][0];
    if (winningCombo_3) winner = gameBoard[2][0];
    if (winningCombo_5) winner = gameBoard[0][1];

    return winner;
}

bool isBoardFull(string gameBoard[ROWS][COLS])
{
    bool catsGame = getWinner(gameBoard) == " ";
    if (catsGame)
    {
        cout << "Cat's Game! No Winners!" << endl;
    }
    return catsGame;
}

vector<string> phpLikeExplode(const string& s, const char& charDelimiter)
{
    string buff{""};
    vector<string> v;

    for(auto n:s)
    {
        if(n != charDelimiter) buff+=n; else
        if(n == charDelimiter && buff != "") { v.push_back(buff); buff = ""; }
    }
    if(buff != "") v.push_back(buff);
    return v;
}

int terminateTicTacToe()
{
    exit(0);
}