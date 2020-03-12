#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int Nilai[] = {45, 23, 50, 8, 12, 10, 15};
	int *Ptr_nilai, i;
	Ptr_nilai = Nilai;
	
	cout<<"Nilai Ptr_nilai    = " << Ptr_nilai << endl;
	cout<<"Alamat Array Nilai = " << Ptr_nilai << endl;
	cout<<"Nilai yang ada pada alamat " << Ptr_nilai << " adalah " << *Ptr_nilai << endl;
	cout<<"Element array index pertama : "<< Nilai[0] << endl << endl;
	
	cout<<"Element array (dengan array) : ";
	for(i=0;i<7;i++){
		cout << Nilai[i] << ", ";
	}
	cout << endl;
	cout<<"Element Array (dengan pointer) : ";
	for(i=0;i<7;i++){
		cout << *(Nilai+i) << ", ";
	}
	cout << endl;
	getch();
}
