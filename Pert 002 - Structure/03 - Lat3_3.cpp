#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct Mahasiswa{
	char Nim[15];
	char Nama[25];
	char Alamat[40];
	int Umur;
};

main(){
	Mahasiswa Mhs[5];
	int i;
	for(i=0; i<5; i++){
		cout<<"Nim		: "; cin >> Mhs[i].Nim;
		cout<<"Nama		: "; cin >> Mhs[i].Nama;
		cout<<"Alamat		: "; cin >> Mhs[i].Alamat;
		cout<<"Umur		: "; cin >> Mhs[i].Umur;
		cout<<endl;
	}
	for(i=0; i<5; i++){
		cout<<"Nim		: " << Mhs[i].Nim;
		cout<<"Nama		: " << Mhs[i].Nama;
		cout<<"Alamat		: " << Mhs[i].Alamat;
		cout<<"Umur		: " << Mhs[i].Umur;
	}
	getch();
}
