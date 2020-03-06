#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int nilai[20];
	int position[20];
	int i, n, bilangan, banyak = 0;
	bool ketemu;
	
	cout<<"Masukkan banyaknya bilangan = "; cin>>n;
	cout<<endl;
	
	// read array 1
	for(i=0; i<n; i++){
		cout<<"Masukkan element ke-"<<i<<" = "; cin>>nilai[i];
	}
	cout<<endl;
	
	// read array 2
	cout<<"Deret bilangan = ";
	for(i=0; i<n; i++){
		cout<<nilai[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Masukkan bilangan yang akan diambil = "; cin>>bilangan;
	// searching
	for(i=0;i<n;i++){
		if(nilai[i]==bilangan){
			ketemu=true;
			position[banyak]=i;
			banyak++;
		}
	}
	cout<<endl;
	
	if(ketemu){
		cout<<"Bilangan " << bilangan << " ditentukan sebanyak "<< banyak << endl;
		cout<<"pada posisi ke = ";
		for(i=0; i<banyak; i++){
			cout<<position[i]<<" ";
		}
		cout<<endl;
	} else {
		cout<<"Bilangan " << bilangan << " Tidak ditemukan!!";
	}
	getch();
}
