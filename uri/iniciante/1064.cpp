#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

main(){

    cout<<fixed<<setprecision(1);

   float i1,i2,i3,i4,i5,i6,me=0;
    int po=0;
   cin>>i1;
   cin>>i2;
   cin>>i3;
   cin>>i4;
   cin>>i5;
   cin>>i6;



   if(i1>0){po++;me+=i1;}
   if(i2>0){po++;me+=i2;}
   if(i3>0){po++;me+=i3;}
   if(i4>0){po++;me+=i4;}
   if(i5>0){po++;me+=i5;}
   if(i6>0){po++;me+=i6;}




    cout<<po<<" valores positivos"<<endl;
    cout<<me/po<<endl;



//cout<<"TRIANGULO: "<<<<endl;
}
