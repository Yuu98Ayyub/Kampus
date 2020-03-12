#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct Mahasiswa{
    char Nim[15], Nama[25], Alamat[40];
    short Umur;
};
void Baca(Mahasiswa &Mhs);
void Cetak(Mahasiswa &Mhs);
main(){
    Mahasiswa Mhs;
    cout << "Membaca Nilai Anggota Struktur" << endl;
    Baca(Mhs);
    cout << "\nMencetak Nilai Anggota Struktur" << endl;
    Cetak(Mhs);
    getch();
}

void Baca(Mahasiswa &Mhs){
    cout << "Nim    : "; cin.getline(Mhs.Nim,15);
    cout << "Nama   : "; cin.getline(Mhs.Nama,25);
    cout << "Alamat : "; cin.getline(Mhs.Alamat,40);
    cout << "Umur   : "; cin>>Mhs.Umur;
}
void Cetak(Mahasiswa &Mhs){
    cout << "Nim    : " << Mhs.Nim << endl;
    cout << "Nama   : " << Mhs.Nama << endl;
    cout << "Alamat : " << Mhs.Alamat << endl;
    cout << "Umur   : " << Mhs.Umur;
}
