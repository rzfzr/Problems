#include <iostream>
#include <iomanip>

using namespace std;

int main(){
cout << fixed << setprecision(1);
int n1,n2,n3= 0;

cin >> n1>>n2>>n3;

if (n1>n2&&n1>n3&&n2>n3){
    cout <<n3<<endl<<n2<<endl<<n1<<endl;
}

if (n2>n1&&n2>n3&&n1>n3){
    cout <<n3<<endl<<n1<<endl<<n2<<endl;
}

if (n3>n2&&n3>n1&&n2>n1){
    cout <<n1<<endl<<n2<<endl<<n3<<endl;
}



if (n1>n2&&n1>n3&&n3>n2){
    cout <<n2<<endl<<n3<<endl<<n1<<endl;
}

if (n2>n1&&n2>n3&&n3>n1){
    cout <<n1<<endl<<n3<<endl<<n2<<endl;
}

if (n3>n2&&n3>n1&&n1>n2){
    cout <<n2<<endl<<n1<<endl<<n3<<endl;
}






cout <<endl<<n1<<endl<<n2<<endl<<n3<<endl;

}
