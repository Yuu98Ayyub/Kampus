#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int x=8;
	int *xPtr1, **xPtr2;
	xPtr1 = &x;
	xPtr2 = &xPtr1;
	
	cout<<"Nilai x = " << x << endl;
	cout<<"Nilai x = " << *xPtr1 << endl;
	cout<<"Nilai x = " << *xPtr2 << endl;
	getch();
}
