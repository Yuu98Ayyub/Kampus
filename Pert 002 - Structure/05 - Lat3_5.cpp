#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#define jm 2
using namespace std;

struct mahasiswa{
    char nim[15];
    char nama[30];
}mhs;

struct nilai{
    float nilai_tgs;
    float nilai_uts;
    float nilai_uas;
    float nilai_akhir;
}nl;

main(){
    mahasiswa mhs;
    nilai nl;
    char nilai_huruf;

    cout << "Input Biodata :" << endl;
    cout << "- Nim    = "; cin.getline(mhs.nim,15);
    cout << "- Nama   = "; gets(mhs.nama);
    cout << endl << "Input Nilai : " << endl;
    cout << "- Nilai Tugas    = "; cin>>nl.nilai_tgs;
    cout << "- Nilai UTS      = "; cin>>nl.nilai_uts;
    cout << "- Nilai UAS      = "; cin>>nl.nilai_uas;
    cout << endl;

    nl.nilai_akhir=(nl.nilai_tgs*0.2)+(nl.nilai_uts*0.35)+(nl.nilai_uas*0.45);
    if (nl.nilai_akhir>100){
            nilai_huruf='A';
    }else if(nl.nilai_akhir<=85 && nl.nilai_akhir>70){
        nilai_huruf='B';
    }else if(nl.nilai_akhir<=70 && nl.nilai_akhir>55){
        nilai_huruf='C';
    }else if(nl.nilai_akhir<=55 && nl.nilai_akhir>=40){
        nilai_huruf='D';
    }else{
        nilai_huruf='E';
    }

    cout << "Nilai Akhir = " << nl.nilai_akhir << endl;
    cout << "Nilai Huruf = " << nilai_huruf <<endl;
}
