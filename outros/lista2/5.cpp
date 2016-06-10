#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    cout<< fixed <<setprecision(2);
    int n,c=0,t=0,t1=0,x;
    
    while(c<10){
        cin>>x;
        
    if(x%2==0){
        t+=x;
    }else{
        t1+=x;
    }
    
    c++;}
    
    cout<<endl<<"Pares = "<<t<<endl<<"Impares = "<<t1;
    
    
}