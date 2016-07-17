#include <iostream>
#include <iomanip>

using namespace std;

main(){
    int x,y,c=0,c2=0;
    cin>>x>>y;

    while(y>c){

        while(x>c2 && y>c){
        c++;
    if(c2!=0)cout<<" ";
    cout<<c;
        c2++;
        }
    cout<<endl;
        c2=0;
    }

}
