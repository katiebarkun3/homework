//Баркун Екатерина
#include <iostream>
#include <ctime>
#include <iomanip>
#include "hw081221.h"
using namespace std;

fill_randmas(int* mas, int n);
print_mas(int* mas, int n);
sum_nechot(int* mas, int n);
fill_randmas2(int* mas, int n);
print_mas(int* mas, int n);
otr_pr(int* mas, int n);
fill_rand3(int** mas, int n);
print_matrix(int** mas, int n, int m);
sr_geom(int** mas, int n);
fill_rand(int** mas, int n, int m);
col_pos(int** mas, int n, int m);

	
int main() {
	setlocale(LC_ALL, "rus");
	int n = 5;
	int m = 5;
	int* mas1;
	mas1 = new int [n];
	int** mas;
	mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m]; 
	}


	//1 задание 
	/*Задан массив, содержащий 20 целых чисел в диапазоне от - 20 до 20. 
	Найти сумму элементов этого массива с нечетными номерами.*/
	fill_randmas(mas1, n);
	print_mas(mas1, n);
	cout << sum_nechot(mas1, n) << endl; 


	//2 задание 
	/*Задан массив, который содержит 15 целых чисел в диапазоне от - 60 до 60.
	Найти произведение отрицательных элементов массива.*/
	/*fill_randmas2(mas1, n);
	print_mas(mas1, n);
	cout << otr_pr(mas1, n) << endl;*/


	// 3 задание 
	/*Дана матрица из n строк и n столбцов.
	Заполнить матрицу случайными числами из диапазона от 0 до 30.
	Найти среднее геометрическое элементов на главной диагонали*/
	/*fill_rand3(mas, n);
	print_matrix(mas, n,n);
	cout << sr_geom(mas, n) << endl; */


	//4 заданиe 
	/*Дана матрица из n строк и m столбцов,
	которая содержит целые числа в диапазоне от -40 до 40. 
	Ввести с клавиатуры номер столбца и подсчитать,
	сколько в этом столбце положительных чисел.*/
	/*fill_rand(mas, n, m);
	 print_matrix(mas, n, m);
	 cout << col_pos(mas, n, m) << endl;*/
		  
}
