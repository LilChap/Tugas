#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream ins;
    int sum = 0, num;

    ins.open("dataku.dat");
    while (!ins.eof()){
        ins >> num;
        sum = sum + num;
    }
    ins.close();
    cout<< sum;
}