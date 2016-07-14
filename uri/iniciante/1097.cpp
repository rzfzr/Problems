#include <iostream>

using namespace std;

main(){
    int j=2,i=1;

a:
    int c=3;j+=5;
while(i<=9){
    while(c>0){
        cout<<"I="<<i<<" J="<<j<<endl;
        c--;j--;
    }
    i+=2;
    goto a;
    }


}
