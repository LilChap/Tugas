#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string kota;
    char teks[25][25];
    int banyak;

    fstream ins("namakota.txt",ios::app);

    cout<<"Jumlah nama kota yang akan ditambah : ";
    cin>>banyak;
    cin.get();

    for (int i = 1; i <= banyak ; i++)
    {
        cout<<"Kota ke-"<<i<<" : ";
        gets(teks[i]);
    }
    for (int i = 1; i <=banyak; i++)
    {
        ins<<"\n"<<teks[i];
    }
    cout<<"Teks sudah ter-input."<<endl;
    ins.close();

    fstream cetak("namakota.txt",ios::in);
    cout<<"Daftar Nama Kota dalam file :"<<endl;
    while (!cetak.eof())
    {
        cetak>>kota;
        cout<<kota<<endl;
    }
    cetak.close();
}