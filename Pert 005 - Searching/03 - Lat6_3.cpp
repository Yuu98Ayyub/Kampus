#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

main(){
	int Nilai[20], i, j, N;
	int temp, awal, akhir, tengah, Bilangan;
	
	//proses input data
	cout << "Banyak Bilangan : "; cin >> N;
	for(i=0; i<N; i++){
		cout << "Element ke-["<<i<<"] = ";
		cin >> Nilai[i];
	}
	
	cout << endl << "Element Sebelum diurut = ";
	for(i=0; i<N; i++){
		cout << setw(3) << Nilai[i];
	}
	
	// Proses pengurutan data
	for(i=0; i<N; i++){
		for(j=i+1; j<N; j++){
			if(Nilai[i] > Nilai[j]){
				temp = Nilai[i];
				Nilai[i] = Nilai[j];
				Nilai[j]=temp;
			}
		}
	}
	
	cout << endl << "Element Setelah diurut = ";
	for(i=0; i<N; i++){
		cout << setw(3) << Nilai[i];
	}
	cout << endl << "Indeks Element = ";
	for (i=0; i<N; i++){
		cout << setw(3) << i ;
	}
	
	cout << endl << endl << "Masukkan Data yang akan dicari : "; cin >> Bilangan;
	
	// Proses Searching Data
	awal = 0;
	akhir = N-1;
	do{
		tengah = (akhir + awal) / 2;
		if (Bilangan < Nilai [tengah]){
			akhir = tengah -1;
		}else{
			awal = tengah + 1;
		}
	} while ((akhir>=awal) && (Nilai[tengah] != Bilangan));
	
	if (Nilai[tengah] == Bilangan){
		cout << endl << "- Data [" << Bilangan << "] ada dalam array";
		cout << endl << "- Pada Posisi " << tengah;
	}else {
		cout << endl << "- Data [" << Bilangan << "] tidak ada dalam array";
	}
	getch();
}
