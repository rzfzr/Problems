#include <iostream>
#include <iomanip>

using namespace std;

main(){
   cout<<fixed<<setprecision(2);

   int a, b, c, d;
   float x,y;

   cin>>a>>b>>x;
   cin>>c>>d>>y;

   cout<<"VALOR A PAGAR: R$ "<<(x*b)+(y*d)<<endl;

}
