#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

main(){
//cout<<fixed<<setprecision(2);
    int i=1, j=60;

    while(j>=0){
        cout<<"I="<<i<<" "<<"J="<<j<<endl;

        i+=3;j-=5;
    }
}
