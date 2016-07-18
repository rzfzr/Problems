#include <iostream>
#include <iomanip>

using namespace std;

main(){
    int   a,b,c;
    cin>>a>>b>>c;

    if(a>b){b=a;}
    if(b>c){c=b;}

    cout<<c<<" eh o maior"<<endl;
}
