#include <iostream>
#include <iomanip>

using namespace std;

main(){
    cout<<fixed<<setprecision(1);
    int x,y,c;
    cin>>c;

    while(c>0){c--;
        cin>>x>>y;
        if(y==0){cout<<"divisao impossivel"<<endl;}else
        cout<<(float)x/y<<endl;


    }
}
