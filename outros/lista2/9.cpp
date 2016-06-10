#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    cout<< fixed <<setprecision(2);
    int n,c=2,t=0,x;
    bool p = true;
    cin>>x;
    while(c<x){
    if(x%c==0){
        p= false;
    }    
    c++;}
    if(p==true){
        cout<<"primo"<<endl;        
    }else{
        cout<<"nao primo"<<endl;        
    }
    
    
}