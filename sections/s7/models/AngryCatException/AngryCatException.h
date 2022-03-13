//
// Created by dustinkgreco on 3/12/22.
//

#ifndef CCPPDC_ANGRYCATEXCEPTION_H
#define CCPPDC_ANGRYCATEXCEPTION_H

#include <stdexcept>
using namespace std;

class AngryCatException : public runtime_error
{
    public:
        AngryCatException() : runtime_error("Made kitty angry!! mrrrowwwwwwww!!!!!")
        {
        }
        AngryCatException(string exDescription) : runtime_error(exDescription)
        {
        }
};

#endif //CCPPDC_ANGRYCATEXCEPTION_H
