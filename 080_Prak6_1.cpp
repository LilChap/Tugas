#include <iostream>
#include <bits/c++io.h>
using namespace std;

int oddeven(int);

int main (){
    int a, hasil;
    
    cout<<"Input angka : ";
    cin >> a;
    
    hasil = oddeven(a);

    if (hasil == 1){
        cout << "Angka yang diinput termasuk ke dalam bilangan ganjil";
    }if (hasil == 2) {
        cout << "Angka yang diinput termasuk ke dalam bilangan genap";
    }
}

int oddeven(int a){
    while (a>2){
        a = a/2;
    }
    return a;
}