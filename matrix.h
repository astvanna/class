#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {
private:
	size_t m_rows;
	size_t m_cols;
	double** m_data;

	void allocateMemory() {
		m_data = new double*[m_rows];
		for (size_t i = 0; i < m_rows; ++i) {
			m_data[i] = new double[m_cols];
		}
	}

	void initializeWithDefault() {
		for (size_t i = 0; i < m_rows; ++i) {
			for (size_t j = 0; j < m_cols; ++j) {
				m_data[i][j] = 0.0;
			}
		}
	}

	void deallocateMemory() {
		if (m_data) {
			for (size_t i = 0; i < m_rows; ++i) {
				delete[] m_data[i];
			}
			delete[] m_data;
			m_data = nullptr;
		}
	}

public:
	Matrix() : m_rows(1), m_cols(1), m_data(nullptr) {
		allocateMemory();
		initializeWithDefault();
	}

	Matrix(size_t rows, size_t cols) : m_rows(1), m_cols(1), m_data(nullptr) {
		if (rows > 0) {
			m_rows = rows;
		}
		if (cols > 0) {
			m_cols = cols;
		}
		allocateMemory();
		initializeWithDefault();
	}

	~Matrix() {
		deallocateMemory();
	}

	size_t getRows() const { 
		return m_rows;
	}
	size_t getCols() const { 
		return m_cols;
	}

	void set(size_t row, size_t col, double value) {
		if (row < m_rows && col < m_cols) {
			m_data[row][col] = value;
		}
	}

	double get(size_t row, size_t col) const {
		if (row < m_rows && col < m_cols) {
			return m_data[row][col];
		}
		return 0;
	}

	void print() const {
		for (size_t i = 0; i < m_rows; ++i) {
			for (size_t j = 0; j < m_cols; ++j) {
				std::cout << m_data[i][j] << "  ";
			}
			std::cout << "\n";
		}
	}
};

#endif
