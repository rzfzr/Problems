#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int n,n1,n2,n3,n4,d1,d2,d3,d4;
    char bar,sign;
    cin>>n;
    while(n>0){
        
        cin>>n1;
        cin>>bar;
        cin>>d1;
        cin>>sign;
        cin>>n2;
        cin>>bar;
        cin>>d2;
        
        if(sign=='+'){
            n3=(n1*d2+n2*d1); 
            d3=(d1*d2);
        }else if(sign=='-'){
            n3=(n1*d2 - n2*d1); 
            d3=(d1*d2);
        }else if(sign=='*'){
            n3=(n1*n2);
            d3=(d1*d2);
        }else if(sign=='/'){
            n3=(n1*d2);
            d3=(n2*d1);
        }
        n4=n3;
        d4=d3;
        
        for(int i=n3;i>0;i--){
            
        if(n3%i==0&&d3%i==0){
            n3=n3/i;
            d3=d3/i;
        }
            
        }
        for(int i=d3;i>0;i--){
            
        if(n3%i==0&&d3%i==0){
            n3=n3/i;
            d3=d3/i;
        }
            
        }
        cout<<n4<<"/"<<d4<<" = "<<n3<<"/"<<d3<<endl;
        
        
    n--;    
    }
}