#include <iostream>
using namespace std;
int main(){

    int n,x,y,c=0,t;
    cin>>n;

    while(n>0){
        cin>> x;
              t=0;
      for(int i= 1; i<x; i++){
         if(x%i== 0){
             t+= i;
                   if(t>x)break;
            }
        }
           if(x==t){

            cout<<x<<" eh perfeito"<<endl;
        }else{
            cout<<x<<" nao eh perfeito"<<endl;
        }
    n--;}

}


