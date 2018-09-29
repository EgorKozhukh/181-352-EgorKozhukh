
#include <iostream>
#include <string>
#include <stdlib.h>

int some_global_varible;

int main()
{
	int a;
	a = 321;
		double dbl = 10.005;

	int * ptr_int;
	ptr_int = &a;
	double * ptr_dbl = &dbl;

	// Все указатели всегда одного размера
	// Каким бы не был огромным тип данных указатель на него всегда будет занимать 4/8 байт
	std::cout << "int pointer size = " << sizeof(ptr_int) << std::endl;
	std::cout << "double pointer size = " << sizeof(ptr_dbl) << std::endl;
	std::cout << "char pointer size = " << sizeof(char*) << std::endl;
	std::cout << "long long pointer size = " << sizeof(long long *) << std::endl;
	std::cout << "bool pointer size = " << sizeof(bool *) << std::endl;
	
	// В случае написания на х64 размер указателя будет 8 байт (64 разрядная адресация)
	std::cout << "ptr_int = " << ptr_int << std::endl;
	std::cout << "ptr_dbl = " << ptr_dbl << std::endl;

	std::cout << std::endl << "ptr_int = 0x" << std::hex << ptr_int << std::endl;
	// std::hex включает отображение целых чисел по 16-ричной системе. Пока не будет включена другая система счисления подобным образом все числа будут печататься в 16- ричной системе 
	std::cout << "ptr_ch =0x" << ptr_dbl << std::endl;

	system("pause");
	return 0;
}