
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int mas[10] = { 232,231,2712,732,920,1,2,6,4 };
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += mas[i];

    }
    cout << "Среднее арифметическое равно " << sum / 10 << endl; 
    
    return 0;

}

