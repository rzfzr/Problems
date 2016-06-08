#include <iostream>
using namespace std;
int main(){

    int x,y,c,t=0;

    cin >>x;
    cin >>y;
    if(x<y){
        c=y;
        y=x;
        x=c;
    }
    while (x>=y){
        if (x%13!=0){
        t=t+x;}
        x=x-1;

    }

    cout<<t<<endl;

}
