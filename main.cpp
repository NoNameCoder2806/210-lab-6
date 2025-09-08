// COMSC-210 | Lab 6 | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Constants
const int ARRAY_SIZE = 5;

// Function prototypes
void enterArrayData(double*);       // Let user input the elements for the double array

void outputArrayData(double*);      // Output the elements of the array to the console

double sumArray(double*);           // Calculate the sum of the array

// Main function
int main()
{
    // Dynamically declare a double array that holds 5 double elements
    double* arr = nullptr;
    arr = new double[5];

    // Let user enter the elements of the array
    enterArrayData(arr);

    // Output the elements to the console
    outputArrayData(arr);

    // Calculate the sum of the array
    int sum = sumArray(arr);
    cout << "Sum of values: " << sum << endl;      // Output the sum value to the console

    return 0;
}

// Function implementations
/*
    consoleInput()
    Allows the user to enter information for a Restaurant struct.
    Arguments: none
    Returns: a Restaurant struct that contains the user's input
*/
void enterArrayData(double* arr)       // Let user input the elements for the double array
{
}

/*
    consoleInput()
    Allows the user to enter information for a Restaurant struct.
    Arguments: none
    Returns: a Restaurant struct that contains the user's input
*/
void outputArrayData(double*);      // Output the elements of the array to the console

/*
    consoleInput()
    Allows the user to enter information for a Restaurant struct.
    Arguments: none
    Returns: a Restaurant struct that contains the user's input
*/
double sumArray(double*);           // Calculate the sum of the array