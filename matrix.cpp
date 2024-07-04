/**************************
Name: Tom Tang
Assignment: Final Project
Purpose of the file: This file implements the functions declared in matrix.h.
***************************/

#include "matrix.h"

Matrix::Matrix(int rows, int cols) {

    /*********************************************
    Constructor to initialize the Matrix with given
    rows and columns, and an optional initialization value.
    Throws an exception if rows or columns are less than or equal 2.

    @param rows : the number of rows in the matrix
    @param cols : the number of columns in the matrix
    *********************************************/
    if (rows <= ROWS || cols <= COLS) {
        throw 0;
    }
    this->rows = rows;
    this->cols = cols;
    this->sorted = false;

    data = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        data[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            data[i][j] = INITVALUE;
        }
    }
}

Matrix::Matrix(int rows, int cols, int initValue) {

    /*********************************************
    Overloaded constructor to initialize the Matrix with given
    rows and columns, and an optional initialization value.
    Throws an exception if rows or columns are less than or equal 2.

    @param rows : the number of rows in the matrix
    @param cols : the number of columns in the matrix
    @param initValue : the initial value for all elements
    *********************************************/
    if (rows <= ROWS || cols <= COLS) {
        throw 0;
    }
    this->rows = rows;
    this->cols = cols;
    this->sorted = false;

    data = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        data[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            data[i][j] = initValue;
        }
    }
}


Matrix::~Matrix(){

    /*********************************************
    This destructor cleans up resources allocated to Matrix objects.

    @param na : na

    @return na : na

    @exception na : na
    *********************************************/

    for (int i = 0; i < rows; ++i) {
        delete[] data[i];
    }
    delete[] data;

}

void Matrix::printMatrix(){

    /*********************************************
    This method outputs the 2D array to the console.

    @return void : does not return a value

    @exception na : na
    *********************************************/

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}

void Matrix::printRow(int row){

    /*********************************************
    This method outputs a specific row of the 2D array to the console.

    @return void : does not return a value

    @exception int : throws an integer exception if the row index is invalid
    *********************************************/

    if (row >= 0 && row < rows) {
        for (int j = 0; j < cols; ++j) {
            cout << data[row][j] << " ";
        }
        cout << endl;
    } else {
        throw 0;
    }
}

void Matrix::printColumn(int col){

    /*********************************************
    This method outputs a specific column of the 2D array to the console.

    @return void : does not return a value

    @exception int : throws an integer exception if the column index is invalid
    *********************************************/

    if (col >= 0 && col < cols) {
        for (int i = 0; i < rows; ++i) {
            cout << data[i][col] << " ";
        }
       cout << endl;
    } else {
        throw 0;
    }
}

int Matrix::rowSum(int row) {

    /*********************************************
    This method calculates the sum of elements in a specific row of the matrix.

    @param row : the row index for which the sum is calculated
    @return int : the sum of elements in the specified row

    @exception int : throws an integer exception if the row index is out of bounds
    *********************************************/

    if (row >= 0 && row < rows) {
        int sum = 0;
        for (int j = 0; j < cols; ++j) {
            sum += data[row][j];
        }
        return sum;
    } else {
        throw 0;
    }
}

double Matrix::rowAverage(int row)  {
    return static_cast<double>(rowSum(row)) / cols;
}



void Matrix::setElement(int row, int col, int value) {
    /*********************************************
    This method sets the value of a specific element in the matrix.

    @param row : the row index of the element to set
    @param col : the column index of the element to set
    @param value : the value to set at the specified element

    @return void : does not return a value

    @exception int : throws an integer exception if the row index is out of bounds
    *********************************************/
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        data[row][col] = value;
    } else {
        throw 0;
    }
}