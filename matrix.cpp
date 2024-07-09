/**************************
Name: Tom Tang
Assignment: Final Project
Purpose of the file: This file implements the functions declared in matrix.h.
***************************/

#include "matrix.h"

Matrix::Matrix(int rows, int cols) {

    /*********************************************
    Constructor to initialize the Matrix with given
    rows and columns. Throws an exception if rows or
    columns are less than the defined minimum values.

    @param rows : the number of rows in the matrix
    @param cols : the number of columns in the matrix

    @return na : na

    @exception int : throws an integer exception if rows < ROWS or columns < COLS
    *********************************************/

    if (rows < ROWS || cols < COLS) {
        throw 0;
    }

    setMatrix(rows, cols);
}

Matrix::Matrix(int rows, int cols, int initValue) {

    /*********************************************
    Overloaded constructor to initialize the Matrix with specified
    rows and columns, and an initial value for all elements.
    Throws an exception if rows or columns are less than the minimum
    values defined by ROWS and COLS.

    @param rows : the number of rows in the matrix
    @param cols : the number of columns in the matrix
    @param initValue : the initial value for all elements

    @return na : na

    @exception int : throws an integer exception if rows < ROWS or columns < COLS
    *********************************************/

    if (rows < ROWS || cols < COLS) {
        throw 0;
    }

    setMatrix(rows, cols, initValue);
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

    @exception na : na
    *********************************************/

    if (row >= 0 && row < rows) {
        for (int j = 0; j < cols; ++j) {
            cout << data[row][j] << " ";
        }
        cout << endl;
    }
}

void Matrix::printColumn(int col){

    /*********************************************
    This method outputs a specific column of the 2D array to the console.

    @return void : does not return a value

    @exception na : na
    *********************************************/

    if (col >= 0 && col < cols) {
        for (int i = 0; i < rows; ++i) {
            cout << data[i][col] << " ";
        }
       cout << endl;
    }
}

int Matrix::rowSum(int row) {

    /*********************************************
    This method calculates the sum of elements in a specific row of the matrix.

    @param row : the row index for which the sum is calculated

    @return int : the sum of elements in the specified row
    *********************************************/

    int sum = 0;

    if (row >= 0 && row < rows) {
        for (int j = 0; j < cols; ++j) {
            sum += data[row][j];
        }
    }

    return sum;
}

float Matrix::rowAverage(int row)  {

    /*********************************************
    This method calculates the average of elements in a specific row of the matrix.

    @param row : the row index for which the average is calculated

    @return float : the average of elements in the specified row

    @exception na : na
    *********************************************/

    return static_cast<float >(rowSum(row)) / cols;
}

void Matrix::sortMatrix() {

    /*********************************************
    This method sorts each row of the matrix.

    @return void : does not return a value

    @exception na : na
    *********************************************/
    for (int i = 0; i < rows; ++i) {
        std::sort(data[i], data[i] + cols);
    }

    sorted = true;
}

int Matrix::min() {

    /*********************************************
    This method finds the minimum value in the entire matrix.

    @return int : the minimum value found in the matrix

    @exception na : na
    *********************************************/

    int minValue = data[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (data[i][j] < minValue) {
                minValue = data[i][j];
            }
        }
    }

    return minValue;
}

int Matrix::max() {

    /*********************************************
    This method finds the maximum value in the entire matrix.

    @return int : the maximum value found in the matrix

    @exception na : na
    *********************************************/

    int maxValue = data[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (data[i][j] > maxValue) {
                maxValue = data[i][j];
            }
        }
    }

    return maxValue;
}

void Matrix::rotateMatrix() {

    /*********************************************
    This method rotates the matrix by swapping its rows and columns.
    It sets the sorted status as false.

    @return void

    @exception na : na
    *********************************************/

    int **newArray = new int*[cols];
    for (int i = 0; i < cols; ++i) {
        newArray[i] = new int[rows];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            newArray[j][i] = data[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        delete[] data[i];
    }
    delete[] data;

    int temp = rows;
    rows = cols;
    cols = temp;

    data = newArray;

    sorted = false;
}

bool Matrix::findValue(int value)  {

    /*********************************************
    This method searches for a given value in the Matrix.
    If the Matrix is sorted, it uses binary search, else it performs a linear search.

    @param value : the value to search for in the Matrix

    @return bool : true if the value is found, otherwise false

    @exception na : na
    *********************************************/

    bool valueFound = false;

    for (int i = 0; i < rows; ++i) {
        if (sorted) {
            if (std::binary_search(data[i], data[i] + cols, value)) {
                valueFound = true;
            }
        } else {
            for (int j = 0; j < cols; ++j) {
                if (data[i][j] == value) {
                    valueFound = true;
                }
            }
        }
    }

    return valueFound;
}

void Matrix::setElement(int row, int col, int value) {

    /*********************************************
    This method sets the value of a specific element in the matrix.

    @param row : the row index of the element to set
    @param col : the column index of the element to set
    @param value : the value to set at the specified element

    @return void : does not return a value

    @exception na : na
    *********************************************/

    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        data[row][col] = value;
        sorted = false;
    }
}

void Matrix::setMatrix(int rows, int cols, int initValue) {

    /*********************************************
    This method sets the matrix to the specified dimensions
    and initializes all elements to the given value. Marks
    the matrix as unsorted.

    @param rows : the number of rows in the matrix
    @param cols : the number of columns in the matrix
    @param initValue : the value to set each element of the matrix (default is 0)

    @return void : na

    @exception na : na
    *********************************************/

    this->rows = rows;
    this->cols = cols;

    data = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        data[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            data[i][j] = initValue;
        }
    }

    sorted = false;
}

bool Matrix::getSorted() {

    /*********************************************
    This getter method returns the sorted status of the array.

    @return bool : true if the array is sorted, otherwise false

    @exception na : na
    *********************************************/

    return sorted;
}

bool Matrix::validInteger(char* str) {

    /*********************************************
     This method checks if the given string represents a valid integer.

    @param str : the string to be processed

    @return bool : true if the string a valid, otherwise false

    @exception na : na
    *********************************************/

    bool valid_integer = true;

    if (str == nullptr || str[0] == '\0') {
        valid_integer = false;
    } else {

        int length = strlen(str);
        int check_index = 0;

        if (str[0] == '-') {
            check_index = 1;
        }

        for (size_t i = check_index; i < length; ++i) {
            if (!isdigit(str[i])) {
                valid_integer = false;
            }
        }
    }

    return valid_integer;
}