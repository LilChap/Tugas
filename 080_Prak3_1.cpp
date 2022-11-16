#include<iostream>
using namespace std;

int main() {
	int simpanan, hasil, bunga, bulan;
	simpanan = 1000000;
	bunga = simpanan * 2/100;
	hasil = simpanan + bunga;
	
	for(int bulan = 0; bulan <= 10; bulan++){
		cout << "Simpanan pada bulan ke-" << bulan << " :" << endl;
		cout << hasil << endl;
		bunga = hasil * 2/100;
		hasil += bunga;
	}
}