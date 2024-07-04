/**************************
Name: Tom Tang
Assignment: Final Project
Purpose of the file: This is the main source file that includes
a function to print a message to the console.
***************************/

#include "main.h"


int main() {

    cout << "Attempting to create and initialize matrix(2, 2)" << endl;
    try {
        Matrix matrix(2, 2);
    } catch (int e) {
        cout << "Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 2)" << endl;
    try {
        Matrix matrix(3, 2);
    } catch (int e) {
        cout << "Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 3)" << endl;
    try {
        Matrix matrix(2, 3);
    } catch (int e) {
        cout << "Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3)" << endl;
    try {
        Matrix matrix(3, 3);
        matrix.printMatrix();
        cout << endl;
    } catch (int e) {
        cout << "Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 2, 0)" << endl;
    try {
        Matrix matrix(2, 2, 0);
    } catch (int e) {
        cout << "Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 2, 0)" << endl;
    try {
        Matrix matrix(3, 2, 0);
    } catch (int e) {
        cout << "Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 3, 0)" << endl;
    try {
        Matrix matrix(2, 3, 0);
    } catch (int e) {
        cout << "Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3, 0)" << endl;
    try {
        Matrix matrix(3, 3, 0);
        matrix.printMatrix();
        cout << endl;
    } catch (int e) {
        cout << "Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3, 5)" << endl;
    try {
        Matrix matrix(3, 3, 5);
        matrix.printMatrix();
        cout << endl;
        int rowIndex = 1;
        cout << "Sum row index " << rowIndex << ": " << matrix.rowSum(rowIndex) << endl;
        cout << "Average row index " << rowIndex << ": " << matrix.rowAverage(rowIndex) << endl;
        cout << "Min: " << matrix.min() << endl;
        cout << "Max: " << matrix.max() << endl;
        cout << endl;

        int newValue = 10;
        int newRowIndex = 1;
        int newColIndex = 1;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << ":" << endl;
        matrix.printMatrix();
        cout  << endl;
        cout << "Row index " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        cout << "Sum: " << matrix.rowSum(rowIndex) << endl;
        cout << "Average: " << matrix.rowAverage(rowIndex) << endl;
        cout << "Min: " << matrix.min() << endl;
        cout << "Max: " << matrix.max() << endl;
        cout << endl;

        newValue = 17;
        newRowIndex = 2;
        newColIndex = 1;
        rowIndex = 2;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << ":" << endl;
        matrix.printMatrix();
        cout  << endl;
        cout << "Row index " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        cout << "Sum: " << matrix.rowSum(rowIndex) << endl;
        cout << "Average: " << matrix.rowAverage(rowIndex) << endl;
        cout << "Min: " << matrix.min() << endl;
        cout << "Max: " << matrix.max() << endl;
        cout << endl;






        int colIndex = 1;
        cout << "Column index " << colIndex << ":" << endl;
        matrix.printColumn(colIndex);
        cout << endl;

    } catch (int e) {
        cout << "Matrix row/columns must be larger than 2." << endl;
    }



    return 0;
}