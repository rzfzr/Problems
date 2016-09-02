#include <iostream>
#include <iomanip>
using namespace std;

int fibonacci(int);
int main(){
    
    int n;
    cout<<"Digite um numero:" <<endl;
    cin>>n;
    fibonacci(n);
    return 0;
}
int fibonacci(int n){
    long x,y,x1,y1;n++;
    x=0;y=1;
    while(n>=2){
        x1=x;y1=y;
        y=x1;
        x=x1+y1;
    n--;
    }
    cout<<x1+y1;
}

int fibonacci(int n){
    long x,y,x1,y1;n++;g
    x=0;y=1;
    if(n>1){
        
    }
    fibonacci(n);
    cout<<x1+y1;
} 
