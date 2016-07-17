#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int x,z,i=1;
    cin>>x;
    cin>>z;
    int x1=x;
    while(z<=x){
        cin>>z;
        }
    while(z>=x){
        x+=x1;
        i++;
        x1++;
    }

    cout<<i<<endl;


    return 0;
}
