#include <iostream>
#include <conio.h>
using namespace std;

struct biodata{
    int nip;
    char nama[20];
    char jabatan[20];
    char agama[10];
    char alamat[50];
}pegawai[0];

main(){
    int i, n;
    cout <<endl;
    cout << " --- Biodata Pegawai PT.Makmur --- " <<endl;
    cout << "===================================" <<endl;

    //untuk input data karyawan
    cout << "Jumlah Pegawai : "; cin >> n;
    for (i=0; i<n; i++){
        cout <<endl;
        cout << "   Pegawai ke - " << i <<endl;
        cout << "NIP     : "; cin >> pegawai[i].nip;
                              cin.ignore();
        cout << "Nama    : "; cin.getline(pegawai[i].nama,20);
        cout << "Jabatan : "; cin.getline(pegawai[i].jabatan,20);
        cout << "Agama   : "; cin >> pegawai[i].agama;
                              cin.ignore();
        cout << "Alamat  : "; cin.getline(pegawai[i].alamat,50);
        cout <<endl;

    }

    //untuk menampilkan data karyawan
    cout <<endl <<endl;
    cout << "======================================" <<endl;
    cout << "            Biodata Pegawai           " <<endl;
    cout << "            PT. Makmur KUY            " <<endl;
    cout << "======================================" <<endl;

    int carinip;
    bool found;
    cout << "Cari Pegawai (NIP) : "; cin >> carinip;
    found = false;
    i=0;
    while ((i<n)&(!found))
        {
            if (pegawai[i].nip == carinip)
                found = true;
                else
                    i = i+1;
        }

    if (found)
        {
            cout << "Hasi pencarian NIP [ " << carinip; cout << " ]" <<endl;
            cout << "NIP     : " << pegawai[i].nip <<endl;
            cout << "Nama    : " << pegawai[i].nama <<endl;
            cout << "Agama   : " << pegawai[i].agama <<endl;
            cout << "Jabatan : " << pegawai[i].jabatan <<endl;
            cout << "Alamat  : " << pegawai[i].alamat <<endl;
            cout << "-----------------------------------------------" <<endl;
            cout <<endl;
        }
    else
        {
        cout <<"NIP [ ";
        cout << carinip; cout << " ] Tidak Terdaftar!! ";
        }
        getch();
}
