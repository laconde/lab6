// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.
// Alberto Conde
// October 5, 2020

#include <iostream>
using namespace std;

// Function prototype
void swap(float,float);

int main()
{
    float firstNumber;
    float secondNumber;

    // Prompt user to enter the first number.
    cout << "Enter the first number" << endl;
    cout << "Then hit enter" << endl;
    cin >> firstNumber;

    // Prompt user to enter the second number.
    cout << "Enter the second number" << endl;
    cout << "Then hit enter" << endl;
    cin >> secondNumber;

    // Echo print the input.
    cout << endl << "You input the numbers as " << firstNumber
         << " and " << secondNumber << endl;

    // Now we will swap the values.
    swap(firstNumber,secondNumber);

    return 0;
}

void swap(float first, float second)
{
    float temp;
    temp = first;
    first = second;
    second = temp;
    cout << "After swapping, the values of the two numbers are "
    << first << " and " << second << endl;
}
 // It was passed by value because changes to the parameter do not affect the original argument. So to be able to swap the values you must pass it by value. 
