#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	double a;
	double b;
	double c;
	
	cout << "Введите первое число: ";
	cin >> a;
	
	cout << "Введите второе число: ";
	cin >> b;
	
	cout << "Введите третье число: ";
	cin >> c;
	
	double average = (a+b+c)/3;
	
	cout << "Среднее арифметическое трех введенных чисел: " << average;
	
	return 0;
}
