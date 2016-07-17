#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int x,y,z;
    cin>>x;
    cin>>y;
    if(x<y){
        z=x;x=y;y=z;
    }
    x--;y++;
    while(x>y){
        if(y%5==3||y%5==2){
            cout<<y<<endl;
        }y++;
    }
    
    
}