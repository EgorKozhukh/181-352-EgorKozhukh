#include <iostream>
#include <stdlib.h>

using namespace std;
template <typename T>
std::size_t f(T x)
{
	return sizeof(x);
}

int main()
{

	std::cout << "\\a" << std::endl;
	std::cout << "\\b" << std::endl;
	std::cout << "\\f" << std::endl;
	std::cout << "\\n" << std::endl;
	std::cout << "\\r" << std::endl;
	std::cout << "\\t" << std::endl;
	std::cout << "\\v" << std::endl;
	std::cout << "\\'" << std::endl;
	std::cout << "\\\"" << std::endl;
	std::cout << "\\\\" << std::endl;
	std::cout << "\\?" << std::endl;
	std::cout << "\\ ooo" << std::endl;
	std::cout << "\\x hh" << std::endl;
	std::cout << "\\x hhhh" << std::endl;

	system("pause");
	return 0;
}