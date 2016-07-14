#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

main(){

//  cout<<fixed<<setprecision(2);

   int x,y,c=0,in=0,out=0;
   cin>> x;

    while(x>c){
        c++;

        cin>>y;

        if(y>=10&y<=20){
            in++;;
        }else{out++;}

    }

    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;


//cout<<neg<<" valor(es) negativo(s)"<<endl;

}
