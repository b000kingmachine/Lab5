#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int mas[10] = { 231,456,678,891,567,123,456,7,1 };
	int sum = 0; 
	for (int i = 0; i < 10; i++) {
		sum += mas[i]; 
	}
	cout << "Сумма элементов массива равна : " << sum << endl;
	return 0;
}