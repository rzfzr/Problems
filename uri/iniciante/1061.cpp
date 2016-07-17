#include <iostream>
#include <iomanip>

using namespace std;

int main(){

int w,x,y,z,w2,x2,y2,z2,w3,x3,y3,z3,t,t2,t3,w4,x4,y4,z4 = 0;
string d,p;


cin >>d;
cin >>w;
cin >>x>>p>>y>>p>>z;

cin >>d;
cin >>w2;
cin >>x2>>p>>y2>>p>>z2;


w3=w2-w;
x3=x2-x;
y3=y2-y;
z3=z2-z;

if(z3<0){
z3=z3+60;
y3=y3-1;
}

if(y3<0){
y3=y3+60;
x3=x3-1;
}

if(x3<0){
x3=x3+24;
w3=w3-1;
}



cout  <<w3<<" dia(s)"<<endl<<x3<<" hora(s)"<<endl<<y3<<" minuto(s)"<<endl<<z3<<" segundo(s)"<<endl;


}
