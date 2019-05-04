#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
int main()
{
	float X, Y, Z;
	
	cout << "Enter first number" << endl;
	cin >> X;
	
	cout << "Enter second number"<< endl;
	cin >> Y;
	
	cout << "Enter third number" << endl;
	cin >> Z;
	
	if (X>Z && X>Y)
	cout << X << " is the biggest number" << endl;
	else if (Y>Z && Y>Z)
	cout << Y << " is the biggest number" << endl;
	else if (Z>X && Z>Y)
	cout << Z << " is the biggest number" << endl;
	else if (X==Y && Y==Z && X==Z)
	cout << "The numbers are equal value" << endl;
	else
	cout << "Repeat and make a correct statement" << endl;
	_getch();
	return 0;
}
