#include <iostream>
using namespace std;
int main(){

    int x,y,c,t=1;

    cin>> x;
    while(x>0){
        t=t*x;
        x=x-1;
    }

    cout<<t<<endl;

}
