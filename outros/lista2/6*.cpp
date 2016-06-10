#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    cout<< fixed <<setprecision(2);
    int n,c=1,t=0,x; // 'c' can't be 0 !?
        cin>>x;
//      for(c=1;c<=x;++c)
//   {
//       if(x%c==0)
//          cout << c << endl;
//   }
    while(c<=x){
        if(x%c==0){
            cout<<c<<endl;
        }
    c++;}
    
    
}