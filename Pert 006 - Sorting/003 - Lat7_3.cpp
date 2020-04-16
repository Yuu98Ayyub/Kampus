#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

void Cetak(int data[], int n){
	int i;
	for(i=0; i<n; i++){
		cout << setw(3) << data[i] << endl;
	}
}

int Partisi(int data[], int p, int r){
	int x, i, j, temp;
	x = data[p];
	i=p;
	j=r;
	while(1){
		while(data[j]>x){
			j--;
		}
		while(data[i]<x){
			i++;
		}
		if(i<j){
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		} else {
			return j;
		}
	}
}

void Quick_Sort(int data[], int p, int r){
	int q;
	if(p<r){
		q=Partisi(data, p, r+1);
		Quick_Sort(data, p, q);
		Quick_Sort(data, q+1, r);
	}
}

main(){
	int Nilai[20], i, N;
	cout << "Masukkan bilangan : "; cin >> N;
	for(i=0; i<N; i++){
		cout << "Element ke-" << i << " : "; cin >> Nilai[i];
	}
	
	cout << endl << "Data Sebelum diurut : " << endl;
	Cetak(Nilai, N);
	cout << endl;
	
	Quick_Sort(Nilai, 0, N-1);
	cout << endl << "Data setelah diurut : " << endl;
	Cetak(Nilai, N);
	
	getch();
}
