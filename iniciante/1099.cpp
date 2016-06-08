#include <iostream>
#include <iomanip>

using namespace std;

main(){
    int n,x,y,y1,t;

    cin>>n;
    while(n>0){
        n--;
        cin>>x>>y;
        t=0;
        if(x>y){
            y1=y;
            y=x;
            x=y1;

        }
        while(x<(y)){
                if(x%2==0){
                    x++;

                    if(x<y){
                t+=x;}
                }
                x+=2;
                if(x<y){
                t+=x;}



        }
        cout<<t<<endl;
    }
}
