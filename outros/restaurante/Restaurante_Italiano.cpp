// Criado pelos alunos: Rafael F Gonçalves (120127) e Henrique Gaspar (120143)


#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
void menu();
int main(){
    cout << fixed << setprecision(2);//money
    float mesas[25][50] = {0};//money
    float valor[35] = {0,50,80,40,87,0,0,0,0,0,0,15,12,20,17,0,0,0,0,0,0,6,9,0,0,0,0,0,0,0,0,12,8,11,13};
    int mesa;
    int cod = 1;
    float qtd;
    int pedido = 0; 
    int opc=0;
    float pagar;
start:          
    cout << "Escolha a mesa:" << endl;
    cin >> mesa;
    cout << "Escolha a opcao:" << endl << "1-Fazer pedido    2-Finalizar ordem" << endl;
    cin >> opc;
    cout <<"Conta = " <<mesas[mesa][pedido]<<endl;
    if(opc==1){
        menu ();//funcao print menu
        cout << "Escolha o codigo do pedido:" <<endl; cin >> cod;
        cout << "Escolha a quantidade" << endl;       cin >> qtd;
        mesas[mesa][pedido] += valor[cod] * qtd;//add novo valor na conta da mesa
        cout <<"Conta = " <<mesas[mesa][pedido] << endl;
    }else if(opc==2){//finalizar mesa, funcionando !!!
        cout <<"Conta final = " <<mesas[mesa][pedido] << endl;
        cout <<"Quantia de dinheiro "<<endl;
        cin >> pagar;
        cout <<"Troco = "<< (pagar-mesas[mesa][pedido])<<endl;
        mesas[mesa][pedido] = 0;        
        cout << "Obrigado pela preferencia, volte sempre!!!"<<endl;
    }
    goto start;
}  

void menu(){
    cout<<"********************Comidas*******************"<<endl;
    cout<<"** Codigo    Descricao            Valor(R$) **"<<endl;
    cout<<"** 01 - Ravioli de Queijo           - 50.00 **"<<endl;
    cout<<"** 02 - Fettucine de Camarões       - 80.00 **"<<endl;
    cout<<"** 03 - Cappeleti Recheado          - 40.00 **"<<endl;
    cout<<"** 04 - Espaguete com frutos do mar - 87.00 **"<<endl<<endl;
    cout<<"******************Bebidas*********************"<<endl;
    cout<<"** Codigo    Descricao            Valor(R$) **"<<endl;
    cout<<"** 11 - Cerveja Artesanal           - 15.00 **"<<endl;
    cout<<"** 12 - Suco Organico Natural       - 12.00 **"<<endl;
    cout<<"** 13 - Vinho do Porto              - 20.00 **"<<endl;
    cout<<"** 14 - Grappa Italiana             - 17.00 **"<<endl<<endl;
    cout<<"******************Sobremesas******************"<<endl;
    cout<<"** Codigo    Descricao            Valor(R$) **"<<endl;
    cout<<"** 21 - Mousse de Chocolate         - 06.00 **"<<endl;
    cout<<"** 22 - Doce de Nozes               - 09.00 **"<<endl<<endl;
    cout<<"****************Caffe Espresso****************"<<endl;
    cout<<"** Codigo    Descricao            Valor(R$) **"<<endl;
    cout<<"** 31 - Espresso Machiato           - 17.00 **"<<endl;
    cout<<"** 32 - Caffe Latte                 - 02,00 **"<<endl;
    cout<<"** 33 - Mocca                       - 11.00 **"<<endl;
    cout<<"** 34 - Cappuccino                  - 13.00 **"<<endl;
    cout<<"**********************************************"<<endl;
    }
    
    
    //da errado? eu sei que ele n pede automatico mas achava que dava certo, ele soh zera quando vc finaliza
    //da certo sim mas ele soma com os ultimos pedidos, acho que eh isso
    //ah sim entendi
    //criei um funcoes .cpp, clica no meu icon e vc consegue abrir ele