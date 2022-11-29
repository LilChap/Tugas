#include <iostream>
#include <bits/c++io.h>
using namespace std;

int luas(int);
int jumlah(int, int);

main (){
    int a, b, luasA, luasB, total;

    cout<<"Input panjang sisi bujur sangkar A :";
    cin>>a;

    cout<<"Input panjang sisi bujur sangkar B :";
    cin>>b;

    luasA=luas(a);
    luasB=luas(b);

    cout<<"\nLuas bujur sangkar A adalah : "<<luasA;
    cout<<"\nLuas bujur sangkar B adalah : "<<luasB<<endl;
    
    total = jumlah(luasA, luasB);

    cout<<"\nJumlah luas dua bujur sangkar adalah : "<<total; 
}

int luas(int x){
    return x*x;
}

int jumlah(int x, int y){
    return x+y;
}