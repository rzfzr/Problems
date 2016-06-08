#include <iostream>
#include <iomanip>

using namespace std;

main(){
    int n,n1,m,y=0,c=0;

a:
    while(y==0){
    cin>>n>>m;
    if(n<1 || m<1){y=1;goto a;}

    if(n>m){
        n1=n;
        n=m;
        m=n1;
    }

        while(n!=m+1){

            cout<<n<<" ";

            c+=n;
            n++;
        }
        cout<<"Sum="<<c<<endl;
        c=0;






    }

}
