#include <iostream>
#include <vector>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	std::cout << "int: " << &a << "  ";
	std::cout << sizeof(a) << "\n";

	short b;
	std::cout << "short: " << &b << "  ";
	std::cout << sizeof(b) << "\n";

	long c;
	std::cout << "long: " << &c << "  ";
	std::cout << sizeof(c) << "\n";

	long long d;
	std::cout << "long long: " << &d << "  ";
	std::cout << sizeof(d) << "\n";

	float e;
	std::cout << "float: " << &e << "  ";
	std::cout << sizeof(e) << "\n";

	double f;
	std::cout << "double: " << &f << "  ";
	std::cout << sizeof(f) << "\n";

	long double g;
	std::cout << "long double: " << &g << "  ";
	std::cout << sizeof(g) << "\n";

	bool h;
	std::cout << "bool: " << &h << "  ";
	std::cout << sizeof(h) << "\n";

	return 0;
}

