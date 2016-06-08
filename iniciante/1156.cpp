#include <iostream>
#include <iomanip>
using namespace std;
int main(){

cout<<fixed<<setprecision(2);
    float s=1,c1=3,c2=2;

    while(c1<41){
        s+=c1/c2;
    c1+=2;
    c2=c2*2;}
cout<<s<<endl;
    return 0;
}
