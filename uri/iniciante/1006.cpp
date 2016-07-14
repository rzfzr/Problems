#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(1);
    double a, b,c;
    double pi = 3.14159;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "MEDIA = " <<(a*2+b*3+c*5)/10 << endl;
    return 0;
}
