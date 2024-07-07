/**************************
Name: Tom Tang
Assignment: Final Project
Purpose of the file: This is a header file that contains the class declaration for Matrix.
This file is included by matrix.cpp for the implementation of the Matrix class methods.
***************************/

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>     /* cout, endl */
#include <algorithm>    /* binary_search */
#include <cstdlib>      /* atoi */
#include <string.h>     /* strlen */

#define ROWS 2
#define COLS 2

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
    float rowAverage(int);
    int min();
    int max();
    bool findValue(int);
    bool getSorted();
    bool validInteger(char*);

    /**********************
    Setters/Mutators
    ***********************/
    void setElement(int, int, int);
    void sortMatrix();
    void rotateMatrix();
    void setMatrix(int, int, int initValue = 0);

private:
    /**********************
    Attributes
    ***********************/
    int rows;
    int cols;
    int **data;
    bool sorted;

};

#endif //MATRIX_H
