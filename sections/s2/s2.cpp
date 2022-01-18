#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
/* *
 * Section 2: Fundamentals
 *
 * Objectives
 * ----------
 * * * * * * */
// * - Variables & Data Types
int runVariablesModule() {
    cout << "Running The Variables Module..." << endl;
    cout << endl;

    cout << "Beginning with the Primitive Data Types" << endl;
    cout << "Type\t| Name\t\t\t\t| Size\t\t| Range" << endl;
    cout << "----------------------------------------|" << endl;
    cout << "int " << "\t" << "| Integer" << "\t\t\t" << "| 4 \t\t|" << " -2,147,483,648 to 2,147,483,647" << endl;
    cout << "char" << "\t" << "| Character" << "\t\t\t" << "| 1 \t\t|" << " -128 to 127" << endl;
    cout << "bool" << "\t" << "| Boolean" << "\t\t\t" << "| 1 \t\t|" << " true || false" << endl;
    cout << "float" << "\t" << "| Float" << "\t\t\t\t" << "| 4 \t\t|" << " 3.4E +/- 38 (7 digits)" << endl;
    cout << "double" << "\t" << "| Double" << "\t\t\t" << "| 8 \t\t|" << " 1.7E +/- 308 (15 digits)" << endl;
    cout << "void" << "\t" << "| Void" << "\t\t\t\t" << "| - \t\t|" << " No value" << endl;
    cout << "wchar_t" << "\t" << "| Wide Character" << "\t" << "| 2 or 4 \t|" << " 0 to 65,535" << endl;
    cout << endl;
    cout << "Now printing the Derived Data Types" << endl;
    cout << "Name\t\t|" << endl;
    cout << "------------|" << endl;
    cout << "Function" << "\t|" << endl;
    cout << "Array" << "\t\t|" << endl;
    cout << "Pointer" << "\t\t|" << endl;
    cout << "Reference" << "\t|" << endl;

    cout << endl;
    cout << "End Of Comments Module" << endl;
    cout << endl;

    return 0;
}
// * - Comments
int runCommentsModule() {
    cout << "Running The Comments Module..." << endl;
    cout << endl;

    cout << "C++ has two flavors of comment:" << endl;
    cout << "1. Single Line Comments: // This Is A SLC." << endl;
    cout << "2. Block Comments: /*This Is A BC.*/" << endl;

    cout << endl;
    cout << "End Of Comments Module" << endl;

    return 0;
}
// * - Arithmetic Operators
int runArithmeticOperatorsModule() {
    cout << "Running The Arithmetic Module..." << endl;
    cout << endl;

    cout << "C++ Basic Arithmetic Operators Include: " << endl;
    cout << "+ Addition" << endl;
    cout << "- Subtraction" << endl;
    cout << "* Multiplication" << endl;
    cout << "/ Division" << endl;
    cout << "% Modulus" << endl;

    int a = 5, b = 13;
    cout << endl << "Assume: " << endl << "int a = 5, b = 13;" << endl;
    cout << endl;
    int sum = a + b;
    cout << "a + b = " << sum << endl;
    cout << "shorthand: a += b" << endl;
    int difference = a - b;
    cout << "a - b = " << difference << endl;
    cout << "shorthand: a -= b" << endl;
    int product = a * b;
    cout << "a * b = " << product << endl;
    cout << "shorthand: a *= b" << endl;
    int quotient = a / b;
    cout << "a / b = " << quotient << endl;
    cout << "shorthand: a /= b" << endl;
    int remainder = a % b;
    cout << "a % b = " << remainder << endl;
    cout << "shorthand: a %= b" << endl;

    cout << endl;
    cout << "End Of Arithmetic Module" << endl;
    cout << endl;
    return 0;
}
// * - Relational Operators
int runRelationalOperatorsModule() {
    cout << "Running The Relational Operators Module..." << endl;
    cout << endl;

    cout << "C++ Basic Relational Operators Include: " << endl;
    cout << "> Greater Than" << endl;
    cout << ">= Greater Than Or Equal To" << endl;
    cout << "< Less Than" << endl;
    cout << "<= Less Than Or Equal To" << endl;
    cout << "== Equal To (Eval of Equality)" << endl;
    cout << "!= Not Equal To (Eval of Equality)" << endl;

    cout << boolalpha;
    int a = 27, b = 17;
    cout << endl << "Assume: " << endl << "int a = 27, b = 17;" << endl;
    cout << endl;

    bool isGreaterThan = a > b;
    cout << "a > b = " << isGreaterThan << endl;
    bool isGreaterThanOrEqualTo = a >= b;
    cout << "a >= b = " << isGreaterThanOrEqualTo << endl;
    bool isLessThan = a < b;
    cout << "a < b = " << isLessThan << endl;
    bool isLessThanOrEqualTo = a <= b;
    cout << "a <= b = " << isLessThanOrEqualTo << endl;
    bool isEqualTo = a == b;
    cout << "a == b = " << isEqualTo << endl;
    bool isNotEqualTo = a != b;
    cout << "a != b = " << isNotEqualTo << endl;

    cout << noboolalpha;

    cout << endl;
    cout << "End Of Relational Operators Module" << endl;
    cout << endl;
    return 0;
}
// * - Logical Operators
int runLogicalOperatorsModule() {
    cout << "Running The Logical Operators Module..." << endl;
    cout << endl;
    cout << boolalpha;

    cout << "C++ Basic Logical Operators Include: " << endl;
    cout << "&&\tAND" << endl;
    cout << "||\tOR" << endl;
    cout << "!\tNOT" << endl << endl;

    cout << "Logical AND" << endl;
    cout << "------------|" << endl;
    cout << "p   \tq\t\tp && q" << endl;
    cout << true << "\t" << true << "\t" << (true && true) << endl << endl;
    cout << true << "\t" << false << "\t" << (true && false) << endl << endl;
    cout << false << "\t" << true << "\t" << (false && true) << endl << endl;
    cout << false << "\t" << false << "\t" << (false && false) << endl << endl;

    cout << "Logical OR" << endl;
    cout << "----------|" << endl;
    cout << "p   \tq\t\tp || q" << endl;
    cout << true << "\t" << true << "\t" << (true || true) << endl << endl;
    cout << true << "\t" << false << "\t" << (true || false) << endl << endl;
    cout << false << "\t" << true << "\t" << (false || true) << endl << endl;
    cout << false << "\t" << false << "\t" << (false || false) << endl << endl;

    cout << "Logical NOT" << endl;
    cout << "-----------|" << endl;
    cout << "p\t\t!p" << endl;
    cout << true << "\t" << !true << endl << endl;
    cout << false << "\t" << !false << endl << endl;

    cout << endl;
    cout << "End Of Logical Operators Module" << endl;
    cout << endl;
    return 0;
}
// * - Symbolic Constants and Naming Conventions
int runSymbolicConstantsModule() {
    cout << "Running The Symbolic Constants & Naming Conventions Module..." << endl;
    cout << endl;

    cout << "C++ Basic Symbolic Constants & Naming Conventions: " << endl;
    cout << "Avogadro's Number: 6.02214076 x e23 mol^-1" << endl;
    const long double AVOGADROS_NUMBER = 6.02214076e23;
    cout << fixed << AVOGADROS_NUMBER << endl << endl;

    cout << "Planck's Number: 6.62607004 x e-34 (m^2 * kg)/sec" << endl;
    const double PLANCKS_CONSTANT = 6.62607004e-34;
    cout << fixed << PLANCKS_CONSTANT << endl << endl;

    cout << endl;
    cout << "End Of Symbolic Constants & Naming Conventions Module" << endl;
    cout << endl;
    return 0;
}
// * - Keyboard Input
int runKeyboardInputModule() {
    cout << "Running The Keyboard Input Module..." << endl;
    cout << endl;

    int age;
    string fullName, favoriteColor;

    cout << "What is your favorite color?" << endl;
    cin >> favoriteColor;
    cin.get(); // This line prevents the bug that happens if it were otherwise disabled.

    cout << "Please Enter Your Full Name: " << endl;
    getline(cin, fullName);

    cout << "Please Enter Your Age: " << endl;
    cin >> age;

    cout << "Hello " << fullName << ", " << favoriteColor << " is my favorite color too!" << endl;
    cout << "I am a bit younger than " << age << " years old though, I was only conceptualized at this moment!" << endl;

    cout << endl;
    cout << "End Of Keyboard Input Module" << endl;
    cout << endl;
    return 0;
}

