#include <iostream>
#include <string>
using namespace std;



void kalk(float a, float b)
{
	cout << "Сумма = " << a + b << endl;
	cout << "Разность = " << a - b << endl;
	cout << "Частное = " << a / b << endl;
	cout << "Произведение = " << a * b << endl;
}



void zad2(float q, float w, float e)
{
	int arr[] = { q,w,e };
	double sum = { 0.0 };
	double sred = { 0.0 };
	int count = 0;

	cout << "Четные эл-ты: ";
	for (size_t i = 0; i < size(arr); i++)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << "; ";

	cout << "Нечетные эл-ты: ";
	for (size_t i = 0; i < size(arr); i++)
	{
		if (arr[i] % 2 != 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;

	cout << "Положительные эл-ты: ";
	for (size_t i = 0; i < size(arr); i++)
	{
		if (arr[i] >= 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << "; ";

	cout << "Отрицательные эл-ты: ";
	for (size_t i = 0; i < size(arr); i++)
	{
		if (arr[i] < 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;


	for (size_t i = 0; i < size(arr); i++)
	{
		sum += arr[i];
		count++;
	}
	sred = sum / count;
	cout << "Ср знач = " << sred << endl;
}



void minmax(float z, float x, float c)
{
	int arr1[] = { z,x,c };
	float _min = arr1[0];
	float _max = arr1[0];
	for (size_t i = 0; i < size(arr1); i++)
	{
		if (_min > arr1[i])
		{
			_min = arr1[i];
		}
		else if (_max < arr1[i])
		{
			_max = arr1[i];
		}
	}
	cout << "Max = " << _max << endl;
	cout << "Min = " << _min << endl;
}



int main()
{
	setlocale(LC_ALL, "Russian");
	float _min, _max;
	float z, x, c;
	float a, b;
	float q, w, e;
	cout << "Введите 2 числа: " << endl;
	cin >> a >> b;
	kalk(a, b);
	cout << "Введите 3 числа: " << endl;
	cin >> q >> w >> e;
	zad2(q, w, e);
	cout << "Введите 3 числа: " << endl;
	cin >> z >> x >> c;
	minmax(z, x, c);
}