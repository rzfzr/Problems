#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int a,n,m=0;
    cin>>a>>n;

    while(n<1){
            cin>>n;
            }
    while(n!=0){
        m+=a;
        a++;
        n--;
    }

    cout<<m<<endl;


    return 0;
}
