#include <iostream>

using namespace std;

main(){
    int i=1;

a:
    int j=7,c=3;
while(i<=9){
    while(c>0){
        cout<<"I="<<i<<" J="<<j<<endl;
        c--;j--;
    }
    i+=2;
    goto a;
    }


}
