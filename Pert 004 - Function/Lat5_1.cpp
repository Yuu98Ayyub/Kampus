#include <iostream>
#include <conio.h>
using namespace std;

void Tukar(int, int);
main(){
	int a=8, b=-5;
	cout<<"Nilai a dan b sebelumnya : " << a << " & " << b << endl;
	Tukar(a,b);
	getch();
}

void Tukar(int x, int y){
	int z;
	z = x;
	x = y;
	y = z;
	cout<<"Nilai a dan b setelah ditukar : " << x << " & " << y;
}
