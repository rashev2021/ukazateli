#include <Windows.h>
#include <iostream>

using namespace std;

void exercise1(int* array)
{
	//Задание 1
	//Используя два указателя на массив целых чисел, скопировать один массив в другой.
	//Использовать в программе арифметику указателей для продвижения по массиву, а также
	//оператор разыменования.
	
	cout << endl << " Задание 1" << endl;

	int* array1 = new int[7]{};

	cout << endl << " " << " array1 = ";

	for (int i = 0; i < 7; i++) {

		cout << "[" << *(array + i) << "]" << " ";
	}

	cout << endl << " " << " array2 = ";

	for (int i = 0; i < 7; i++) {

		cout << "[" << *(array1 + i) << "]" << " ";
	}
	
	cout << endl << endl << " Копирование массива array1 в array2" << endl;

	cout << endl << " " << " array2 = ";

	for (int i = 0; i < 7; i++) {

		*(array1 + i) = *(array + i);
		cout << "[" << *(array1 + i) << "]" << " ";
		
	}
	cout << endl;
	
}
void exercise2(int* array)
{

	//Задание 2
	//Используя указатель на массив целых чисел, изменить порядок следования элементов массива
	//на противоположный

	cout << endl << " Задание 2" << endl << endl;

	int* array1 = new int[7]{};

	for (int i = 0; i < 7; i++) {

		cout << " " << "[" << *(array + i) << "]" << " ";
	}
	cout << endl << endl;
	cout << " Обратное отображение массива: " << endl << endl;

	for (int i = 0, j = 6; i < 7; i++, j--) {

		*(array1 + i) = *(array + j);
		cout << " " << "[" << *(array1 + i) << "]" << " ";
	}
	cout << endl;

}
void exercise3(int* array)
{

	//Задание 3
	//Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы
	//во втором массиве элементы находились в обратном порядке.
	//Использовать в программе арифметику указателей для продвижения по массиву, а также
	//оператор разыменования.

	cout << endl << " Задание 3" << endl << endl;

	int* array1 = new int[7]{};

	cout << endl << " " << " array1 = ";
	for (int i = 0; i < 7; i++) {

		cout << "[" << *(array + i) << "]" << " ";
	}
	cout << endl;

	cout << endl << " " << " array2 = ";
	for (int i = 0, j = 6; i < 7; i++, j--) {

		*(array1 + i) = *(array + j);
		cout << "[" << *(array1 + i) << "]" << " ";
	}
	cout << endl;
}
void exercise4(int* a, int* b)
{
	//Задание 4
	//Используя указатели и оператор разыменования, определить наибольшее из двух чисел.

	if (*a > *b) {
		cout << " число " << *a << " больше " << *b << endl;
	}
	else if (*a == *b)
	{
		cout << " Чиcла равны";
	}
	else {
		cout << " число " << *b << " больше " << *a << endl;
	}

}
void exercise5()
{
	//Задание 5
	//Используя указатели и оператор разыменования, определить знак числа, введённого с
	//клавиатуры.

	cout << endl << " Задание 5" << endl << endl;


	int num = 0;
	int* pnum = &num;
	cout << " Введите число: ";
	cin >> *pnum;

	if (*pnum > 0) cout << " введенное число больше нуля";
	else if (*pnum < 0) cout << " введенное число меньше нуля";
	else if (*pnum == 0) cout << " введенное число равно нулю";
	cout << endl;

}
void exercise6()
{
	//Задание 6
  //Используя указатели и оператор разыменования, обменять местами значения двух переменных
  
	cout << endl << " Задание 6" << endl << endl; 

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
  
}
void exercise7()
{

	//Задание 7
	//Написать примитивный калькулятор, пользуясь только указателями.

	cout << endl << " Задание 7" << endl << endl;

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
}
void exercise8(int* array)
{
	//Задание 8
   //Используя указатель на массив целых чисел, посчитать сумму элементов массива. Использовать
   //в программе арифметику указателей для продвижения по массиву, а также оператор
   //разыменования.

	cout << endl << " Задание 8" << endl << endl;

	   int sum = 0;
	 
	   cout << " " << " array1 = ";
	   for (int i = 0; i < 7; i++) {

		   sum += *(array + i);
		   cout << "[" << *(array + i) << "]" << " ";

	   }
	   cout << endl << "  Сумма элементов равна: " <<  sum << endl;

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Тема: Указатели.

	int array[7]{ 3,5,7,1,9,0,6 };
	int* parray = array;

	int exercise;
	int a;
	int* pa = &a;
	int b;
	int* pb = &b;

	cout << " Ведите номер задания от 1 до 8: ";
	cin >> exercise;

	switch (exercise)
	{
	case 1:
		exercise1(parray);
		break;
	case 2:
		exercise2(parray);
		break;
	case 3:
		exercise3(parray);
		break;
	case 4:
		cout << endl << " Задание 4" << endl << endl;
		cout << " Введите первое число: ";
		cin >> *pa;
		cout << " Введите второе число: ";
		cin >> *pb;
		exercise4(pa, pb);
		break;
	case 5:
		exercise5();
		break;
	case 6:
		exercise6();
		break;
	case 7:
		exercise7();
		break;
	case 8:
		exercise8(parray);
		break;
	default:
		cout << " Неверное значение. Попробуйте снова";
		break;
	}
}

	


	

	
