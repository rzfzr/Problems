#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    cout<< fixed <<setprecision(2);
    int n,c=0,t=0,d,q;
    double x;
    cout<<"indique o valor da mesada "<<endl;
    cin>> x;
    select:
    cout<<endl<<endl<<"selecione um doce "<<endl;
    cout<<"{1} Bala = 00,25"<<endl<<"{2} Cocada = 01,50"<<endl
    <<"{3} Cocaina = 30,00"<<endl;
    cin>> d;
    cout<<"selecione a quantidade"<<endl;
    cin>> q;
    if(d==1 && .25<=x){
        x-=.25*q;
    }else if(d==2 && 1.5<=x){
        x-=1.5*q;
    }else if(d==3 && 30<=x){
        x-=30*q;
    }
    cout<<"dinheiro restante = "<<x;
    if(x>=.25){
        goto select;
    }
}