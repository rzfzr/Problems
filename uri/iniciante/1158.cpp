#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int n,x,y,m=0;

    cin>>n;

    while(n>0){
        cin>>x>>y;

        if(x%2==0){
            x++;
        }
        //m+=x;

        while(y>0){

            m+=x;x+=2;

        y--;}
        cout<<m<<endl;
        m=0;

    n--;}


        return 0;
    }
