#include <iostream>
#include <cstdlib>
using namespace std;

int parouimpar(void){
    int x;

    cout << "Digite um numero" <<endl;
    cin >> x;
    if(x%2==0){
        cout << "O numero e par" <<endl;
    }else{
        cout << "O numero e impar" <<endl;
    }
    return x;
}

int main (){
    int resultado;
    resultado = parouimpar();

    system("pause");
    return 0;
}
