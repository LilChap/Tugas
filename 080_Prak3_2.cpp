#include<iostream>
using namespace std;

int main() {
	int waktu = 0, v = 3, jarak = 0;
	
	while(jarak < 100){
		if(waktu % 10 == 0 && waktu != 0){
			v++;
		};
		cout<<"Jarak yang telah ditempuh pada detik ke-"<<waktu<<" :"<<endl;
		cout<< jarak << endl;
		jarak += v;
		waktu++;
	}
	cout<<"Waktu yang ditempuh adalah : " <<waktu<<" detik" << endl;
}