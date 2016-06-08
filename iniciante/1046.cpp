#include <iostream>

using namespace std;

int n1, n2, n3, n4 = 0;

int main(){

cin >> n1;
cin >> n2;


if(n1>n2){
    n2=n2+24;
}

n3=n2-n1;

if(n1==n2){
    n3=24;
}


cout<<"O JOGO DUROU "<<n3<<" HORA(S)"<<endl;



}
