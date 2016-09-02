#include <iostream>
#include <iomanip>

using namespace std;

int main(){
cout << fixed << setprecision(1);
int x,y,z= 0;

cin >> x>>y>>z;

if (x>y&&x>z&&y>z){
    cout <<z<<endl<<y<<endl<<x<<endl;
}

if (y>x&&y>z&&x>z){
    cout <<z<<endl<<x<<endl<<y<<endl;
}

if (z>y&&z>x&&y>x){
    cout <<x<<endl<<y<<endl<<z<<endl;
}



if (x>y&&x>z&&z>y){
    cout <<y<<endl<<z<<endl<<x<<endl;
}

if (y>x&&y>z&&z>x){
    cout <<x<<endl<<z<<endl<<y<<endl;
}

if (z>y&&z>x&&x>y){
    cout <<y<<endl<<x<<endl<<z<<endl;
}






cout <<endl<<x<<endl<<y<<endl<<z<<endl;

}
