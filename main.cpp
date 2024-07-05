/**************************
Name: Tom Tang
Assignment: Final Project
Purpose of the file: This is the main source file that includes
a function to print a message to the console.
***************************/

#include "main.h"

int main() {

    cout << "Attempting to create and initialize matrix(2, 0)." << endl;
    try {
        Matrix matrix(2, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(0, 2)." << endl;
    try {
        Matrix matrix(0, 2);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, -1)." << endl;
    try {
        Matrix matrix(3, -1);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(-1, 3)." << endl;
    try {
        Matrix matrix(-1, 3);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 2)." << endl;
    try {
        Matrix matrix(2, 2);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 2)." << endl;
    try {
        Matrix matrix(3, 2);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 3)." << endl;
    try {
        Matrix matrix(2, 3);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3)." << endl;
    try {
        Matrix matrix(3, 3);
        cout << "Matrix initialized successfully." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;

    } catch (int e) {
        cout << "Error: Matrix dimensions must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 2, 0)." << endl;
    try {
        Matrix matrix(2, 2, 0);
    } catch (int e) {
        cout << "Error: Matrix dimensions must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, -1, 0)." << endl;
    try {
        Matrix matrix(3, -1, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(-1, 3, 0)." << endl;
    try {
        Matrix matrix(-1, 3, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 2, 0)." << endl;
    try {
        Matrix matrix(3, 2, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 3, 0)." << endl;
    try {
        Matrix matrix(2, 3, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3, -1)." << endl;
    try {
        Matrix matrix(3, 3, -1);
        cout << "Matrix initialized successfully." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3, 0)." << endl;
    try {
        Matrix matrix(3, 3, 0);
        cout << "Matrix initialized successfully." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3, 5)." << endl;
    try {
        Matrix matrix(3, 3, 5);
        cout << "Matrix initialized successfully." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;

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
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;
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
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;
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

        newValue = 28;
        newRowIndex = 1;
        newColIndex = 1;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 62;
        newRowIndex = 1;
        newColIndex = 0;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 4;
        newRowIndex = 2;
        newColIndex = 2;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        rowIndex = 0;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;
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

        cout << "Rotate Matrix so rows become columns and columns become rows." << endl;
        matrix.rotateMatrix();
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;

        rowIndex = 0;
        cout << "Row index " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        rowIndex = 1;
        cout << endl;
        cout << "Row index " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        rowIndex = 2;
        cout << endl;
        cout << "Row index " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        cout << endl;

        int findValue1 = 17;
        int findValue2 = 100;
        int findValue3 = 28;
        cout << "Looking for values " << findValue1 << ", " << findValue2 << ", " << findValue3 << " in matrix." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;
        if (matrix.findValue(findValue1)) {
            cout << "Found: " << findValue1 << endl;
        } else {
            cout << "Not found: " << findValue1 << endl;
        }
        if (matrix.findValue(findValue2)) {
            cout << "Found " << findValue2 << endl;
        } else {
            cout << "Not found: " << findValue2 << endl;
        }
        if (matrix.findValue(findValue3)) {
            cout << "Found " << findValue3 << endl;
        } else {
            cout << "Not found: " << findValue3 << endl;
        }
        cout << endl;

        cout << "Matrix before sorting each row." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;

        matrix.sortMatrix();

        cout << "Matrix after sorting each row." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;

        findValue1 = -3;
        findValue2 = 2;
        findValue3 = 56;
        cout << "Binary search for values " << findValue1 << ", " << findValue2 << ", " << findValue3 << " in matrix." << endl;
        if (matrix.findValue(findValue1)) {
            cout << "Found: " << findValue1 << endl;
        } else {
            cout << "Not found: " << findValue1 << endl;
        }
        if (matrix.findValue(findValue2)) {
            cout << "Found " << findValue2 << endl;
        } else {
            cout << "Not found: " << findValue2 << endl;
        }
        if (matrix.findValue(findValue3)) {
            cout << "Found " << findValue3 << endl;
        } else {
            cout << "Not found: " << findValue3 << endl;
        }
        cout << endl;

    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
    }

    cout << "Attempting to create and initialize a new matrix(10, 10, 1)." << endl;
    try {
        Matrix matrix(10, 10, 1);
        cout << "Matrix initialized successfully." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
    }

    cout << "Attempting to create and initialize a new matrix(8, 5, 2)." << endl;
    try {
        Matrix matrix(8, 5, 2);
        cout << "Matrix initialized successfully." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
    }

    cout << "Attempting to create and initialize a new matrix(6, 10, 3)." << endl;
    try {
        Matrix matrix(6, 10, 3);
        cout << "Matrix initialized successfully." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
    }

    return 0;
}