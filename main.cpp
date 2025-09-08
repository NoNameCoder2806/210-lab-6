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
    enterArrayData()
    Prompts the user to enter the value of the 5 elements of the array
    Arguments: a pointer to a double array
    Returns: nothing
*/
void enterArrayData(double* arr)      // Let user input the elements for the double array
{
    // Output a message to notify the user for the array entry
    cout << "Data entry for the array:" << endl;

    // Iterate 5 times and assign the entered values to the first 5 elements
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        // Prompt the user to enter the values for each element
        cout << "    > Element #" << i << ": ";

        // Store the value entered by the user
        cin >> *(arr + i);
        cin.ignore(1000, 10);
    }

    // Notify that the data entry is completed
    cout << "Data entry complete!" << endl;
}

/*
    consoleInput()
    Allows the user to enter information for a Restaurant struct.
    Arguments: none
    Returns: a Restaurant struct that contains the user's input
*/
void outputArrayData(double*)      // Output the elements of the array to the console
{

}

/*
    consoleInput()
    Allows the user to enter information for a Restaurant struct.
    Arguments: none
    Returns: a Restaurant struct that contains the user's input
*/
double sumArray(double*)      // Calculate the sum of the array
{
    return 0;
}