/* *
* Section 2: Fundamentals
*
* Projects
* ---------
* * * * * */
// * - Project Average Of Three
int runAverageOfThrees() {
    cout << "Running The Average Of Threes Module..." << endl;
    cout << endl;

    double first = 0.0, second = 0.0, third = 0.0;

    cout << "Welcome to the Average Of 3s Program. Input 3 numbers, output the average. Ready to play?" << endl;
    cout << endl;
    cout << "What is your first choice of number?" << endl;
    cin >> first;

    cout << "What is your second choice of number?" << endl;
    cin >> second;

    cout << "What is your third choice of number?" << endl;
    cin >> third;

    cout << "Average Formula: [(a + b + c) / i]" << endl;
    cout << "Average Formula Prefill: [(" << first << " + " << second << " + " << third << ") / 3]" << endl;
    double the_average = 0.0;
    the_average = (first + second + third) / 3;

    cout << "Average is: " << the_average << endl;

    cout << endl;
    cout << "End Of The Average Of Threes Module" << endl;
    cout << endl;
    return 0;
}
// * - Project MadLibs Clone
int runMadLibsModule() {
    cout << "Running The MadLibs Module..." << endl;
    cout << "Madlib by Brainy Bunny, CC BY 2.0 - https://hobbylark.com/party-games/How-to-Make-Your-Own-Mad-Libs" << endl;
    cout << endl;

    string adjective_1, adjective_2, type_of_bird, room_in_a_house, past_tense_verb_1, present_verb_1,
            name_of_relative, singular_noun_1, some_liquid, gerund_verb_1, body_part_plural, plural_noun_1, gerund_verb_2,
            singular_noun_2;

    cout << "Please provide an adjective: " << endl;
    cin.get();
    getline(cin, adjective_1);
    cout << "Please provide another adjective: " << endl;
    getline(cin, adjective_2);
    cout << "Please provide a type of bird: " << endl;
    getline(cin, type_of_bird);
    cout << "Please provide a room in a house: " << endl;
    getline(cin, room_in_a_house);
    cout << "Please provide a past tense verb: " << endl;
    getline(cin, past_tense_verb_1);
    cout << "Please provide a present tense verb: " << endl;
    getline(cin, present_verb_1);
    cout << "Please provide a relative's name: " << endl;
    getline(cin, name_of_relative);
    cout << "Please provide a singular noun: " << endl;
    getline(cin, singular_noun_1);
    cout << "Please provide a liquid: " << endl;
    getline(cin, some_liquid);
    cout << "Please provide a gerund verb: " << endl;
    getline(cin, gerund_verb_1);
    cout << "Please provide a pluralized body part: " << endl;
    getline(cin, body_part_plural);
    cout << "Please provide a pluralized noun: " << endl;
    getline(cin, plural_noun_1);
    cout << "Please provide another gerund verb: " << endl;
    getline(cin, gerund_verb_2);
    cout << "Please provide another noun: " << endl;
    getline(cin, singular_noun_2);

    cout << "It was a " << adjective_1 << " cold November day. I woke up to the " << adjective_2 << " smell of " <<
         type_of_bird << " roasting in the " << room_in_a_house << " downstairs. I " << past_tense_verb_1 << " down the " <<
         "stairs to see if I could help " << present_verb_1 << " the dinner. My mom said 'See if " << name_of_relative <<
         " needs a fresh " << singular_noun_1 << "'. So I carried a tray of glasses full of " << some_liquid << " into the " <<
         gerund_verb_1 << " room. When I got there, I couldn't believe my " << body_part_plural << "! There were " <<
         plural_noun_1 << " " << gerund_verb_2 << " on the " << singular_noun_2 << "!" << endl;

    cout << endl;
    cout << "End Of The MadLibs Module" << endl;
    cout << endl;
    return 0;
}


int main() {
    cout << "Hello, Dustin! Running Section 2 C++ Modules!" << endl;
    runVariablesModule();
    runCommentsModule();
    runArithmeticOperatorsModule();
    runRelationalOperatorsModule();
    runLogicalOperatorsModule();
    runSymbolicConstantsModule();
    runKeyboardInputModule();
    runAverageOfThrees();
    runMadLibsModule();
    return 0;
}