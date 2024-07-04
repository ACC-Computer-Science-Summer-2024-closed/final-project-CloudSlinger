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

        cout << "Attempting to set Row: index 2" << endl;
        try {
            int rowIndex = 2;
            cout << "Row:" << endl;
            matrix.printRow(rowIndex);

        } catch (int e) {
            cout << "Invalid row index." << endl;
        }

        cout << "Attempting to set Column: index 1" << endl;
        try {
            int colIndex = 1;
            cout << "Column:" << endl;
            matrix.printColumn(colIndex);

        } catch (int e) {
            cout << "Invalid column index." << endl;
        }

    } catch (int e) {
        cout << "Row/columns must be larger than 2." << endl;
    }



    return 0;
}