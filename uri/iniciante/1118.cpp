#include <iostream>
#include <iomanip>

using namespace std;

main(){
    
start:

    cout<<fixed<<setprecision(2);
    float x, i=0,t=0;
    int nw=0;
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
choose:
    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    cin>>nw;
    if(nw==1){
        goto start;
    }else if(nw==2){
        return 0;
    }else{
        goto choose;
    }
}
