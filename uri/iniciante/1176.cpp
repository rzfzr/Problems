#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

    int nt=2,c=0,t=0, x1 , y1 , n;
    long long fib[61]={};
    
    fib[0]=0;
    fib[1]=1;
    while(nt<=60){
        fib[nt]= fib[nt-2] + fib[nt-1];
    nt++;
    }
    
    cin >> t;
    
    for(int i = 0; i<t; i++){
        cin >> n;
        cout <<"Fib("<<n<<") = "<< fib[n]<<endl;
    }
    

    // for(int i=0; i<61; i++,c++){
    //     cout <<"Fib("<<i<<") = "<< fib[i]<<endl;
    // }
    
}