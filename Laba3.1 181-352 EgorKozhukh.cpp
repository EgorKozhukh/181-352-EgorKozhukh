
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

	// ��� ��������� ������ ������ �������
	// ����� �� �� ��� �������� ��� ������ ��������� �� ���� ������ ����� �������� 4/8 ����
	std::cout << "int pointer size = " << sizeof(ptr_int) << std::endl;
	std::cout << "double pointer size = " << sizeof(ptr_dbl) << std::endl;
	std::cout << "char pointer size = " << sizeof(char*) << std::endl;
	std::cout << "long long pointer size = " << sizeof(long long *) << std::endl;
	std::cout << "bool pointer size = " << sizeof(bool *) << std::endl;
	
	// � ������ ��������� �� �64 ������ ��������� ����� 8 ���� (64 ��������� ���������)
	std::cout << "ptr_int = " << ptr_int << std::endl;
	std::cout << "ptr_dbl = " << ptr_dbl << std::endl;

	std::cout << std::endl << "ptr_int = 0x" << std::hex << ptr_int << std::endl;
	// std::hex �������� ����������� ����� ����� �� 16-������ �������. ���� �� ����� �������� ������ ������� ��������� �������� ������� ��� ����� ����� ���������� � 16- ������ ������� 
	std::cout << "ptr_ch =0x" << ptr_dbl << std::endl;

	system("pause");
	return 0;
}