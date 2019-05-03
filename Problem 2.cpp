#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	float bill, unpaidBal, gallon, penaltyBill;
	
	cout << "Enter your water usage in gallons"  << endl;
	cin >> gallon;
	bill = (gallon * 1.10) + 35;
	cout << "Unpaid balance ( if there is ) , else put 0" << endl;
	cin >> unpaidBal;
	penaltyBill = bill + 20;
	if (unpaidBal>0)
	cout << penaltyBill << "Php to be paid" << endl;
	else if (unpaidBal==0)
	cout << bill << "Php to be paid" << endl;
	else
	cout << "Invalid " << endl;
	
	
	
	
	
	
	_getch ();
	return 0;
	
}
