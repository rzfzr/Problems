#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

main(){

   int x,y,v   ,s=0 ;
   cin>> x;
   cin>> y;
   
   if(x<y){
       v=x;
       x=y;
       y=v;
   }
while((x-1)>y){
   if(x%2==0){
      s+=(x-1);
   }else{
   }
   x--;
}


cout<<s<<endl;
//cout<<neg<<" valor(es) negativo(s)"<<endl;

}
