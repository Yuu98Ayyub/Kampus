#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int nilai[10];
	int i, jumlah = 0;
	float rata_rata;
	
	// Read and count
	for(i=0; i<10; i++){
		cout<<"Input Elemen ke-"<<i<<" = "<<endl; cin>>nilai[i];
		jumlah+=nilai[i];
	}
	rata_rata=(float)jumlah/10;
	
	// Print element array
	cout<<"Deretan Bilangan = ";
	for(i=0; i<10; i++){
		cout << nilai[i]" ";
	}
	
	// Print count
	cout<<"Jumlah Bilangan ="<<jumlah<<endl;
	cout<<"Rata-rata Bilangan = "rata_rata<<endl;
	getch();
}
