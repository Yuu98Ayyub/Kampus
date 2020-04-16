#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

main(){
	int Nilai[20], i, j, k, N;
	int temp;
	bool tukar;
	cout << "Masukkan bilangan : "; cin >> N;
	
	for(i=0; i<N; i++){
		cout << "Element ke-[" << i << "] :"; cin >> Nilai[i];
	}
	
	// proses cetak before sorting
	cout << endl << "Data Sebelumnya diurut : ";
	for(i=0; i<N; i++)
		cout << setw(3) << Nilai[i];
	
	// Proses sorting
	i=0;
	tukar = true;
	while ((i<=N-2) && (tukar)){
		tukar = false;
		for(j=N-1; j>=i+1; j--){
			if(Nilai[j] < Nilai[j-1]){
				temp = Nilai[j];
				Nilai[j] = Nilai[j-1];
				Nilai[j-1] = temp;
				tukar = true;
				cout << endl;
				for(k=0; k<N; k++)
					cout << setw(3) << Nilai[k];
			}
		}
		i++;
	}
	
	// proses cetak after sorting
	cout << endl << "Data Setelah diurut : ";
	for (i=0; i<N; i++)
		cout << setw(3) << Nilai[i];
	getch();
}
