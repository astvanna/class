#include "matrix.h"
#include <iostream>

int main() {
	Matrix mat1;
	Matrix mat2(3, 4);
	Matrix mat3(2, 2);

	double counter = 1.0;
	for (size_t i = 0; i < mat2.getRows(); ++i) {
		for (size_t j = 0; j < mat2.getCols(); ++j) {
			mat2.set(i, j, counter++);
		}
	}

	mat3.set(0, 0, 27.0);
	mat3.set(0, 1, 42.0);
	mat3.set(1, 0, 91.0);
	mat3.set(1, 1, 4.0);

	std::cout << "Matrix 1:\n";
	mat1.print();
	std::cout << "\n";

	std::cout << "Matrix 2:\n";
	mat2.print();
	std::cout << "\n";

	std::cout << "Matrix 3:\n";
	mat3.print();
	std::cout << "\n";

	std::cout << "matrix2[1][2] = " << mat2.get(1, 2) << "\n";
	std::cout << "matrix3[0][1] = " << mat3.get(0, 1) << "\n";

	return 0;
}
