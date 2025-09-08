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
    double sum = sumArray(arr);
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
    outputArrayData()
    Display the content of a double array
    Arguments: a pointer to a double array
    Returns: nothing
*/
void outputArrayData(double* arr)      // Output the elements of the array to the console
{
    // Notify the outputting process
    cout << "Outputting array elements: ";

    // Iterate 5 times and output the values of the array elements
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        // Display the value
        cout << *(arr + i);

        // If this is not the final element
        if (i != ARRAY_SIZE - 1)
        {
            // We add a comma and a space
            cout << ", ";
        }
    }

    // Enter a new line after displaying all the elements
    cout << endl;
}

/*
    sumArray()
    Calculates the sum of the array
    Arguments: a pointer to the double array
    Returns: the sum of the elements of the array
*/
double sumArray(double* arr)      // Calculate the sum of the array
{
    // Declare a new variable to hold the sum value
    double sum = 0;

    // Iterate through the array and calculate the sum
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        // Add the value of the current current element
        sum += *(arr + i);
    }

    // Return the sum value
    return sum;
}