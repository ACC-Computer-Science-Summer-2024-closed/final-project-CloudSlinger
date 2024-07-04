/**************************
Name: Tom Tang
Assignment: Final Project
Purpose of the file: This is a header file that contains the class declaration for Matrix.
This file is included by matrix.cpp for the implementation of the Matrix class methods.
***************************/

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>     /* cout, endl */
#include <stdlib.h>     /* srand, rand */

#define ROWS 2
#define COLS 2
#define INITVALUE 0

using std::cout;
using std::endl;

class Matrix {
    /*********************************************
    This class defines a Matrix. It lets you create
    a 2D array of integers with specified rows and columns.
    The class has a constructor to set up the matrix,
    and various methods to access, update, and print the matrix.

    @attrib rows : the number of rows in the matrix
    @attrib cols : the number of columns in the matrix
    @attrib data : 2D vector to hold the matrix data
    *********************************************/

public:
    /**********************
    Constructors/Destructor
    ***********************/
    Matrix(int, int);
    Matrix(int, int, int);
    ~Matrix();

    /**********************
    Getters/Accessors
    ***********************/
    void printMatrix();
    void printRow(int);
    void printColumn(int);
    int rowSum(int);
    double rowAverage(int);
    int min();
    int max();
    bool getSorted();
    void sort();

    /**********************
    Setters/Mutators
    ***********************/
    void setElement(int, int, int);
    void rotateMatrix();

private:
    /**********************
    Attributes
    ***********************/
    int rows;
    int cols;
    int **data;
    bool sorted;

    /**********************
    Private Methods
    ***********************/
    void initializeData(int);
};

#endif //MATRIX_H
