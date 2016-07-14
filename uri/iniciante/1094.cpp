#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

main(){

    cout<<fixed<<setprecision(2);
    int nt,n,cnt=0,tc=0,c=0,r=0,s=0;
    char cobaia;

    cin>>nt;

    while(nt>cnt){
        cnt++;
        cin>>n>>cobaia;
        tc=tc+n;
        if(cobaia=='C'){
            c+=n;
        }else if(cobaia=='R'){
            r+=n;
        }else{
            s+=n;
            }
    }


    cout<<"Total: "<<tc<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<"Percentual de coelhos: "<<(float) (c)/tc*100<<" %"<<endl;
    cout<<"Percentual de ratos: "<<(float) (r)/tc*100<<" %"<<endl;
    cout<<"Percentual de sapos: "<<(float) (s)/tc*100<<" %"<<endl;

}
