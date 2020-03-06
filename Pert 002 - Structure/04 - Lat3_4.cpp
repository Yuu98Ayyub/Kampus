#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct Tinggal{
	char Jln[40], Kota[15], Pos[6];
};
struct Tgl_Lahir{
	int Tgl, Bln, Thn;
};
struct Mahasiswa{
	char Nim[15], Nama[25];
	Tinggal Alamat;
	Tgl_Lahir Lahir;
};

main(){
	Mahasiswa Mhs[5];
	int i;
	for(i=0; i<3; i++){
		cout<<"Nim		: "; cin >> Mhs[i].Nim;
		cout<<"Nama		: "; cin >> Mhs[i].Nama;
		cout<<"Alamat		" << endl;
			cout<<"- Jalan		: "; cin >> Mhs[i].Alamat.Jln;
			cout<<"- Kota		: "; cin >> Mhs[i].Alamat.Kota;
			cout<<"- Kode Pos	: "; cin >> Mhs[i].Alamat.Pos;
		cout<<"Tanggal Lahir	 " << endl;
			cout<<"- Tanggal	: "; cin >> Mhs[i].Lahir.Tgl;
			cout<<"- Bulan		: "; cin >> Mhs[i].Lahir.Bln;
			cout<<"- Tahun		: "; cin >> Mhs[i].Lahir.Thn;
	cout<< endl;	
	}
	cout<< endl;
	cout<<"-- Cetak Anggota"<< endl;
	for(i=0; i<3; i++){
		cout<<"Nim		: " << Mhs[i].Nim;
		cout<<"Nama		: " << Mhs[i].Nama;
		cout<<"Alamat		" << endl;
			cout<<"- Jalan		: " << Mhs[i].Alamat.Jln;
			cout<<"- Kota		: " << Mhs[i].Alamat.Kota;
			cout<<"- Kode Pos	: " << Mhs[i].Alamat.Pos;
		cout<<"Tanggal Lahir	: " << Mhs[i].Lahir.Tgl << " - " << Mhs[i].Lahir.Bln << " - " << Mhs[i].Lahir.Thn;
	}
	
}
