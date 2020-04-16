#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

//quick sort start
void cetak(int data[], int n){
    int i;
    for (i=0; i<n; i++)
        cout << setw(3) << data[i];
        cout << "\n";
}

int partisi (int data[], int p, int r){
	int x, i, j, temp;
    x = data[p];
    i = p;
    j = r;

    while(1){
            while ( data[j] > x )
                j--;
            while ( data[i] < x )
                i++;
            if (i < j){
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }else
                return j;
        }
}

void quick_sort (int data[], int p, int r){
        int q;
        if (p < r)
            {
                q = partisi(data, p, r+1);
                quick_sort(data, p, q);
                quick_sort(data, q+1, r);
            }
    }


//quick sort end
main(){
    //variabel global start
    int nilai[20];
    int i, j, k, n;
    int temp;
    bool tukar;

    //variabel global end
    int pilih;
    menu :
	system("cls");
    cout << " -- Pilih Menu --" <<endl;
    cout << "1. Sorting Lat 7_1 " <<endl;
    cout << "2. Sorting Lat 7_2 " <<endl;
    cout << "3. Sorting Lat 7_3 " <<endl;
    cout << "-------------------" <<endl;
    cout << "Pilih Menu : " ; cin >> pilih;

    switch (pilih){
        case 1:
            cout <<endl;
            cout << "-- Bubble Sort Latihan 7_1 --" <<endl;
            cout << "Masukkan Banyak Bilangan : "; cin >> n;
                for (i=0; i<n; i++){
                    cout << "Elemen Ke - " << i << " : ";
                    cin >> nilai[i];
                }
            //proses cetak sebelum diurutkan
            cout << "\nData Sebelum diurut : ";
            for (i=0; i<n; i++)
            cout << setw(3) << nilai[i];
			cout <<endl;

			//proses pengurutan
            i=0;
            tukar = true;
			while ( (i<=n-2) && (tukar) ){
			tukar = false;
			for (j=n-1; j>=i+1; j--){
				if (nilai[j] < nilai[j-1]){
                    temp = nilai[j];
                    nilai[j] = nilai[j-1];
                    nilai[j-1] = temp;
                    tukar = true;
                    cout << "\nUntuk J = " << j << " : ";
                     for (k=0; k<n; k++)
                        cout << setw(3) << nilai[k];
                }
            }
			i++;
			}

			//proses cetak stelah diurutkan
            cout << "\n\nData setelah diurut : ";
            for(i=0; i<n; i++)
            cout << setw(3) << nilai[i];
			cout <<endl <<endl;
			cout << "Back To Menu .. ? ( 1 = yes , 2 = No ) : " ; cin >> pilih;
			if (pilih == 1){
				goto menu;
			} else {
				goto selesai;
			}
            getch();
        break;

        case 2:
            cout <<endl;
            cout << "-- Bubble Sort Latihan 7_2 --" <<endl;
            cout << "Masukan Banyak Bilangan : "; cin >> n;
            for (i=0; i<n; i++) {
				cout << "Elemen Ke - " << i << " : ";
				cin >> nilai[i];
            }

			//proses cetak sebeluk diurutkan
            cout << "\nData Sebelum diurut : ";
            for (i=0; i<n; i++)
            cout << setw(3) << nilai[i];
			cout <<endl;

            //proses pengurutan
			i=0;
			tukar = true;
            while ( (i<=n-2) && (tukar) ){
				tukar = false;
				for (j=n-1; j>=i+1; j--) {
					if (nilai[j] < nilai[j-1]){
						temp = nilai[j];
						nilai[j] = nilai[j-1];
						nilai[j-1] = temp;
						tukar = true;
						cout << endl;
					for (k=0; k<n; k++)
						cout << setw(3) << nilai[k];
					}
				}
				i++;
			}

			//proses cetak setelah diurutkan
			cout << "\n\nData Setelah diurut : ";
			for (i=0; i<n; i++)
				cout << setw(3) << nilai[i];
			cout <<endl <<endl;
			cout << "Back To Menu .. ? ( 1 = yes , 2 = No ) : " ; cin >> pilih;
            if (pilih == 1){
				goto menu;
			} else {
				goto selesai;
			}
			getch();
        break;

        case 3:
            cout <<endl;
            cout << "-- Quick Sort Latihan 7_3 --" <<endl;
            cout << "Masukkan Banyak Bilangan : "; cin >> n;
			for (i=0; i<n; i++){
				cout << "Elemen Ke - " << i << " : "; cin >> nilai[i];
			}

			cout << endl << "Data Sebelum Diurut : ";
			cetak(nilai, n);
			cout << endl;

			quick_sort(nilai,0,n-1);
			cout << endl << "Data Setelah Diurut : ";
			cetak(nilai,n);
			cout <<endl <<endl;

			cout << "Back To Menu .. ? ( 1 = yes , 2 = No ) : " ; cin >> pilih;
			if (pilih == 1){
				goto menu;
			} else {
				goto selesai;
			}
			getch();
        break;
    }
    selesai:
        cout << endl;
        cout << " -- Exit Program --";
}
