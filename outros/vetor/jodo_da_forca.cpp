#include <iostream>
#include <string>
using namespace std;

int main(){
    int error = 0,t=5;
    string word = "bacon",word2 ="_____";
    char letra;
    bool acerto=false,final=false;
    
start:
        
    
    cout<<"A palavra tem 5 letras:";
    for(int i=0;i<t;i++){
            cout<<" "<<word2[i];
    }
    
    
    cout<<endl<<"Informe uma letra: ";
    cin>>letra;
    for(int i=0;i<=t;i++){
        if(letra==word[i]){
            acerto=true;
        }
        if(acerto){
            cout<<"Encontrada!";
            word2[i]=word[i];
        }
        acerto=false;
        
    }
    goto start;
}