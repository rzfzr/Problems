#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int anos=0, meses=0, dias=0, entrada;
    cout << "Informe sua idade em dias" << endl;
    cin >>entrada;
    
    while(entrada>=365){
        entrada-=365;
        anos++;
    }
    while(entrada>=30){
        entrada-=30;
        meses++;
    }
    
    dias=entrada;
    
    entrada=dias;
    entrada+=(meses*30);
    
    cout<< endl;
    cout<<anos<<"anos, ";
    cout<<meses<<" meses, ";
    cout<<dias<<" dias";
    
    return 0;  
}