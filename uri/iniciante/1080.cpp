#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

main(){

  cout<<fixed<<setprecision(1);
    int n,n1=0,c=0,h=0;

    while(c<=100){
        c++;
        cin>>n;
        if(n>n1){
            n1=n;
            h=c;
        }
    }
    cout<<n1<<endl<<h<<endl;




//cout<<neg<<" valor(es) negativo(s)"<<endl;

}
