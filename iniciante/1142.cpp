#include <iostream>
#include <iomanip>

using namespace std;

main(){
    int x,c=0;
    cin>>x;

    while(x>0){
        cout <<++c<<" ";
        cout <<++c<<" ";
        cout <<++c<<" PUM"<<endl;c++;
    x--;

    }
}
