#include <iostream>
using namespace std;

main(){
int A[3][4] = {{1,3,4,5}, {2,4,6,8}, {3,5,7,9}};
int i, j;

cout<<"* Simple Matriks 3x4 array";
	for(i=0; i<3; i++){
    cout<<endl;
		for(j=0; j<4; j++){
		cout << A[i][j] << " ";
		}
	}
cout<<endl;
}
