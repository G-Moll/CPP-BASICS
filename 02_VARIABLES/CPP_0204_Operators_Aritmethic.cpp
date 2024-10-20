#include <iostream>
using namespace std;

int main() {
    /* ARITMETHIC OPERATORS
        + Addition
        - Subtraction
        * Multiplication
        / Division
        % Modulus
    */

    // int numOne = 17;
    // int numTwo = 3;
    // cout << "Sum: " << numOne + numTwo << endl;
    // cout << "Sub: " << numOne - numTwo << endl;
    // cout << "Mul: " << numOne * numTwo << endl;
    // cout << "Div: " << numOne / numTwo << endl;
    // cout << "Mod: " << numOne % numTwo << endl;

    /* ASSIGNMENT OPERATORS
        =  Assignment
        += Assignment Addition
        -= Assignment Subtraction
        *= Assignment Multiplication
        /= Assignment Division
        %= Assignment Modulus
    */

    // int age = 33;
    // char gender = 'M';
    // bool single = true;

    // cout << "Age: " << age << endl;
    // cout << "Gender: " << gender << endl;
    // cout << "Single: " << single << endl;

    int numBis = 4;
    cout << "numBis: " << numBis << endl;

    numBis += 10;    // numBis = numBis + 10;
    cout << "numBis (+=): " << numBis << endl;

    numBis -= 2;    // numBis = numBis - 2;
    cout << "numBis (-=): " << numBis << endl;

    numBis *= 2;    // numBis = numBis * 2;
    cout << "numBis (*=): " << numBis << endl;

    numBis /= 8;    // numBis = numBis / 8;
    cout << "numBis (/=): " << numBis << endl;

    numBis %= 2;    // numBis = numBis % 2;
    cout << "numBis (%=): " << numBis << endl;

    return 0;
}
