# Final Project: Classes and Objects

This C++ program implements an integer matrix class, facilitating dynamic creation and manipulation of matrices.

## Functionality Overview

### Constructors

- **Matrix(int, int)**: Constructs a matrix with specified dimensions. Throws an exception if rows or columns are less than or equal to 2.
- **Matrix(int, int, int)**: Overloaded constructor that initializes the matrix with specified dimensions and an initial value for all elements. Throws an exception if rows or columns are less than or equal to 2.

### Destructor

- **~Matrix()**: Cleans up resources allocated to Matrix objects.

### Matrix Operations

- **printMatrix()**: Outputs the matrix to the console.
- **printRow(int)**: Outputs a specific row of the matrix to the console.
- **printColumn(int)**: Outputs a specific column of the matrix to the console.
- **rowSum(int)**: Calculates the sum of elements in a specific row.
- **rowAverage(int)**: Calculates the average of elements in a specific row.
- **min()**: Finds the minimum value in the entire matrix.
- **max()**: Finds the maximum value in the entire matrix.
- **setElement(int, int, int)**: Sets the value of a specific element in the matrix.
- **rotateMatrix()**: Rotates the matrix by swapping its rows and columns.
- **getSorted()**: Returns whether the matrix is sorted.
- **sortMatrix()**: Sorts the values of the matrix on a per-row basis.
- **findValue(int)**: Searches for a given value in the matrix.

### Sorting

- **sortMatrix()**: Sorts each row of the matrix.


