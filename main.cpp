/**************************
Name: Tom Tang
Assignment: Final Project
Purpose of the file: This is the main source file that includes
a function to print a message to the console.
***************************/

#include "main.h"

int main(int argc, char *argv[]) {

    if (argc == 3) {
        int rows = atoi(argv[1]);
        int cols = atoi(argv[2]);

        cout << "Attempting to create matrix(" << argv[1] << ", " << argv[2] << ") based on command line parameters." << endl;
        try {
            Matrix matrix(rows, cols);
            if (!matrix.validInteger(argv[1]) || !matrix.validInteger(argv[2])) {
                cout << "Error: Matrix row/columns must be integers." << endl;
                cout << endl;
            } else {
                cout << "Matrix initialized successfully." << endl;
                matrix.printMatrix();
                cout << endl;
            }
        } catch (int e) {
            cout << "Error: Matrix row/columns must be integers and larger than 2." << endl;
            cout << endl;
        }

    } else if (argc == 4) {
        int rows = atoi(argv[1]);
        int cols = atoi(argv[2]);
        int initValue = atoi(argv[3]);

        cout << "Attempting to create matrix(" << argv[1] << ", " << argv[2] << ", " << argv[3] << ") based on command line parameters." << endl;
        try {
            Matrix matrix(rows, cols, initValue);
            if (!matrix.validInteger(argv[1]) || !matrix.validInteger(argv[2]) || !matrix.validInteger(argv[3])) {
                cout << "Error: Matrix row/columns and initial value must be integers." << endl;
                cout << endl;
            } else {
                cout << "Matrix initialized successfully." << endl;
                matrix.printMatrix();
                cout << endl;
            }
        } catch (int e) {
            cout << "Error: Matrix row/columns and initial value must be integers and larger than 2." << endl;
            cout << endl;
        }

    } else if (argc == 2) {
        cout << "Error: Incorrect number of arguments, expecting 2 or 3 and must be integers." << endl;
        cout << endl;
    } else if (argc > 4) {
        cout << "Error: Too many arguments, expecting 2 or 3 and must be integers." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 0) without a default value." << endl;
    try {
        Matrix matrix(2, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(0, 2) without a default value." << endl;
    try {
        Matrix matrix(0, 2);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, -1) without a default value." << endl;
    try {
        Matrix matrix(3, -1);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(-1, 3) without a default value." << endl;
    try {
        Matrix matrix(-1, 3);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 2) without a default value." << endl;
    try {
        Matrix matrix(2, 2);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 2) without a default value." << endl;
    try {
        Matrix matrix(3, 2);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 3) without a default value." << endl;
    try {
        Matrix matrix(2, 3);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3) without a default value." << endl;
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

    cout << "Attempting to create and initialize a new matrix(10, 10) without a default value." << endl;
    try {
        Matrix matrix(10, 10);
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

    cout << "Attempting to create and initialize a new matrix(8, 5) without a default value." << endl;
    try {
        Matrix matrix(8, 5);
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

    cout << "Attempting to create and initialize a new matrix(6, 10) without a default value." << endl;
    try {
        Matrix matrix(6, 10);
        cout << "Matrix initialized successfully." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;

        int newValue = -3;
        int newRowIndex = 0;
        int newColIndex = 0;
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
        newColIndex = 6;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 1;
        newRowIndex = 2;
        newColIndex = 9;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = -25;
        newRowIndex = 3;
        newColIndex = 2;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 0;
        newRowIndex = 3;
        newColIndex = 7;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 19;
        newRowIndex = 3;
        newColIndex = 4;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 49;
        newRowIndex = 4;
        newColIndex = 4;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 45;
        newRowIndex = 4;
        newColIndex = 8;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 9;
        newRowIndex = 5;
        newColIndex = 0;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 39;
        newRowIndex = 5;
        newColIndex = 5;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 27;
        newRowIndex = 5;
        newColIndex = 9;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

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

        int findValue1 = 32;
        int findValue2 = 4;
        int findValue3 = 256;
        cout << "Using linear search to look for values " << findValue1 << ", " << findValue2 << ", " << findValue3 << " in matrix." << endl;
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

        matrix.sortMatrix();

        cout << "Matrix after sorting each row, sorted is true." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << endl;
        cout << "\nMin: " << matrix.min() << ", Max: " << matrix.max() << endl;
        cout << endl;

        findValue1 = -10;
        findValue2 = 19;
        findValue3 = 45;
        cout << "Using binary search to look for values " << findValue1 << ", " << findValue2 << ", " << findValue3 << " in matrix." << endl;
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

        newValue = 500;
        newRowIndex = 2;
        newColIndex = 4;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;
        cout << endl;
        cout << "Updated Matrix with new element, sorted is false." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;

        for (int i = 0; i < 6; ++i) {
            cout << "Row " << i << " sum: " << matrix.rowSum(i) << ", Average: " << matrix.rowAverage(i) << endl;
        }
        cout << endl;

    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 2, 0) with a default value." << endl;
    try {
        Matrix matrix(2, 2, 0);
    } catch (int e) {
        cout << "Error: Matrix dimensions must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, -1, 0) with a default value." << endl;
    try {
        Matrix matrix(3, -1, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(-1, 3, 0) with a default value." << endl;
    try {
        Matrix matrix(-1, 3, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 2, 0) with a default value." << endl;
    try {
        Matrix matrix(3, 2, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(2, 3, 0) with a default value." << endl;
    try {
        Matrix matrix(2, 3, 0);
    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    cout << "Attempting to create and initialize matrix(3, 3, 0) with a default value." << endl;
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

    cout << "Attempting to create and initialize matrix(3, 3, -1) with a default value." << endl;
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

    cout << "Attempting to create and initialize matrix(5, 5, 5) with a default value." << endl;
    try {
        Matrix matrix(5, 5, 5);
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
        cout << endl;
        cout << "Min: " << matrix.min() << ", Max: " << matrix.max() << endl;
        cout << endl;

        cout << "Row " << rowIndex << ":" << endl;

        matrix.printRow(rowIndex);
        cout << "Sum: " << matrix.rowSum(newRowIndex) << ", Average: " << matrix.rowAverage(newRowIndex) << endl;
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

        cout << endl;
        cout << "Min: " << matrix.min() << ", Max: " << matrix.max() << endl;
        cout << endl;

        cout << "Row " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        cout << "Sum: " << matrix.rowSum(rowIndex) << ", Average: " << matrix.rowAverage(rowIndex) << endl;
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

        newValue = 7;
        newRowIndex = 2;
        newColIndex = 4;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 41;
        newRowIndex = 3;
        newColIndex = 0;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 21;
        newRowIndex = 3;
        newColIndex = 4;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 81;
        newRowIndex = 3;
        newColIndex = 3;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;

        newValue = 25;
        newRowIndex = 4;
        newColIndex = 2;
        matrix.setElement(newRowIndex, newColIndex, newValue);
        cout << "Setting element at index (" << newRowIndex << ", " << newColIndex << ") to " << newValue << "." << endl;
        cout << endl;

        rowIndex = 0;
        cout << "Updated Matrix with new elements." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << "\n" << endl;

        int colIndex = 0;
        cout << "Column " << colIndex << ":" << endl;
        matrix.printColumn(colIndex);
        colIndex = 1;
        cout << endl;
        cout << "Column " << colIndex << ":" << endl;
        matrix.printColumn(colIndex);
        colIndex = 2;
        cout << endl;
        cout << "Column " << colIndex << ":" << endl;
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
        cout << "Row " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        rowIndex = 1;
        cout << endl;
        cout << "Row " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        rowIndex = 2;
        cout << endl;
        cout << "Row " << rowIndex << ":" << endl;
        matrix.printRow(rowIndex);
        cout << endl;

        int findValue1 = 17;
        int findValue2 = 100;
        int findValue3 = 28;
        cout << "Using linear search to look for values " << findValue1 << ", " << findValue2 << ", " << findValue3 << " in matrix." << endl;
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

        cout << "Matrix after sorting each row, sorted is true." << endl;
        matrix.printMatrix();
        cout << "Sorted: ";
        if (matrix.getSorted()) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << endl;
        cout << "\nMin: " << matrix.min() << ", Max: " << matrix.max() << endl;
        cout << endl;

        findValue1 = -3;
        findValue2 = 2;
        findValue3 = 56;
        cout << "Using binary search to look for values " << findValue1 << ", " << findValue2 << ", " << findValue3 << " in matrix." << endl;
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

        for (int i = 0; i < 5; ++i) {
            cout << "Row " << i << " sum: " << matrix.rowSum(i) << ", Average: " << matrix.rowAverage(i) << endl;
        }

    } catch (int e) {
        cout << "Error: Matrix row/columns must be larger than 2." << endl;
        cout << endl;
    }

    return 0;
}