#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
using namespace std;

const int N=5;
void Baca (int Nilai[], int &M);
void Cetak (int Nilai[N], int &M);
void Jumlah (int Nilai[N], int &M, int &Jlh, float &Rata);
main(){
	int M;
	int Nilai[N];
	int Jlh = 0;
	float Rata;

	cout << "Banyak Element : " << N << endl;
	Baca(Nilai, M); // Summon Fucntion Baca

	cout << "\nElement elemen : ";
	Cetak(Nilai,M);
	Jumlah (Nilai, M, Jlh, Rata); // Summon Function Jumlah

	cout << "\nJumlah bilangan    : " << Jlh << endl;
	cout << "Rata-rata bilangan : " << Rata << endl;
	getch();
}

void Cetak(int Nilai[], int &M){
	int i;
	for(i=0; i<M; i++){
		cout << setw(3) << Nilai[i];
	}
}
void Baca(int Nilai[], int &M){
	int i;
	for(i=0; i<M; i++){
		cout << "Element ke-"<<i<<" : ";
		cin >> Nilai[i];
	}
}
void Jumlah(int Nilai[], int &M, int &Jlh, float &Rata){
	int i;
	for(i=0; i<M; i++){
		Jlh+=Nilai[i];
		Rata=(float)Jlh/M;
	}
}
