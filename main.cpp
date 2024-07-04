/**************************
Name: Tom Tang
Assignment: Final Project
Purpose of the file: This is the main source file that includes
a function to print a message to the console.
***************************/

#include "main.h"


int main() {

    cout << "Attempting to create and initialize matrix(2, 0)..." << endl;
    try {
        Matrix matrix(2, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(0, 2)..." << endl;
    try {
        Matrix matrix(0, 2);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, -1)..." << endl;
    try {
        Matrix matrix(3, -1);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(-1, 3)..." << endl;
    try {
        Matrix matrix(-1, 3);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 2)..." << endl;
    try {
        Matrix matrix(2, 2);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 2)..." << endl;
    try {
        Matrix matrix(3, 2);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 3)..." << endl;
    try {
        Matrix matrix(2, 3);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3)..." << endl;
    try {
        Matrix matrix(3, 3);
        cout << "Matrix initialized successfully." << endl;
        matrix.printMatrix();
        cout << endl;
    } catch (int e) {
        cout << "Error: Matrix dimensions must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 2, 0)..." << endl;
    try {
        Matrix matrix(2, 2, 0);
    } catch (int e) {
        cout << "Error: Matrix dimensions must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, -1, 0)..." << endl;
    try {
        Matrix matrix(3, -1, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(-1, 3, 0)..." << endl;
    try {
        Matrix matrix(-1, 3, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 2, 0)..." << endl;
    try {
        Matrix matrix(3, 2, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 3, 0)..." << endl;
    try {
        Matrix matrix(2, 3, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3, -1)..." << endl;
    try {
        Matrix matrix(3, 3, -1);
        cout << "Matrix initialized successfully." << endl;
        matrix.printMatrix();
        cout << endl;
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3, 0)..." << endl;
    try {
        Matrix matrix(3, 3, 0);
        cout << "Matrix initialized successfully." << endl;
        matrix.printMatrix();
        cout << endl;
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3, 5)..." << endl;
    try {
        Matrix matrix(3, 3, 5);
        cout << "Matrix initialized successfully." << endl;
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
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;
        matrix.printMatrix();
        cout  << endl;
        cout << "Row index " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        cout << endl;
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
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;
        matrix.printMatrix();
        cout  << endl;
        cout << "Row index " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        cout << endl;
        cout << "Sum: " << matrix.rowSum(rowIndex) << endl;
        cout << "Average: " << matrix.rowAverage(rowIndex) << endl;
        cout << "Min: " << matrix.min() << endl;
        cout << "Max: " << matrix.max() << endl;
        cout << endl;

        newValue = -3;
        newRowIndex = 0;
        newColIndex = 0;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 32;
        newRowIndex = 0;
        newColIndex = 1;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 2;
        newRowIndex = 0;
        newColIndex = 2;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        rowIndex = 0;
        matrix.printMatrix();
        cout  << endl;
        cout << "Row index " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        cout << endl;
        cout << "Sum: " << matrix.rowSum(rowIndex) << endl;
        cout << "Average: " << matrix.rowAverage(rowIndex) << endl;
        cout << "Min: " << matrix.min() << endl;
        cout << "Max: " << matrix.max() << endl;
        cout << endl;

        int colIndex = 0;
        cout << "Column index " << colIndex << ":" << endl;
        matrix.printColumn(colIndex);
        colIndex = 1;
        cout << endl;
        cout << "Column index " << colIndex << ":" << endl;
        matrix.printColumn(colIndex);
        colIndex = 2;
        cout << endl;
        cout << "Column index " << colIndex << ":" << endl;
        matrix.printColumn(colIndex);
        cout << endl;


    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
    }



    return 0;
}