//
// Created by dustinkgreco on 3/12/22.
//

#ifndef CCPPDC_WARPDRIVEOVERHEATING_H
#define CCPPDC_WARPDRIVEOVERHEATING_H

#include <string>
#include <stdexcept>

using namespace std;

class WarpDriveOverheating : public overflow_error {
    public:
        WarpDriveOverheating() : overflow_error("Warp drive has exceeded the safety temperature boundaries! Danger!! Danger!!\nAlso Mother says there's an Alien on board...")
        {
        }
        void WarpTest(int tempInCelsius);
};

#endif //CCPPDC_WARPDRIVEOVERHEATING_H
