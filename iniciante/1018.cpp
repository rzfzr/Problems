#include <iostream>
#include <iomanip>

using namespace std;

main(){

   int x,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
   cin>>x;
   
   
cout<<x<<endl;


   n100=x/100;
   x=x%100;
   n50=x/50;
   x=x%50;
   n20=x/20;
   x=x%20;
   n10=x/10;
   x=x%10;
   n5=x/5;
   x=x%5;
   n2=x/2;
   x=x%2;
   n1=x/1;
   x=x%1;


cout<<n100<<" nota(s) de R$ 100,00"<<endl;
cout<<n50<<" nota(s) de R$ 50,00"<<endl;
cout<<n20<<" nota(s) de R$ 20,00"<<endl;
cout<<n10<<" nota(s) de R$ 10,00"<<endl;
cout<<n5<<" nota(s) de R$ 5,00"<<endl;
cout<<n2<<" nota(s) de R$ 2,00"<<endl;
cout<<n1<<" nota(s) de R$ 1,00"<<endl;

}
