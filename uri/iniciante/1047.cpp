#include <iostream>

using namespace std;

int h1,h2,m1,m2,total,resto = 0;

int main(){

cin >> h1;
cin >> m1;
cin >> h2;
cin >> m2;

total=h2-h1;
resto=m2-m1;
if(total<0){
    total+=24;
}
if(resto<0){
    resto+=60;
    total--;
}

if(h1==h2){
        total=24;
    if(m1!=m2){
        total=0;
    }
    
}
if((h2==(h1+1))&&m2<m1){
    total=0;
}
cout<<"O JOGO DUROU "<<total<<" HORA(S) E "<<resto<<" MINUTO(S)"<<endl;

}

