#ifndef STRING_H
#define STRING_H

#include <iostream>
#include <cstring>

class String {
private:
	char* data;
	size_t size;

	void allocate(const char* str) {
		size = strlen(str);
		data = new char[size + 1];
		strcpy(data, str);
	}

public:
	String() : data(nullptr), size(0) {
		data = new char[1];
		data[0] = '\0';
	}

	String(const char* str) : data(nullptr), size(0) {
		if (str) {
			allocate(str);
		} else {
			data = new char[1];
			data[0] = '\0';
		}
	}

	~String() {
		delete[] data;
	}

	size_t length() const {
		return size;
	}

	const char* c_str() const {
		return data;
	}

	void print() const {
		std::cout << data;
	}
};

#endif
