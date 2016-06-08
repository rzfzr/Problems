#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

main(){

  cout<<fixed<<setprecision(1);
    int n,n1,c=0;
    double x,y=0;
    cin>>n;

    while(n>c){
    cin>>x;
    y=y+(x*2);
    cin>>x;
    y=y+(x*3);
    cin>>x;
    y=y+(x*5);

    cout<<y/10<<endl;
    y=0;
    n--;
    }
//cout<<neg<<" valor(es) negativo(s)"<<endl;

}
