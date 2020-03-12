#include <iostream>
#include <conio.h>
using namespace std;

int Maks(int a, int b, int c);

main(){
	int a=8, b=12, c=-5;
	
	cout << "Nilai a : " << a << endl;
	cout << "Nilai b : " << b << endl;
	cout << "Nilai c : " << c << endl;
	cout << "Nilai Terbesar : " << Maks(a,b,c);
	getch();
}

int Maks(int x, int y, int z){
	int Big_data = x;
	if(y > Big_data){
		Big_data = y;
	}
	if(z > Big_data){
		Big_data = z;
	}
	return(Big_data);
}
