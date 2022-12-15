#include <iostream>
#include <bits/c++io.h>
#include <time.h>
#include <string>
#include <fstream>
using namespace std;

int hasil[25];		//variabel publik
void proses_random(int);
string waktu();

main(){
	int banyak,proses;
	char jawaban;
	do{
		cout<<"\n\n======================================="<<endl;
		cout<<"        PIN  PASSWORD  GENERATOR       "<<endl;
		cout<<"=======================================";
		
		cout<<"\n\n Input panjang pin yang diinginkan"<<endl;
		cout<<" (maksimum :20)"<<endl;
		cin>>banyak;
		
		do{
			cout<<"\n!!!Melebihi batas maksimum!!!"<<endl;
			cout<<"\n\n Input panjang pin yang diinginkan"<<endl;
			cout<<" (maksimum :20)"<<endl;
			cin>>banyak;
		}while(banyak>20);
	
		proses_random(banyak);
		
		//output hasil random
		cout<<"\n   Hasil : "<<endl<<endl<<"   ";
		for(int i=0; i<banyak; i++){
			cout << hasil[i];
		}
				
		//mencatat hasil random
		ofstream log;
		log.open("hasil.txt", ios_base::app);
		log << waktu() << " | ";
		for(int i=0; i<=banyak; i++){
			log << hasil[i];}
		log << endl;
		log.close();
		
		cout<<"\n\n   Apakah anda ingin hasil yang lain?"<<endl;
		
		cin>>jawaban;

		
	}while(jawaban=='y'||jawaban=='Y');
	
	return 0;
}

//fungsi untuk me-random isi array hasil
void proses_random(int banyak){
	srand(time(NULL));
	for(int i=0; i<banyak; i++){
		hasil[i]=rand()%(9+1-0)+0;
	}
}

//fungsi pembantu pencatatan hasil random
string waktu()
{  
    time_t rawtime;
    struct tm* timeInfo;
    char buffer[80];

    time(&rawtime);
    timeInfo = localtime(&rawtime);

    strftime(buffer, 80, "%Y-%m-%d %I:%M:%S", timeInfo);
    string waktustring(buffer);

    return waktustring;
}
