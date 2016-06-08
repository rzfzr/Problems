#include <iostream>
#include <iomanip>
using namespace std;
int main(){

cout<<fixed<<setprecision(2);
    float s=0,m=0,c=1;

    while(c<101){
        s+=1/c;
    c++;}
cout<<s<<endl;
    return 0;
}
