#include <iostream>
#include <iomanip>

using namespace std;

main(){
    cout<<setprecision(2);
    float j=4,i=0;

a:
    float c=3;j-=3;
while(i<=2.2){
    while(c>0){
        cout<<"I="<<i<<" J="<<j<<endl;
        c--;j++;
    }
    i+=0.2;j+=0.2;
    goto a;
    }


}
