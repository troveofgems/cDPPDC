#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;
/* *
 * Section 4: Arrays & Vectors
 *
 * Objectives
 * ----------
 * * * * * * */
// * - Built-In (C-Style) Arrays
int runBuiltInArraysModule() {
    // An Array is a simple data structure containing homogeneous elements
    // Arrays Once Declared Are Of Fixed Size!!!
    const int NUM_ARRAY_SIZE = 3;
    int numberArray[NUM_ARRAY_SIZE];
    numberArray[0] = 1;
    numberArray[1] = 2;
    numberArray[2] = 3;

    for (int i = 0; i < NUM_ARRAY_SIZE; i += 1)
        cout << "Array Index " << i << " is set to " << numberArray[i] << endl;

    string strArray[3]{"Dustin", "Brett", "Hunter"};
    for (int i = 0; i < 3; i += 1)
        cout << "Hi There " << strArray[i] << "!" << endl;

    // Compare To:
    for (auto /*string*/ name : strArray) {
        cout << name << endl;
    }

    // Challenge
    const int challengeArrayLimit = 10;
    int challengeArray[challengeArrayLimit];
    for (int i = 0; i < challengeArrayLimit; i += 1)
        challengeArray[i] = challengeArrayLimit - i;

    cout << "Blast off, in t-minus..." << endl;
    for(int countdown : challengeArray)
        cout << countdown << endl;
    cout << "We have lift-off" << endl;

    return 0;
}

// * - Array Class
int runArrayClassModule() {
    // The array class is very similar to built in arrays but is object-oriented.
    // They should be thought of as self-contained entities that contain data and their own methods.
    // STL (Standard Template Library)
    // Arrays are considered sequence containers and that is sourced from STL.

    //array<int, 5> myIntArray; // Initialization with junk data...
    array<int, 5> myIntArray{}; // Empty Initialization
    myIntArray[0] = 1;
    myIntArray[2] = 1;
    myIntArray[4] = 1;
    for (int a : myIntArray) {
        cout << a << endl;
    }

    cout << "Size of the array is: " << myIntArray.size() << endl;

    return 0;
}

// * - Vector Class
int runVectorClassModule() {
    // The Vector Class is a sequential container just like the Array Class
    // It consists of contiguous memory just like arrays
    // Vectors are not limited to fixed sizes, and can dynamically resize as needed to accommodate elements
    // An initial capacity does not need to be specified

    vector<int> intVector;
    vector<string> strVector(3);

    intVector.push_back(1);
    intVector.push_back(2);
    intVector.push_back(3);

    cout << "intVector size is: " << intVector.size() << endl;

    strVector[0] = "Dustin";
    strVector[1] = "Brett";
    strVector[2] = "Hunter J.";

    strVector.push_back("Hunter C.");

    for (string name : strVector)
        cout << name << endl;

    // Important Methods To Know For Vectors
    // front
    // back
    // pop_back
    // insert
    // begin

    cout << "Front & Back:" << endl;
    cout << "Front: " << strVector.front() << endl;
    cout << "Back: " << strVector.back() << endl;

    strVector.pop_back();
    strVector.insert(strVector.begin() + 2, "Jenny");

    cout << "Front is now: " << strVector.front() << endl;
    cout << "Back is now: " << strVector.back() << endl;

    // Vector Challenge
    vector<string> friends(5);
    friends[0] = "Louie";
    friends[1] = "Doon";
    friends[2] = "Vicki";
    friends[3] = "Vandal";
    friends[4] = "Mister";

    cout << "Original Array" << endl;
    for(string myFriend : friends)
        cout << myFriend << endl;

    cout << endl;

    friends.insert(friends.begin() + 2, "John Braugh");
    friends.pop_back();

    cout << "New Array" << endl;
    for(string myFriend : friends)
        cout << myFriend << endl;

    return 0;
}

// * - Multi-dimensional arrays
int runMultiDimensionalModule() {
    // The most common types of arrays are 2D which represent rows and columns
    // 2D Arrays use two values for a position within the structure
    int my2DArray[2][3]{
            {0, 1, 2},
            {1, 2, 3}
    };

    cout << my2DArray[0][2] << endl;

    // Looping through the entire contents?
    for(int row = 0; row < 2; row++){
        for(int col = 0; col < 3; col++) {
            cout << my2DArray[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    for(int row = 1; row >= 0; row--){
        for(int col = 2; col >= 0; col--) {
            cout << my2DArray[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}


/* *
* Section 4: Arrays & Vectors
*
* Projects
* ---------
* * * * * */
// * - Project Array Data
int runArrayData() {
    // Read In 5 Ints Provided By Via Prompt.
    // Once all five numbers have been captured, loop through the array and print the value * 2;

    cout << "Let's get 5 numbers and double their values!" << endl;
    array<int, 5> userEnteredNumbers{0};
    for(int i = 0; i < 5; i++) {
        int userChoice = -1;
        cout << "Please provide a number for position " << i << endl;
        cin >> userChoice;
        userEnteredNumbers[i] = userChoice;
    }

    for(int i = 0; i < 5; i++)
        cout << userEnteredNumbers[i]  << " * 2 = " << userEnteredNumbers[i] * 2 << endl;
    return 0;
}

// * - Project Vector Data
int runVectorData() {
    // Accept only Ints >=0, No Limit, Loop ends when user enters a negative value
    // Once all numbers have been captured, loop through the array and print the value * 2;
    vector<int> intVector;
    int continueLoop = true;
    while(continueLoop) {
        int UEN = -1;
        cout << "Please Provide A Number" << endl;
        cin >> UEN;
        if (UEN < 0) {
            continueLoop = false;
        } else {
            intVector.push_back(UEN);
        }
    }

    for(int i = 0; i < intVector.size(); i++)
        cout << intVector[i]  << " * 2 = " << intVector[i] * 2 << endl;

    return 0;
}

// * - Parallel Arrays & Vectors
int runParallelTest() {
    // Weight Tracking Challenge
    // Will Use Two Vectors: Names/Weights
    // Prompt the user for the names and weights of five different people
    // Prints a statement of: "X weighs Y lbs."
    // Hint: cin.get()

    const int MAX_PEOPLE = 5;
    vector<string> names;
    vector<int> weights;

    string temp_name;
    int temp_weight;

    for(int i = 0; i < MAX_PEOPLE; i++) {
        cout << "Please enter a person's full name" << endl;
        getline(cin, temp_name);

        cout << "Please enter " << temp_name << "'s weight..." << endl;
        cin >> temp_weight; // Consume Newline after this
        cin.get(); // Consuming Newline Char

        names.push_back(temp_name);
        weights.push_back(temp_weight);
    }

    cout << endl << endl;
    for(int i = 0; i < MAX_PEOPLE; i++) {
        cout << names[i] << " weighs " << weights[i] << " lbs." << endl;
    }
    return 0;
}


int main() {
    cout << "Hello, Dustin! Running Section 4 C++ Modules!" << endl;
    runBuiltInArraysModule();
    runArrayClassModule();
    runVectorClassModule();
    runMultiDimensionalModule();
    runArrayData();
    runVectorData();
    runParallelTest();
    return 0;
}