
#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
	int *arr; // указатель для выделения памяти под массив
	int size; // размер массива

	cout << "n = "; // Ввод количества элементов массива
	cin >> size;

	if (size <= 0)
	{
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

	for (int i = 0; i <= size / 2 ; i++)
	{
		int j = 0;
		int k = size - 1;
		while (j <= k+1)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j = j + 1;//Двигаем позицию на шаг вперед
					  //Проходим с конца
			if (arr[k-1] > arr[k])
			{
				temp = arr[k - 1];
				arr[k - 1] = arr[k];
				arr[k] = temp;
			}
			k = k - 1;//Двигаем позицию на шаг назад
		}
	}
	
	for (int i = 0; i < size; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr; // освобождение памяти;

	system("pause");

	return 0;
}