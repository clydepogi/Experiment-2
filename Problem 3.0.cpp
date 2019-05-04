#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int X, Y;
	float V;
	
	cout << "Enter value for X" << endl;
	cin >> X;
	
	cout << "Enter value for Y" << endl;
	cin >> Y;

	switch(X)
	{
		case 1:
			if (X==1 && 1<Y<5)
			V = X * Y * 2.5;
			else if (X==1 && Y>=5)
			V = X + Y/2.5;
			break;
		
		case 2:
			if (X==2 && Y<=5)
			V = abs((X - Y) / 2.5);
			else if (X==2 && Y>5)
			V = X - sqrt(Y + 2.5);
			break;
			
		default:
			V = X + Y + 2.5;
			break;
					
		}
		cout << setw(10);
		cout << fixed;
		cout << setprecision(2);
		cout << V;
		    _getch();
			return 0;
		}
