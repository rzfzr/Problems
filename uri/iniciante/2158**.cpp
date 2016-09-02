#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;
int main(){
    long long int fp,fh,vertice,edge,i=1;
    while(cin>>fp>>fh){
        
        vertice=(fh*6)/3+(fp*5)/3;
        edge=(fh*6+fp*5)/2;
        
        cout<<"Molecula #"<<i<<".:."<<endl
        <<"Possui "<<vertice<<" atomos e "<<edge
        <<" ligacoes"<<endl<<endl;
        i++;
    }
}