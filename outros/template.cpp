#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    cout<< fixed <<setprecision(2);
    int dias,taxa,c=0,t=0,cot,min=45,max=125,carry;
    //int cot [dias]; //= { 16, 2, 77, 40, 12071 };
    double x;
    cin>>dias;
    cin>>taxa;
    
    while(c<dias){
        cin>>cot;
        
        if(cot<min){
            min = cot;
        }
        if(cot>max){
            max = cot;
        }
    
    
    c++;}
    
    cout<<min<<endl<<max<<endl;
    carry=(max-min)-taxa;
    if(carry>=0){
        cout<<carry;
    }
    
}