/**************************
Name: Tom Tang
Assignment: Final Project
Purpose of the file: This is the main source file that includes
a function to print a message to the console.
***************************/

#include "main.h"


int main() {

    cout << "Attempting to set Matrix: matrix(3, 3, 5)" << endl;
    try {

        Matrix matrix(3, 3, 5);

        cout << "Matrix:" << endl;
        matrix.printMatrix();

        int rowIndex = 1;
        cout << "Sum of Row index " << rowIndex << ": " << matrix.rowSum(rowIndex) << endl;
        cout << "Average of Row index " << rowIndex << ": " << matrix.rowAverage(rowIndex) << endl;

        cout << "\n" << endl;

        cout << "Row index " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        cout << "\n" << endl;

        int colIndex = 0;
        cout << "Column index " << colIndex << ":" << endl;
        matrix.printColumn(colIndex);
        cout << "\n" << endl;

        int newValue = 10;
        int setRowIndex = 1;
        int setColIndex = 1;
        matrix.setElement(setRowIndex, setColIndex, newValue);
        cout << "Matrix after setting element at (" << setRowIndex << ", " << setColIndex << ") to " << newValue << ":" << endl;
        matrix.printMatrix();
        cout << "\n" << endl;


    } catch (int e) {
        cout << "Row/columns must be larger than 2." << endl;
    }



    return 0;
}