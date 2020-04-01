#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int Nilai[20], Posisi[20];
	int i, N, bill, Banyak=0;
	bool Ketemu;
	
	cout << "Masukkan Banyaknya Bilangan = "; cin >> N;
	
	// Read Element Array
	for(i=0; i<N; i++){
		cout << "Masukkan Elemen ke-["<<i<<"] = "; cin >> Nilai[i];
	}
	
	//Print Element Array
	cout << endl << "Deretan Bilangan = ";
	for(i=0;i<N; i++){
		cout << Nilai[i] << " ";
	}
	
	cout << endl << "Masukkan Bilangan Yang akan dicari = "; cin >> bill;
	
	// Proses Searching
	for(i=0; i<N; i++){
		if(Nilai[i]==bill){
			Ketemu = true;
			Posisi[Banyak]=i;
			Banyak++;
		}
	}
	if (Ketemu){
		cout << "- Bilangan ["<<bill<<"] ditemukan Sebanyak [" << Banyak << "]" << endl;
		cout << "- Pada posisi ke = ";
		for(i=0; i<Banyak; i++){
			cout <<"["<< Posisi[i] << "] ";
		}
	}else{
		cout << "Bilangan []"<< bill << "] tidak ditemukan";
	}
	getch();
}
