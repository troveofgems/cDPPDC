#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
/* *
 * Section 4: Arrays & Vectors
 *
 * Objectives
 * ----------
 * * * * * * */
// * - Built-In Arrays
int runBuiltInArraysModule() {
    return 0;
}

// * - Array Class
int runArrayClassModule() {
    return 0;
}

// * - Vector Class
int runVectorClassModule() {
    return 0;
}

// * - Multi-dimensional arrays
int runMultiDimensionalModule() {
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

// * - Project Vector Data
int runVectorData() {
    return 0;
}

// * - Parallel Arrays & Vectors
int runParallelTest() {
    return 0;
}


int main() {
    cout << "Hello, Dustin! Running Section 4 C++ Modules!" << endl;
    return 0;
}