#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int n1, n2, n3, media_final;
    cout << "Informe a primeira nota" << endl;
    cin >>n1;
    cout << "Informe a segunda nota" << endl;
    cin >> n2;
    cout << "Informe a ultima nota" <<endl;
    cin >> n3;
    
    
    media =(n1*2+n2*3+n3*5)/10;
    cout << media << endl;
    
    
    return 0;  
}