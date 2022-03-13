//
// Created by dustinkgreco on 3/12/22.
//

#include "Grader.h"
#include <stdexcept>
using namespace std;

Grader::Grader(int grade)
{
    this->grade = grade;
}

string Grader::getLetterGrade() const
{
    string retStr = "Grade Translation " + to_string(grade) + " ";
    switch(this->grade)
    {
        case 100:
            retStr =  retStr.append("is an A+.");
            break;
        case 90 ... 99:
            retStr =  retStr.append("is an A.");
            break;
        case 80 ... 89:
            retStr =  retStr.append("is an B.");
            break;
        case 70 ... 79:
            retStr =  retStr.append("is an C.");
            break;
        case 60 ... 69:
            retStr =  retStr.append("is an D.");
            break;
        case 0 ... 59:
            retStr =  retStr.append("is an F.");
            break;
        default:
            throw out_of_range("Percentage provided must fall between 0-100. Try Again.");
    }
    return retStr;
}