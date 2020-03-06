#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int nilai[20];
	int i, n, terbesar;
	
	cout<<"input banyaknya bilangan = "; cin>>n;
	cout<<endl;
	
	// read array
	for(i=0; i<n; i++){
		cout<<"Masukkan elemen ke-"<<i<<" = "; cin >> nilai[i];
	}
	cout<<endl;
	
	// first element set to a big one
	terbesar = nilai[1];
	for(i=1; i<n; i++){
		if(nilai[i] > terbesar){
			terbesar=nilai[i];
		}
	}
	
	// print bilangan terbesar
	cout<<"Bilangan terbesar = "<< terbesar;
	getch();
}
