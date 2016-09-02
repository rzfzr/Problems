#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cctype>

            using namespace std;// AGORA TEM Q ARRUMAR O BANG DO UPPERCASE(LINHA 110) E AUMENTAR O NUM DE PALAVRAS E COLOCAR ELAS EM ORDEM DE TIPO, PRA DPS DAR UMA DICA PRO USUARIO

int main(){
    //blz, mas tipo ele tmb ta fazendo essa parte? ASDYASDBHJSA, então faz o seguinte, divide ae vc, metade pra cada, dae nos dois mandamos pra vc e tu monta
    // pode ser? pode ser, por mim ta ok, fmz, vou fazendo aki
blz, vi la tem 12 questoes, ele faz as 6 primeiras e vc as 6 ultimas? fecho, tem as de tangente que n ta formatando exatamente 
certinho, mas eu mandaria assim msmo, mas fechou, vou passar pra ele
    
    #define TAMPOOL 10    // NUMERO DE PALAVRAS NO ARRAY POOL
    #define TAMUSADAS 33 //ENTRADAS POSSIVEIS
    
    denovo:;
    
    int error = 0,random, hit = 0;
    char letra, digito;
    bool acerto = false,final = false, acerto2 = false, usada = false;
    string pool[TAMPOOL] = {"bacon", "palavra", "coxinha", "informatica", "ornitorrinco", "ciencia", "pizza", "programador", "cafe", "cafeina"}; // COLOCAR UMA PALAVRA = AUMENTAR O TAMPOOL
    string word;
    int j = 0;                  //contador para palavras usadas
    char usadas[TAMUSADAS] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
    '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',};     //array para palavras usadas, TENTA OTIMIZAR ISSO PLMDDS



    srand (time(NULL));
    random = rand() % TAMPOOL;
    
    word = pool[random];
    
    
    int t = word.length();
    
    char display[t];
    
    for(int i = 0; t > i; i++){
        display[i] = {'_'};
    }
    
    cout << " >>>>>> JOGO DA FORCA <<<<<<< " << endl << endl << endl;           //COMEÇO
    
    cout << "Sua palavra tem " << t << " letras!" << endl;
    
    start:
    
    desenho:;
    
    cout << " ___________" << endl << "|          |" << endl << "|";      //DESENHOOOO <<<<<<<<<<<<<<<<<<<<<<
    
    if(error > 0){
        cout <<    "          O"; 
    }
    
    cout << endl << "|";
    
    if(error > 2){
        cout << "         /";
    }
    
    if(error == 2){
        cout << "          ";
    }
    
    if(error > 1){
        cout << "|";
    }
    
    if(error > 3){
        cout << "\\";
    }
    
    cout << endl << "|";
    
    if(error > 4){
        cout << "         /";
    }
    
    if(error > 5){
        cout << " \\";
    }
    
    cout << endl << "|" << endl << "|";
    
    
    
        
    for(int i = 0; i < t; i++){                             //INICIALIZA O DISPLAY
            cout << " " << display[i];
    }
    cout << endl;
    
    cout << "Letras usadas: ";
    
    for(int i = 0; usadas[i] != '0'; i++){                  //INFORMA AS LETRAS QUE FORAM USADAS
        cout << usadas[i] << " ";
    }
    
    
    
    input:;                                                 
    
    cout << endl << "Informe uma letra: ";
    
    cin >> letra;
    
    if((letra > 'a' && letra < 'z') || (letra > 'A' && !letra < 'Z')){
        
    }
    
    else{
        system("clear");
        cout << "ENTRADA INVALIDA!!" << endl;
        goto desenho;
    }
    
    
    system("clear");
    
    putchar (tolower(letra));             //  <<<<<<<<<<<< NÃO FUNCIONA - TRANFORMAR UPPERCASE EM LOWERCASE
    
    cout << endl;
    
    for(int i = 0; i < TAMUSADAS; i++){                            //VE SE A LETRA JA FOI USADA
        if(letra == usadas[i]){
            usada = true;
        }
    }
    
    if(usada){
        cout << "Voce ja usou essa letra!" << endl;
        usada = false;
        goto desenho;
    }
    
    else {
        usadas[j] = letra;
        j++;
    }
    
    for(int i = 0; i<t; i++){                               //VE SE O USUARIO ACERTOU
        if(letra == word[i]){
            
            acerto = true;
            acerto2 = true;
            hit++;
            if(hit >= t){
                goto win;
            }
        }
        if(acerto){
            display[i] = word[i];
        }
        acerto = false;
    }
        if(acerto2){
            cout << "Voce acertou!!" << endl;
            
        }
        
        else if(!acerto2){
            cout << "Que pena, você errou" << endl;
            error++;
            
            if(6 - error > 0){
                cout << "Voce ainda tem " << 6 - error << " tentativas!" << endl;   
            }
        }
        
        acerto2 = false;
        
        if(error > 5){                      
            goto gameOver;
        }
    
    
    
    
    
    goto start;
    
    gameOver:;                                  //TELA DE GAME OVER
    
    cout << "GAME OVER" << endl;
    
    cout << " ___________" << endl << "|          |" << endl <<
    "|" <<    "          O" << endl << "|" << "         /" << "|" << "\\" <<
    endl << "|" << "         /" << " \\" << endl << "|" << endl << "|";    
    
    
    goto pergunta;
    
    return 0;
    
    
    
    win:;
    
    cout << "PARABENS VOCÊ GANHOU!!" << endl;       //TELA DE VITORIA
    
    cout << " ___________" << endl << "|" << endl << "|" <<
    endl << "|" << endl << "|         \\O/" << endl <<
    "|          |" << endl << "|         / \\" << endl;
    
    
    
    pergunta:;
    
    cout << "JOGAR NOVAMENTE? [s] para continuar / [n] terminar" << endl;    //PERGUNTA SE O USUARIO QUER JOGAR DENOVO
    cin >> digito;
    
    if(digito == 's' || digito == 'S'){
        goto denovo;
    }
    
    else if(digito == 'n' || digito == 'N'){
        return 0;
    }
 
    else{
        cout << "Comando invalido" << endl;
        goto pergunta;
    }
}