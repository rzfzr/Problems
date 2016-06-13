#include <iostream>

using namespace std;

int main (){
    int dias = 0, cot = 0, y = 0, z = 0, taxa = 0;

    cin >> dias >> taxa;

    int v[dias];

    for (int i = 0; i < dias; i++){
        cin >> cot;
        v[i] = cot;
    }

    for (int i2 = 0; i2 < (dias - 1); i2++){

        for (int i3 = i2; i3 < dias; i3++){
            if (v[i3] - v[i2] > z) {
                z = v[i3] - v[i2];
            }

        }

        if (z > y) {
            y = z;
            z = 0;
        }
    }


    cout << y - taxa;

}
