#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    //cout<< fixed <<setprecision(2);
    double n,c=1;
    double t=0;
    cin>>n;
    while(c<n){
        t=t+(1/c);
    
    c++;}
    cout<<t<<endl;
}