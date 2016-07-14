#include <iostream>
#include <iomanip>
using namespace std;
int main(){

cout<<fixed<<setprecision(2);
    int i,m=0,c=-1;


    do {
        cin>>i;
        m+=i;
        c++;
    } while (i>1);
    m-=i;
    cout<<(float)m/c<<endl;

    return 0;
}
