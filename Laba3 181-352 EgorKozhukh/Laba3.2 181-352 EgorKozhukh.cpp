#include <iostream>
#include <string>
#include "conio.h"
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
//#include <iostream> //Подключаем библиотеку, обрабатывающую
//стандартные потоки ввода/вывода
//#include "conio.h" //Библиотека содержащит функцию getch

const int ABCSize = 33; //Размер алфавита

using namespace std;

const char low_ch[] = { 'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и', 'й', 'к',
'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц','ч', 'ш', 'щ', 'ъ', 'ы', 'ь','э' ,'ю' ,'я' }; //Массив
																		//строчных букв, которые шифруются также строчными
const char high_ch[] = { 'А', 'Б', 'В', 'Г', 'Д', 'Е', 'Ё', 'Ж', 'З', 'И', 'Й', 'К',
'Л', 'М', 'Н', 'О', 'П', 'Р', 'С', 'Т', 'У', 'Ф', 'Х', 'Ц', 'Ч', 'Ш', 'Щ', 'Ъ', 'Ы', 'Ь','Э' ,'Ю' ,'Я' }; //Массив
																		//заглавных букв, которые шифруются также заглавными
std::string cipher(const std::string &input_s, const int shift)
{ //Функция осуществляет сдвиг строки по алфавиту на указанную величину
	bool Ok; //Был ли символ определен как буква алфавита и затем зашифрован
	std::string output_s(""); //Зашифрованная строка, вначале инициализируется
							  //пустой строкой
	for (unsigned i = 0; i < input_s.length(); i++)

	{ //Для всех символов шифруемой строки
		Ok = false; //Вначале сбрасываем значение флага
		for (int j = 0; j < ABCSize; j++)
		{ //Перебираем все буквы алфавита на поиск соответствия
			if (input_s[i] == low_ch[j]) //Если символ оказался строчной буквой алфавита
			
			{
				j += shift; //Сдвигаем букву по алфавиту на указанное значение
				while (j >= ABCSize) j -= ABCSize; //Если значение вышло за диапазон,
				while (j < 0) j += ABCSize; //корректируем его
				output_s += low_ch[j]; //Добавляем полученный символ в конец
									   //зашифрованной строки
				Ok = true; //Символ был благополучно зашифрован и добавлен в строку
				break; //Перебор для данного символа можно закончить
			}

			else if (input_s[i] == high_ch[j]) //То же самое, если символ оказался
											   //заглавной буквой алфавита
			{
				j += shift;
				if (j >= ABCSize) j -= ABCSize;
				else if (j < 0) j += ABCSize;
				output_s += high_ch[j];
				Ok = true;
				break;
			}

		}
		if (!Ok) output_s += input_s[i]; //Если символ не является буквой алфавита,
										 //записываем его без изменений
	}
	return output_s; //По окончании возвращаем получившуюся строку
}

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int bukvu = 20;

	std::string s; //Шифруемая/дешифруемая строка



	int shift;//Величина сдвига
	
			
				std::cout << "\nInput shift: ";
				std::cin >> shift;
				std::cout << "Input string to cipher: ";
				while (std::cin >> s) //Шифруем одним и тем же сдвигом по одному слову
				{
					std::cout << cipher(s, shift) << ' ';
					if (std::cin.get() == '\n') break; //Заканчиваем по нажатию Enter
				}
		
				system("pause");
}