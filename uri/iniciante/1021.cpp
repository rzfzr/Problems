#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

main(){



   double n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0,
   n050=0,n025=0,n010=0,n005=0,n001=0;
   double x,x1,x2;
   cin>>x;
    while(x>=100){
    x-=100;
    n100+=1;}
    while(x>=50){
    x-=50;
    n50+=1;}
    while(x>=20){
    x-=20;
    n20+=1;}
    while(x>=10){
    x-=10;
    n10+=1;}
    while(x>=5){
    x-=5;
    n5+=1;}
    while(x>=2){
    x-=2;
    n2+=1;}
    while(x>=1){
    x-=1;
    n1+=1;}
    
    
    x=x*100;
  
  
    while(x>=50){
    x-=50;
    n050+=1;}
    while(x>=25){
    x-=25;
    n025+=1;}
    while(x>=10){
    x-=10;
    n010+=1;}
    while(x>=5){
    x-=5;
    n005+=1;}
    while(x>=1){
    x-=1;
    n001+=1;}
    
cout<<"NOTAS:"<<endl;
cout<<n100<<" nota(s) de R$ 100.00"<<endl;
cout<<n50<<" nota(s) de R$ 50.00"<<endl;
cout<<n20<<" nota(s) de R$ 20.00"<<endl;
cout<<n10<<" nota(s) de R$ 10.00"<<endl;
cout<<n5<<" nota(s) de R$ 5.00"<<endl;
cout<<n2<<" nota(s) de R$ 2.00"<<endl;
cout<<"MOEDAS:"<<endl;
cout<<n1<<" moeda(s) de R$ 1.00"<<endl;
cout<<n050<<" moeda(s) de R$ 0.50"<<endl;
cout<<n025<<" moeda(s) de R$ 0.25"<<endl;
cout<<n010<<" moeda(s) de R$ 0.10"<<endl;
cout<<n005<<" moeda(s) de R$ 0.05"<<endl;
cout<<n001<<" moeda(s) de R$ 0.01"<<endl;

//cout<<"TRIANGULO: "<<<<endl;
}
