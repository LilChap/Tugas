#include <iostream>
#include <bits/c++config.h>
using namespace std;

int main(){
	int baris, size=5, ttl, rata;
	int total[1][5]={0, 0, 0, 0, 0};
	
	cout<<"Input jumlah siswa :";
	cin>>ttl;
	
	int nilai[ttl][size];
	string namaSiswa[ttl];
	
	cout<<"Input nama Siswa"<<endl;
	
	for(int i=0; i<ttl; i++){
		cout<<i+1<<". ";
		cin>>namaSiswa[i];
	}
	
	for(int i=0; i<ttl; i++){
		for(int j=0; j<size ; j++){
			nilai[i][j]=(rand()%(100 - 60 +1) +60);
			total[0][j]+=nilai[i][j];
		}
		cout<<endl;
	}
	
	for(int i=0; i<ttl; i++){
		cout<<"		Rapor : "<<namaSiswa[i]<<endl;
		for(int j=0; j<size	; j++){
			cout<<"Nilai pelajaran "<<j+1<<" :"<<nilai[i][j];
			rata=total[0][j]/ttl;
			cout<<"		Rata-rata kelas : "<<rata<<endl;
		}
		cout<<endl;
	}
	return 0;
}
