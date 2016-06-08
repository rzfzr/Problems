#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int x,c=1;

    cin>>x;

    while(c<x+1){
        if(x%c==0){
                cout <<c<<endl;
        }
        c++;
    }

        return 0;
    }
