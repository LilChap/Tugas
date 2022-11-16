#include<iostream>
using namespace std;

int main() {
	int i, n, tertinggi, terendah, jumlah, rerata;
	jumlah =0;
	cout << "Input banyak nilai" << endl;
	cin>>n;
	
	cout << "Input nilai :" << endl;
	for(int i = 0; i < n; i++){
		int bil;
		cin>>bil;
		jumlah += bil;
		
		if(bil < terendah){
			terendah = bil;
		}
		
		if(bil > tertinggi){
			tertinggi = bil;
		}
	}
	
	rerata = jumlah/n;
	
	cout<<"Nilai terendah = "<<terendah<<endl;
	cout<<"Nilai tertinggi = "<<tertinggi<<endl;
	cout<<"Nilai rerata "<<rerata<<endl;
}