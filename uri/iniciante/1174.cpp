#include <iostream>
#include <iomanip>
using namespace std;
int main(){
cout<<fixed<<setprecision(1);
    float n;
    int c=0;

    while(c<100){
        cin>>n;
        if(n<=10){
        cout<<"A["<<c<<"] = "<<n<<endl;
        }
    c++;}


        return 0;
    }
