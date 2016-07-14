#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

main(){

    cout<<fixed<<setprecision(2);

   float a=0;
   cin>>a;



   if(a>2000){
    cout<<"Novo salario: "<<a*1.04<<endl<<"Reajuste ganho: "<<(a*1.04)-a<<endl<<"Em percentual: 4 %"<<endl;
   }
   if(a<=2000 & a>1200){
    cout<<"Novo salario: "<<a*1.07<<endl<<"Reajuste ganho: "<<(a*1.07)-a<<endl<<"Em percentual: 7 %"<<endl;
   }
   if(a<=1200 & a>800){
    cout<<"Novo salario: "<<a*1.1<<endl<<"Reajuste ganho: "<<(a*1.1)-a<<endl<<"Em percentual: 10 %"<<endl;
   }
   if(a<=800 & a>400){
    cout<<"Novo salario: "<<a*1.12<<endl<<"Reajuste ganho: "<<(a*1.12)-a<<endl<<"Em percentual: 12 %"<<endl;
   }
   if(a<=400 & a>0){
    cout<<"Novo salario: "<<a*1.15<<endl<<"Reajuste ganho: "<<(a*1.15)-a<<endl<<"Em percentual: 15 %"<<endl;
   }









//cout<<"TRIANGULO: "<<<<endl;
}
