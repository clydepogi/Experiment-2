#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    float NUMBER;
    int i;

    cout << "Enter a number" << endl;
    cin >> NUMBER;

    for (float i = 1; i <= 10; ++i) {
        cout << NUMBER << " * " << i << " = " << NUMBER * i << endl;
    }
    _getch();
    return 0;
}
