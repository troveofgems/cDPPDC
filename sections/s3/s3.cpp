#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
/* *
 * Section 3: Control Statements
 *
 * Objectives
 * ----------
 * * * * * * */
// * - Selection Control Statements
int runSequentialAndSelectionControlStatementsModule() {
    // There Are Three Categories Of Control Statement:
    // 1. Sequential
    const int age = 21;
    if (age >= 21) {
        cout << "Have a beer on us!" << endl;
    } else {
        cout << "Have a pepsi on us!" << endl;
    }
    // 2. Selection
    // If, If/Else, Switch
    if (age > 50) {
        cout << "You also get an elderly discount..." << endl;
    } else {
        cout << "You're not old enough to apply the senior discount to your meal..." << endl;
    }
    return 0;
}

// * - Repetition Control Statements
int runRepetitionControlStatementsModule() {
    // 3. Repetition
    // Loops - Do While, While, For
    int i = 3, j = 0, k = 0;
    do {
        cout << "i: " << i << endl;
        i++;
    } while (i < 3);

    while (j < 3) {
        cout << "j: " << j << endl;
        j++;
    }

    for (k; k < 3; k++) {
        cout << "k: " << k << endl;
    }
    return 0;
}

// * - Break & Continue
int runBreakAndContinueControlStatementsModule() {
    // Break
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
            break;
        cout << i << endl;
    }
    // Continue
    for (int j = 0; j < 10; j++) {
        if (j % 2 == 1)
            continue;
        cout << j << endl;
    }
    return 0;
}

// * - Random Numbers
int runPseudoRandomNumbersModule() {
    int randomNumber = 0;

    srand(time(nullptr));

    int val1 = rand() % 10; //val1 will be >= 0 and < 10
    int val2 = rand() % 10 + 1; // val2 will be >= 1 and <= 10

    cout << "Random Val 1: " << val1 << endl;
    cout << "Random Val 2: " << val2 << endl;

    return randomNumber;
}
/* *
* Section 3: Control Statements
*
* Projects
* ---------
* * * * * */
// * - Project Jam Of The Month Club
int runJamOfTheMonthClub() {
    int packageSelection = -1, numOfJamsPurchasedThisMonth = -1;
    cout << "Welcome To The Jam of the Month Club" << endl;
    cout << "To Get Started, please select which package you'd like to sign up for: " << endl << endl;
    cout << "Package Option 1 Details" << endl;
    cout << "------------------------" << endl;
    cout << "$8/Month" << endl;
    cout << "Includes 2 jams per month" << endl;
    cout << "$5 for each additional jam purchased" << endl << endl;
    cout << "Package Option 2 Details" << endl;
    cout << "------------------------" << endl;
    cout << "$12/Month" << endl;
    cout << "Includes 4 jams per month" << endl;
    cout << "$4 for each additional jam purchased" << endl << endl;
    cout << "Package Option 3 Details" << endl;
    cout << "------------------------" << endl;
    cout << "$15/Month" << endl;
    cout << "Includes 6 jams per month" << endl;
    cout << "$3 for each additional jam purchased" << endl << endl;
    do {
        cout << "Which Package would you like to select?" << endl;
        cin >> packageSelection;
        switch(packageSelection) {
            case 1:
            case 2:
            case 3:
                break;
            default:
                packageSelection = -1;
        }
    } while (packageSelection <= -1);

    do {
        cout << "How many additional jams did you purchase this month?" << endl;
        cin >> numOfJamsPurchasedThisMonth;
        if (numOfJamsPurchasedThisMonth > -1) {
            float costOfPackage = 0.0, costOfAdditionalJar = 0.0, totalCost = 0.0;
            int jamPackageLimit = 0, overTheLimit = 0;
            switch(packageSelection) {
                case 1:
                    jamPackageLimit = 2;
                    costOfPackage = 8.00;
                    costOfAdditionalJar = 5.00;
                    totalCost += costOfPackage;
                    if (numOfJamsPurchasedThisMonth > 0) {
                        float additionalCost = costOfAdditionalJar * numOfJamsPurchasedThisMonth;
                        totalCost += additionalCost;
                    }

                    cout << "This Month, You Get (2) Free Jams" << endl;
                    cout << "Package Cost: " << costOfPackage << endl;
                    cout << "Additional Jams Purchased: " << numOfJamsPurchasedThisMonth << " x " <<
                         costOfAdditionalJar << endl;
                    cout << "Total Due This Month: $" << fixed << setprecision(2) << totalCost << endl;
                    break;
                case 2:
                    jamPackageLimit = 4;
                    costOfPackage = 12.00;
                    costOfAdditionalJar = 4.00;
                    totalCost += costOfPackage;
                    if (numOfJamsPurchasedThisMonth > 0) {
                        float additionalCost = costOfAdditionalJar * numOfJamsPurchasedThisMonth;
                        totalCost += additionalCost;
                    }

                    cout << "This Month, You Get (4) Free Jams" << endl;
                    cout << "Package Cost: " << costOfPackage << endl;
                    cout << "Additional Jams Purchased: " << numOfJamsPurchasedThisMonth << " x " <<
                         costOfAdditionalJar << endl;
                    cout << "Total Due This Month: $" << fixed << setprecision(2) << totalCost << endl;
                    break;
                case 3:
                    jamPackageLimit = 6;
                    costOfPackage = 15.00;
                    costOfAdditionalJar = 3.00;
                    totalCost += costOfPackage;
                    if (numOfJamsPurchasedThisMonth > 0) {
                        float additionalCost = costOfAdditionalJar * numOfJamsPurchasedThisMonth;
                        totalCost += additionalCost;
                    }

                    cout << "This Month, You Get (6) Free Jams" << endl;
                    cout << "Package Cost: " << costOfPackage << endl;
                    cout << "Additional Jams Purchased: " << numOfJamsPurchasedThisMonth << " x " <<
                         costOfAdditionalJar << endl;
                    cout << "Total Due This Month: $" << fixed << setprecision(2) << totalCost << endl;
                    break;
                default:
                    packageSelection = -1;
            }
        }
    } while (numOfJamsPurchasedThisMonth <= -1);

    return 0;
}

// * - Project Odds & Evens
int runOddsAndEvens() {
    for(int i = 0; i <= 50; i += 1)
        if (i % 2 == 0) {
            cout << i << " is an even number" << endl;
        } else {
            cout << i << " is an odd number" << endl;
        }
    return 0;
}

// * - Project Guess The Number
int runGuessTheNumber() {
    srand(time(nullptr));
    int rgn = rand() % 100 + 1, userGuess = -1;
    bool guessedCorrectly = false;
    do {
        cout << "Try To Guess The RGN. The Range is 1-100." << endl;
        cin >> userGuess;
        if (userGuess < rgn) {
            cout << "Too Low" << endl;
        } else if (userGuess > rgn) {
            cout << "Too High" << endl;
        } else if (userGuess == rgn) {
            cout << "You've correctly guessed the RGN!!" << endl;
            guessedCorrectly = true;
        }
    } while (!guessedCorrectly);
    return 0;
}


int main() {
    cout << "Hello, Dustin! Running Section 3 C++ Modules!" << endl;
    runSequentialAndSelectionControlStatementsModule();
    runRepetitionControlStatementsModule();
    runBreakAndContinueControlStatementsModule();
    runPseudoRandomNumbersModule();
    cout << endl << endl;
    runJamOfTheMonthClub();
    runGuessTheNumber();
    runOddsAndEvens();
    return 0;
}