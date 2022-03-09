#include <iostream>
using namespace std;

int main ()
{
	int angka, jumlah, max;
	int a=max;
	cout <<"masukkan jumlah angka: "; cin >> jumlah;
	cout << endl;
	
	for (int i = 1; i <= jumlah; i++){
		
		cout << "Masukkan Angka : "; cin >> angka;
		
		if (i==1){
			max = angka;
		}
		else if (max < angka){
			max= angka;
		}
		else {}
	}
	
	cout << endl;
	cout <<"Nilai terbesar : " << max << endl;
	
	cout << "Alamat nilai terbesar: " <<&max << endl;
	
	return 0;
	}
