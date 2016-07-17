#include <iostream>
#include <iomanip>

using namespace std;

main(){
    cout<<fixed<<setprecision(2);
    float x, i=0,t=0;
    while(i<2){
    cin>>x;
    if(x<0||x>10){
        cout<<"nota invalida"<<endl;
    }else{
        t+=x;
        i++;
    }

    }    
    cout<<"media = "<< (float)t/2<<endl;
}
