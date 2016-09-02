#include <iostream>
    using namespace std;
    
int main(){
    float n; //n ou x vao bem aqui, nao precisa inicializar pois agente vai receber o valor antes de ser usado
    int t=0; //t de total, se tivesse o contador seria 'int t=0,i=0', nao precisa de 2 linhas
    for(int i=0;i<3;i++){ //for(declaracao,condicao,incremento)  i de index
        //for aqui eh bem mais elegante, sem contar que nao precisa da gambiarra no final do while de incremento
        cout<<"Digite um numero"<<endl;
        cin>>n;
        t+=n;
    }
    cout<<"Total= "<<t<<endl;
    
    
}