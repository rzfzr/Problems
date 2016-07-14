#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    //cout << fixed << setprecision(3);
    int a=0,b=0,c=0,d=0;
    double pi = 3.14159;
    //string a1;
    //cin >> a1;
    cin >> a;
    //cin >> b;
    //cin >> c;
    //cin >> d;
while(a>=365){
        a=a-365;
        b=b+1;
}
   while(a>=30){
        a=a-30;
        c=c+1;
   }
    cout << b<<" ano(s)"<< endl;
    cout << c<<" mes(es)"<< endl;
    cout << a<<" dia(s)"<<endl;
    return 0;
}
