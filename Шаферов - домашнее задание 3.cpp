#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	
	cout << "Введите первое число: ";
	cin >> a;
	
	cout << "Введите второе число: ";
	cin >> b;
	
	int ostatok = a % b;
	
	cout << "Остаток от деления " << a << " на " << b << " равен " << ostatok;
	
	return 0;
}
