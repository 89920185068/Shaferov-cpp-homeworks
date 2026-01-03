#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	char symbol;
	
	cout << "Введите символ: ";
	cin >> symbol;
	
	cout << "Символ: " << symbol << "\n";
	
	int codeOfSymbol = symbol;
	
	cout << "Код: " << codeOfSymbol << endl;
	
	codeOfSymbol += 1;
	
	cout << "Код следующего символа: " << codeOfSymbol << endl;
	
	char nextSymbol = codeOfSymbol;
	
	cout << "Следующий символ: " << nextSymbol;
	
	return 0;
}
