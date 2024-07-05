# Final Project: Classes and Objects

This C++ program demonstrates an integer matrix class called MyList. The matrix class allows for dynamic creation and manipulation of integer matrices.

## Functionality Overview

The program showcases the following operations:

- **Constructor Variations:**
    - `Matrix(int, int)`: Initializes a matrix with specified dimensions, throwing an exception if rows or columns are less than or equal to 2.
    - `Matrix(int, int, int)`: Initializes a matrix with specified dimensions and initializes all elements to the given value, throwing an exception if rows or columns are less than or equal to 2.

- **Destructor:**
    - `~Matrix()`: Cleans up resources allocated to Matrix objects.

- **Matrix Operations:**
    - `printMatrix()`: Outputs the matrix to the console.
    - `printRow(int row)`: Outputs a specific row of the matrix to the console.
    - `printColumn(int)`: Outputs a specific column of the matrix to the console.
    - `rowSum(int row)`: Calculates the sum of elements in a specific row of the matrix.
    - `rowAverage(int)`: Calculates the average of elements in a specific row of the matrix.
    - `min()`: Finds the minimum value in the entire matrix.
    - `max()`: Finds the maximum value in the entire matrix.
    - `setElement(int, int, int)`: Sets the value of a specific element in the matrix.
    - `rotateMatrix()`: Rotates the matrix by swapping its rows and columns.
    - `getSorted()`: Returns the sorted status of the matrix.
    - `setMatrix(int, int, int)`: Sets the matrix to the specified dimensions and initializes all elements to the given value.
    - `findValue(int)`: Searches for a given value in the matrix.

- **Sorting:**
    - `sortMatrix()`: Sorts the values of the matrix on a per-row basis.
