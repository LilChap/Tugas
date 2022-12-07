#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream ins;
    int sum = 0, counter=0, num, rerata;

    ins.open("dataku.dat");
    while (!ins.eof()){
        ins >> num;
        sum = sum + num;
        counter++;
    }
    ins.close();
    
    rerata=sum/counter;
    cout<<"Total : "<<sum<<endl<<"Rata rata : "<<rerata;
}