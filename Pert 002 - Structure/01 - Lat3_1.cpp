#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct Mahasiswa{
	char Nim[15];
	char Nama[25];
	char Alamat[40];
	short Umur;
};

main(){
	Mahasiswa Mhs;
	// Input Data
	cout<<"* Input Data"<<endl;
	cout<<"Nim		: "; cin.getline(Mhs.Nim,15);
	cout<<"Nama		: "; cin.getline(Mhs.Nama,25);
	cout<<"Alamat		: "; cin.getline(Mhs.Alamat,40);
	cout<<"Umur		: "; cin >> Mhs.Umur;
	cout<<endl;
	
	// Cetak Data
	cout<<"* Output"<<endl;
	cout<<"Nim		: " << Mhs.Nim << endl;
	cout<<"Nama		: " << Mhs.Nama << endl;
	cout<<"Alamat		: " << Mhs.Alamat << endl;
	cout<<"Umur		: " << Mhs.Umur << endl;
	
	getch();
}
