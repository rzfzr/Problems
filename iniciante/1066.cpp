#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

main(){

//  cout<<fixed<<setprecision(2);

   int a1,a2,a3,a4,a5,par=0,pos=0,neg=0;
   cin>>a1;
   cin>>a2;
   cin>>a3;
   cin>>a4;
   cin>>a5;

if(a1%2==0){par++;}
if(a2%2==0){par++;}
if(a3%2==0){par++;}
if(a4%2==0){par++;}
if(a5%2==0){par++;}

if(a1>0){pos++;}
if(a2>0){pos++;}
if(a3>0){pos++;}
if(a4>0){pos++;}
if(a5>0){pos++;}

if(a1<0){neg++;}
if(a2<0){neg++;}
if(a3<0){neg++;}
if(a4<0){neg++;}
if(a5<0){neg++;}



cout<<par<<" valor(es) par(es)"<<endl;
cout<<5-par<<" valor(es) impar(es)"<<endl;
cout<<pos<<" valor(es) positivo(s)"<<endl;
cout<<neg<<" valor(es) negativo(s)"<<endl;

}
