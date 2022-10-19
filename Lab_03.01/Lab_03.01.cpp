// Lab_03_1.cpp
// Чикеречко Андрій
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 19

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = 2 * x - 13.5 ;
	// спосіб 1: розгалуження в скороченій формі
	if (x < -1)
		B = (sin(x)) / 1 + cos(pow(x, 2));
	if (-1 <= x && x <= 1)
		B = cos(pow(x, 2)) * sin(pow(x, 2)) - 1;
	if (x > 1)
		B = log10 (x + 0.4);
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < -1)
		B = (sin(x)) / 1 + cos(pow(x, 2));
	else
		if (x > 1)
			B = log10(x + 0.4);
		else
			B = cos(pow(x, 2)) * sin(pow(x, 2)) - 1;
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}