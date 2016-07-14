#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int n,x,y,x1,y1;
    cin>>n;

    cout<<"0";
    x=0;y=1;

    while(n>=2){

        x1=x;y1=y;
        cout<<" "<<x1+y1;
        y=x1;
        x=x1+y1;

    n--;
    }
    cout<<endl;
    

    return 0;
}
