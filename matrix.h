/**************************
Name: Tom Tang
Assignment: Final Project
Purpose of the file: This is a header file that contains the class declaration for MyList.
This file is included by matrix.cpp for the implementation of the MyList class methods.
***************************/

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>     /* cout, endl */
#include <stdlib.h>     /* srand, rand */
#include <vector>       /* vector */

#define ROWS 2
#define COLS 2

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
    Matrix(int);
    ~Matrix();

    /**********************
    Getters/Accessors
    ***********************/


    /**********************
    Setters/Mutators
    ***********************/


private:
    /**********************
    Attributes
    ***********************/

    
    /**********************
    Private Methods
    ***********************/

};


#endif //MATRIX_H
