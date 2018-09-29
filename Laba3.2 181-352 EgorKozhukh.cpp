#include <iostream>
#include <string>
#include "conio.h"
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
//#include <iostream> //���������� ����������, ��������������
//����������� ������ �����/������
//#include "conio.h" //���������� ���������� ������� getch

const int ABCSize = 33; //������ ��������

using namespace std;

const char low_ch[] = { '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�',
'�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�','�', '�', '�', '�', '�', '�','�' ,'�' ,'�' }; //������
																		//�������� ����, ������� ��������� ����� ���������
const char high_ch[] = { '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�',
'�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�','�' ,'�' ,'�' }; //������
																		//��������� ����, ������� ��������� ����� ����������
std::string cipher(const std::string &input_s, const int shift)
{ //������� ������������ ����� ������ �� �������� �� ��������� ��������
	bool Ok; //��� �� ������ ��������� ��� ����� �������� � ����� ����������
	std::string output_s(""); //������������� ������, ������� ����������������
							  //������ �������
	for (unsigned i = 0; i < input_s.length(); i++)

	{ //��� ���� �������� ��������� ������
		Ok = false; //������� ���������� �������� �����
		for (int j = 0; j < ABCSize; j++)
		{ //���������� ��� ����� �������� �� ����� ������������
			if (input_s[i] == low_ch[j]) //���� ������ �������� �������� ������ ��������
			
			{
				j += shift; //�������� ����� �� �������� �� ��������� ��������
				while (j >= ABCSize) j -= ABCSize; //���� �������� ����� �� ��������,
				while (j < 0) j += ABCSize; //������������ ���
				output_s += low_ch[j]; //��������� ���������� ������ � �����
									   //������������� ������
				Ok = true; //������ ��� ������������ ���������� � �������� � ������
				break; //������� ��� ������� ������� ����� ���������
			}

			else if (input_s[i] == high_ch[j]) //�� �� �����, ���� ������ ��������
											   //��������� ������ ��������
			{
				j += shift;
				if (j >= ABCSize) j -= ABCSize;
				else if (j < 0) j += ABCSize;
				output_s += high_ch[j];
				Ok = true;
				break;
			}

		}
		if (!Ok) output_s += input_s[i]; //���� ������ �� �������� ������ ��������,
										 //���������� ��� ��� ���������
	}
	return output_s; //�� ��������� ���������� ������������ ������
}

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int bukvu = 20;

	std::string s; //���������/����������� ������



	int shift;//�������� ������
	
			
				std::cout << "\nInput shift: ";
				std::cin >> shift;
				std::cout << "Input string to cipher: ";
				while (std::cin >> s) //������� ����� � ��� �� ������� �� ������ �����
				{
					std::cout << cipher(s, shift) << ' ';
					if (std::cin.get() == '\n') break; //����������� �� ������� Enter
				}
		
				system("pause");
}