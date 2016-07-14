#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    cout << fixed << setprecision(5);
    double a=0,b=0,c=0,d=0,e=0;
    //double pi = 3.14159;
    cin >> a;
    cin >> b;
    cin >> c;
    //cin >> d;
    d=(-b+(sqrt((b*b)-(4*a*c))))/(2*a);
    e=(-b- (sqrt((b*b)-(4*a*c))))/(2*a);

    if((2*a)==0 ||((b*b)-(4*a*c)) <0){
        cout <<"Impossivel calcular"<<endl;
    }else{
    cout <<"R1 = "<<d<< endl;
    cout <<"R2 = "<<e<< endl;
    }

    return 0;
}
