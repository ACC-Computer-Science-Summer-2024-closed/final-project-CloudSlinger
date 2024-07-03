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
        throw std::invalid_argument("Matrix dimensions must be at least 2x2.");
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
        throw std::invalid_argument("Matrix dimensions must be at least 2x2.");
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


Matrix::~Matrix() {

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


