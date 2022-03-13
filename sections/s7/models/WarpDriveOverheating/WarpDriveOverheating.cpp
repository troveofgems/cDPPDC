//
// Created by dustinkgreco on 3/12/22.
//
#include <iostream>
#include <stdexcept>
#include "WarpDriveOverheating.h"

using namespace std;

void WarpDriveOverheating::WarpTest(int tempInCelsius)
{
    if (tempInCelsius >= 80) {
        throw WarpDriveOverheating();
    } else {
        cout << "Ship Engine Temps Are Stabilized Capt'n! Onward!!" << endl;
    }
}