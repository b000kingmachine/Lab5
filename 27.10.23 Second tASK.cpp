#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int n, i; 
	cout << "Введите число: " << endl;
	cin >> n;
	for (i = 0; n ; i++) {
		n /= 10;
	}
	cout << "Ваше число: " << i;
}

