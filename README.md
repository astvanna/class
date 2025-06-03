# class

matrix.h matrix_main.cpp: Implement a Matrix Class in C++
Objective
Your task is to implement a Matrix class in C++.
Requirements
Header File: Matrix.h
Define the Matrix class with the following:
Member Variables:
size_t rows_: Number of rows in the matrix.
size_t cols_: Number of columns in the matrix.
double** data_: Pointer to a dynamically allocated 2D array to store matrix data.
Constructors:
Default constructor that initializes the matrix with default values
Parameterized constructor that initializes the matrix with given rows and columns.
Destructor:
Properly deallocates memory used by the matrix.
Member Functions:
void set(size_t row, size_t col, double value): Sets the value at a specific position.
double get(size_t row, size_t col) const: Gets the value at a specific position with bounds checking.
size_t getRows() const: Returns the number of rows.
size_t getCols() const: Returns the number of columns.
void print() const: Prints the matrix to the console.



string.h string_main.cpp: Implement a Custom String Class in C++
Objective:
Your task is to implement a custom String class in C++ that mimics the behavior of the standard std::string class. This task will help you understand dynamic memory management and the implementation of special member functions.
Specifications:
Class Definition:
Define a class named String with private members:
char* data: Pointer to a dynamically allocated character array.
size_t size: The length of the string excluding the null terminator.
Constructors:
Default Constructor: Initialize an empty string.
Parameterized Constructor: Initialize the string with a const char* (C-style string).
Destructor:
Release the memory allocated for the character array.
Member Functions:
Length: Implement a method to return the length of the string (excluding the null terminator).
C-String Access: Implement a method to return a const char* representing the string.
Print: Implement a method to print the string.

