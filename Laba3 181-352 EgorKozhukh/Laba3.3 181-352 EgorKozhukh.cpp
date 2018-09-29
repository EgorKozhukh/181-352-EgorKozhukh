
#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
	int *arr; // указатель для выделения памяти под массив
	int size; // размер массива

	cout << "n = "; // Ввод количества элементов массива
	cin >> size;

	if (size <= 0) {
		cerr << "Invalid size" << endl;
		return 1;
	}

	arr = new int[size]; // выделение памяти под массив

	for (int i = 0; i < size; i++) // заполнение массива
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	int temp = 0; // временная переменная для обмена элементов местами

	for (int i = 0; i < size; i++)

	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) // Вывод отсортированного массива на экран
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr; // освобождение памяти;

	system("pause");

	return 0;
}