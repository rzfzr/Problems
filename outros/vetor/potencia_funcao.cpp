#include <iostream>
#include <math.h>
using namespace std;

int potencia(void){
    int base;
    int expo;
    int result=0;
    cout << "## Calculo de potencia ##" << endl;
    cout << "Digite a base " << endl;    
    cin >> base;
    cout << "Digite o expoente" << endl;
    cin >> expo;

    result = pow(base, expo);
    return result; 
}

int main(){

    int result_potencia;
    result_potencia = potencia();
    cout << "O resultado da potencia eh " <<result_potencia <<endl;
return 0;
}
