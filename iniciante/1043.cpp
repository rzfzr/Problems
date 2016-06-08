#include <iostream>
#include <iomanip>

using namespace std;

main(){
   float a, b, c, d, e;
cout <<fixed<<setprecision(1);

 cin >> a;
 cin >> b;
 cin >> c;

 d=a + b + c;
 e=c * (a + b) / 2;
if (a < b + c && b < a + c && c < a + b){
 cout<<"Perimetro = "<< d;
 }
 else {
 cout<<"Area = "<< e;
 }
cout<<endl;
}
