#include <Windows.h>
#include <iostream>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Тема: Указатели.

	//Задание 1
	//Используя два указателя на массив целых чисел, скопировать один массив в другой.
	//Использовать в программе арифметику указателей для продвижения по массиву, а также
	//оператор разыменования.
	/*
	int array1[7]{ 3,5,7,1,9,0,6 };
	int array2[7]{};

	int* parray1 = array1;
	int* parray2 = array2;

	cout << endl << " " << " array1 = ";
	for (int i = 0; i < 7; i++) {

		cout << "[" << *(parray1 + i) << "]" << " ";
	}
	cout << endl;
	cout << endl << " " << " array2 = ";
	for (int i = 0; i < 7; i++) {

		cout << "[" << *(parray2 + i) << "]" << " ";
	}
	cout << endl;
	cout << endl << " Копирование массива array1 в array2" << endl << endl;
	
	parray2 = parray1;
	
	cout << endl << " " << " array2 = ";
	for (int i = 0; i < 7; i++) {
		
		cout << "[" << * (parray2 + i) << "]" << " ";
	}
	cout << endl;
	*/
	
	//Задание 2
	//Используя указатель на массив целых чисел, изменить порядок следования элементов массива
	//на противоположный
	/*
	
	int array[7]{ 3,5,7,1,9,0,6 };
	int* parray = array;

	for (int i = 0; i < 7; i++) {

		cout << "[" << *(parray + i) << "]" << " ";
	}
	cout << endl << endl;
	cout << "Обратное отображение массива " << endl << endl;

	for (int i = 6; i >= 0; i--) {

		cout << "[" << *(parray + i) << "]" << " ";
	}
	cout << endl;
	*/

	//Задание 3
	//Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы
	//во втором массиве элементы находились в обратном порядке.
	//Использовать в программе арифметику указателей для продвижения по массиву, а также
	//оператор разыменования.
	/*
	
	int array1[7]{ 3,5,7,1,9,0,6 };
	int array2[7]{};

	int* parray1 = array1;
	int* parray2 = array2;

	cout << endl << " " << " array1 = ";
	for (int i = 0; i < 7; i++) {

		cout << "[" << *(parray1 + i) << "]" << " ";
	}
	cout << endl;
	parray2 = parray1;

	cout << endl << " " << " array2 = ";
	for (int i = 6; i >= 0; i--) {

		cout << "[" << *(parray2 + i) << "]" << " ";
	}
	cout << endl;
	*/

	//Задание 4
	//Используя указатели и оператор разыменования, определить наибольшее из двух чисел.
	/*
	
	int a = 5;
	int b = 8;
	int max = 0;
	
	int* pa = &a;
	int* pb = &b;
	int* pm = &max;
	

	if (*pa > *pb) {
		*pm = *pa;
		cout << " число " << *pm << " больше " << *pb << endl;
	}
	else {
		*pm = *pb;
		cout << " число " << *pm << " больше " << *pa << endl;
	}
	*/

	//Задание 5
	//Используя указатели и оператор разыменования, определить знак числа, введённого с
	//клавиатуры.
	/*
	
	int num = 0;
	int* pnum = &num;
	cout << " Веддите число: ";
	cin >> *pnum;

	if (*pnum > 0) cout << " введенное число больше нуля";
	else if (*pnum < 0) cout << " введенное число меньше нуля";
	else if (*pnum == 0) cout << " введенное число равно нулю";
	cout << endl;
	*/

    //Задание 6
	//Используя указатели и оператор разыменования, обменять местами значения двух переменных
	/*
	
	int a = 8;
	int b = 5;
	int temp = 0;

	int* pa = &a;
	int* pb = &b;
	int* pt = &temp;

	cout << *pa << " " << * pb << endl;

	*pt = *pa;
	*pa = *pb;
	*pb = *pt;

	cout << *pa << " " << * pb << endl;
	*/

    //Задание 7
    //Написать примитивный калькулятор, пользуясь только указателями.
	/*
	
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	char enter = '0';

	int* pnum1 = &num1;
	int* pnum2 = &num2;
	int* psum = &sum;

	do
	{

		cin >> *pnum1;
		cin >> enter;
		cin >> *pnum2;

		if (enter == '+') {
			*psum = *pnum1 + *pnum2;
			cout << " Результат равен: " << *psum << endl << endl;

		}
		if (enter == '-') {
			*psum = *pnum1 - *pnum2;
			cout << " Результат равен: " << *psum << endl << endl;

		}
		if (enter == '*') {
			*psum = *pnum1 * *pnum2;
			cout << " Результат равен: " << *psum << endl << endl;

		}
		if (enter == '/') {
			if (*pnum2 == 0) {
				cout << " На ноль делить нельзя!" << endl << endl;
				continue;
			}
			*psum = *pnum1 / *pnum2;
			cout << " Результат равен: " << *psum << endl << endl;

		}

	} while (true);
	*/

    //Задание 8
	//Используя указатель на массив целых чисел, посчитать сумму элементов массива. Использовать
	//в программе арифметику указателей для продвижения по массиву, а также оператор
	//разыменования.
	/*

	int array1[7]{ 3,5,7,1,9,0,6 };
	int sum = 0;
	int* psum = &sum;
	int* parray1 = array1;

	cout << endl << " " << " array1 = ";
	for (int i = 0; i < 7; i++) {

		*psum += *(parray1 + i);
		cout << "[" << *(parray1 + i) << "]" << " ";
		
	}
	cout << endl << "  Сумма элементов равна: " <<  * psum << endl;
	*/

}
