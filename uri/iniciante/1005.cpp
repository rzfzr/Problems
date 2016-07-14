#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(5);
    double a, b;
    double pi = 3.14159;
    cin >> a;
    cin >> b;
    cout << "MEDIA = " <<(a*3.5+b*7.5)/11 << endl;
    return 0;
}
