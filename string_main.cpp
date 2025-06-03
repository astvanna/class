#include "string.h"

int main() {
	String s1;
	s1.print();
	std::cout << "str1 length: " << s1.length() << "\n";

	String s2("Hello World!\n");
	s2.print();
	std::cout << "str2 length: " << s2.length() << "\n";

	const char* cstr = s2.c_str();
	std::cout << "C-string: " << cstr << "\n";

	return 0;
}
