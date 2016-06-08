#include <iostream>

using namespace std;



int main(){
double x = 0;

cin>>x;

    if(x>=0.00&&x<=25.00){
        cout<<"Intervalo [0,25]";
    }
    else if(x>25.00&&x<=50.00){
        cout<<"Intervalo (25,50]";
    }
    else if(x>50.00&&x<=75.00){
        cout<<"Intervalo (50,75]";
    }
    else if(x>75.00&&x<=100.00){
        cout<<"Intervalo (75,100]";
    }
    else{
        cout<<"Fora de intervalo";
    }

    cout<<endl;

}

