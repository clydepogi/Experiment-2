#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    int NUMBER=0, FIRST=2, SECOND=3, NEXTNUMBER;
    cout << "The next 20 numbers of the Fibonacci sequence after 0 and 1 is" << endl;
    NUMBER=20;
    
    for(int x=0;x<NUMBER;x++)
    {
    	cout<<FIRST<<",";
    	NEXTNUMBER=FIRST+SECOND;
    	FIRST=SECOND;
    	SECOND=NEXTNUMBER;
	}
return 0;
}
