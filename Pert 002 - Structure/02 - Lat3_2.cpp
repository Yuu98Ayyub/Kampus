#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct Tinggal{
	char Jln[40];
	char Kota[15];
	char Post[6];
};
struct Tgl_born{
	int Tgl;
	int Month;
	int Year;
};
struct Mahasisw_a_i{
	char Nim[15];
	char Nama[25];
	Tinggal Alamat;
	Tgl_born Lahir;
};

main(){
	Mahasisw_a_i Mhs;
	cout<<"Nim		: "; cin.getline(Mhs.Nim,15);
	cout<<"Nama		: "; cin.getline(Mhs.Nama,25);
	cout<<"Alamat		 " << endl;
		cout<<"- Jalan		: "; cin.getline(Mhs.Alamat.Jln,40);
		cout<<"- Kota		: "; cin.getline(Mhs.Alamat.Kota,15);
		cout<<"- Kode Pos	: "; cin.getline(Mhs.Alamat.Post,6);
	cout<<"Tanggal Lahir	" << endl;
		cout<<"- Tanggal	: "; cin >> Mhs.Lahir.Tgl;
		cout<<"- Bulan		: "; cin >> Mhs.Lahir.Month;
		cout<<"- Tahun		: "; cin >> Mhs.Lahir.Year;
	
	cout<<endl;
	cout<<"--- Cetak Data Anggota" <<endl;
	
	cout<<"Nim	: " << Mhs.Nim << endl;
	cout<<"Nama	: " << Mhs.Nama << endl;
	cout<<"Alamat : " << endl;
		cout<<"- Jalan		: " << Mhs.Alamat.Jln << endl;
		cout<<"- Kota		: " << Mhs.Alamat.Kota << endl;
		cout<<"- Kode Pos	: " << Mhs.Alamat.Post << endl;
	cout<<"Tanggal Lahir	: " << Mhs.Lahir.Tgl << " - " << Mhs.Lahir.Month << " - " << Mhs.Lahir.Year;
	getch();
}
