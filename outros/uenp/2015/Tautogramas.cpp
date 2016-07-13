#include <iostream> // cout...
#include <math.h>   //
#include <iomanip>  //
#include <vector>
#include <fstream>  // file IO
#include <string>   //
#include <cctype>

using namespace std;


int main(){
    
    string entrada,saida;
    bool tau = 1;
    getline(cin,entrada);
    char first = entrada[0];
    
    
    for (int i = 0 ; i < entrada.length();i++){
        
        if(isspace(entrada[i])){
            if(entrada[i+1]!=first){
                tau=0;
            }
        }
        
    }
    if(tau){
        saida="S";
    }else{
        saida="N";
    }
    cout << saida;

}