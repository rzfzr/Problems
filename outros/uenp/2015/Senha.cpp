#include <iostream> // cout...
#include <math.h>   //
#include <iomanip>  //
#include <vector>
#include <fstream>  // file IO
#include <string>   //
#include <cctype>

using namespace std;


int main(){
    
    string senha;
    int t=0;
    

    getline(cin,senha);
    
    for (int i = 0 ; i < senha.length();i++){
        
        if(isdigit(senha[i])){
            t+=1;
        }else if(isupper(senha[i])){
            t+=3;
        }else if(islower(senha[i])){
            t+=2;
        }else{
            t+=5;
        }
        
    }
    cout << t;

}