#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()

{
	float hours, paymentA, paymentB;
	int a;
	
	cout << "Please state which package you are using" << endl;
	cout << "1 for A, 2 for B, 3 for C" << endl;
	cin >> a;
	cout << "state your usage in hours" << endl;
	cin >> hours;
	
	paymentA = ( hours * 20 ) + 995;
	paymentB = ( hours * 10 ) + 1495;
	
		if (a == 1)
		cout << paymentA << " / " << "month" << endl;
		else if (a==2)
		cout << paymentB << " / " << "month" << endl;
		else if (a==3)
		cout << "1995/month, no additional fees for extra hours" << endl;
		else
		cout << "Invalid" << endl;
		
	
	
	_getch ();
	return 0;
}
