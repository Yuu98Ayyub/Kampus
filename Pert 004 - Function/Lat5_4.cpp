#include <iostream>
#include <conio.h>
using namespace std;

void Tukar(int *a, int *b);

main(){
	int a=8, b=-5;
	cout << "Nilai a dan b sebelum ditukar : " << a << " & " << b << endl;
	Tukar(&a, &b);
	cout << "Nilai a dan b setelah ditukar : " << a << " & " << b << endl;
	getch();
}

void Tukar(int *x, int *y){
	int z;
	z = *x;
	*x = *y;
	*y = z;
}
