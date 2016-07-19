#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int anos, meses, dias, saida;
    cout << "Informe sua idade" << endl;
    cin>> anos;
    cin>> meses;
    cin>> dias;
    saida=dias;
    saida+=(meses*30);
    saida+=(anos*365);
    
    cout<<endl<<"Total dias:";
    cout<<saida;
    
    return 0;  
}