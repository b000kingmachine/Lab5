#include <iostream>
using namespace std; 
int main() {
	setlocale(0, "");
	int humber;
	int sum = 0;
	cout << "Введите целое число: ";
	cin >> humber;

	while (humber !=0 ) 
	{
		sum += humber % 10;
		humber /= 10;
	}

	cout << "Число : " << sum << endl;
	return 0;
}