#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    int A;
    int B;

    cout << "How many rows?";
    cin >> A;
    cout << "How many columns?";
    cin >> B;
    
    for (int row = 1; row <= A; ++row) 
    {
    for (int col = 1; col <= B; ++col) 
    
     cout << "*" << endl;
        }
	
    
    _getch();
    return 0;
    
}
