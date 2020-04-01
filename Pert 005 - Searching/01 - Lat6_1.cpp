#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int Nilai[20];
	int i, N, angka, bill;
	cout << "Masukkan Banyaknya Bilangan = "; cin >> N;

	//read element array
	for(i=0; i<N; i++){
		cout << "Masukkan Element ke-"<<i<<" = "; cin >> Nilai[i];
	}

	// Print element array
	cout << endl << endl << "Deretan Bilangan = ";
	for(i=0; i<N; i++){
		cout << Nilai[i] << " ";
	}

	cout << "\nMasukkan Bilangan yang akan dicari = "; cin >> bill;
	// Proses pencarian
	i=0;
	do{
		if(Nilai[i]==bill)
			angka = Nilai[i];
			i++;
	} while(i<N);

	if(angka==bill)
		cout << "- Bilangan [" << bill << "] ditemukan";
	else
		cout << "- Bilangan [" << bill << "] tidak ditemukan";
	getch();
}
