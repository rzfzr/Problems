#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void seq(int x, int i){
    cout<<i<<" ";
    i++;
    if(x>=i)
    seq(x,i);
    
}
int main(){
    int x,i=1;
    cout<<"Digite um numero: ";
    cin>>x;
    seq(x,i);
}