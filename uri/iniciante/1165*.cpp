#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n,x,d=1,p=0;

    cin>>n;
    while(n>0){
        cin>>x;
        
        while(x>d){
            
        if(x%d==0){
                p++;
            }
            d++;
        }
        d=0;
        if(p==0){
            cout<<x<<" nao eh primo"<<endl;
        }else{
            cout<<x<<" eh primo"<<endl;
        }
        p=0;
        n--;
    }
}

