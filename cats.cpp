#include <iostream>
#include <cstring>

class Cat {
private:
	int age;
	char* name;
	char* color;

public:
	Cat(int cat_age, const char* cat_name, const char* cat_color) : age(cat_age) {
		name = new char[strlen(cat_name) + 1];
		strcpy(name, cat_name);
		color = new char[strlen(cat_color) + 1];
		strcpy(color, cat_color);
	}

	~Cat() {
		delete[] name;
		delete[] color;
	}

	void print_cat() const {
		std::cout << name << " is " << age << " years old" << std::endl;
		std::cout << name << "'s fur color is " << color << std::endl;
	}
};

int main() {
	Cat fisul(3, "Fisulik", "Tabby with White");
	fisul.print_cat();

	Cat gayluk(1, "Gayluk", "Grey");
	gayluk.print_cat();

	Cat nvaz(3, "Nvaz", "Tabby");
	nvaz.print_cat();

	Cat pushok(2, "Pushok", "White with Tabby");
	pushok.print_cat();

	return 0;
}
