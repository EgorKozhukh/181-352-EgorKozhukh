
#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
	int *arr; // ��������� ��� ��������� ������ ��� ������
	int size; // ������ �������

	cout << "n = "; // ���� ���������� ��������� �������
	cin >> size;

	if (size <= 0) {
		cerr << "Invalid size" << endl;
		return 1;
	}

	arr = new int[size]; // ��������� ������ ��� ������

	for (int i = 0; i < size; i++) // ���������� �������
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	int temp = 0; // ��������� ���������� ��� ������ ��������� �������

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

	for (int i = 0; i < size; i++) // ����� ���������������� ������� �� �����
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr; // ������������ ������;

	system("pause");

	return 0;
}