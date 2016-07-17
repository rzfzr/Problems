#include <iostream>
#include <iomanip>
#include <math.h> 
using namespace std;
int main(){
    int t;
    float pa, pb,yr=0,t1,t2;
    float g1, g2;
    cin>>t;
    while(t!=0){
        cin>>pa>>pb>>g1>>g2;
        while(pa<pb){
            pa=floor(pa)*(g1/100+1);
            pb=floor(pb)*(g2/100+1);
            yr++;
            //cout<<pa<<" "<<pb<<" "<<yr<<endl;
        }
        if(yr>100){
            cout<<"Mais de 1 seculo."<<endl;
        }else{
            
        cout<<yr<<" anos."<<endl;
        }
        yr=0;
        t--;
    }




        return 0;
    }
