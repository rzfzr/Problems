#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    cout << fixed << setprecision(2);
    double a=0,b=0,c=0,d=0,e=0;
    //double pi = 3.14159;
    cin >> a;
    cin >> b;
    //cin >> c;
    //cin >> d;
if(a==1){
    c=4.00;
}
if(a==2){
    c=4.50;
}
if(a==3){
    c=5.00;
}
if(a==4){
    c=2.00;
}
if(a==5){
    c=1.50;
}
d=c*b;
cout <<"Total: R$ "  << d <<endl;

    return 0;
}
