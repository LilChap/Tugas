#include <iostream>
#include <bits/c++config.h>
using namespace std;

int main()
{
	int i, baris, kolom;
	string listNama[5][5]={
		{"Giv","Lux","Dettol","Lifebuoy","Harmony"},
		{"Dancow","Enak","SGM","Milo","Hilo"},
		{"Aqua","Ades","Club","Santri","Vit"},
		{"Taro net","Qtela","Spix","Pota Bee","Maxi"},
		{"CocaCola","Sprite","Fanta","Big Cola","Bintang"}
	};
	float listHarga[5][5]={
		{5000,5000,5500,4500,4000},
		{2000,1000,2000,1000,1500},
		{3000,3500,5000,2500,5000},
		{2000,3000,2000,3500,5000},
		{5000,5000,5000,5000,10000}
	};
	char kode[5][10]={
		"Sabun","Susu","Air minum","Chiki","Soda"
	};
	
	cout<<"Input kode barang: "<<endl<<"(ex: 1(spasi)2(spasi)3)"<<endl;
	cin >>i>>baris>>kolom;
	
	cout<<"Barang untuk kode "<<i<<baris<<kolom<<" :"<<endl;
	cout<<kode[i-1]<<"||"<<listNama[baris-1][kolom-1]<<endl;
	cout<<"Harga : Rp"<<listHarga[baris-1][kolom-1]<<endl;
}
