#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x=1;

    while(x!=0){
    cin >> x;
    if(x==0)goto end;
    int y=0;
        while(y<x-1 && x!=0){
        y++;
        cout<<y<<" ";
        }
        y++;
        cout<<y<<endl;

    }
end:
    return 0;
}
