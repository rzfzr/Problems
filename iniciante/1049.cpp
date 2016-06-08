#include <iostream>


using namespace std;
int main() {
string x1,x2,x3;

cin>>x1;
cin>>x2;
cin>>x3;



if(x1=="vertebrado"){
    if(x2=="ave"){
        if(x3=="carnivoro"){
        cout<<"aguia";}
        else{
        cout<<"pomba";}
    }
    else{
    if(x2=="mamifero"){
        if(x3=="onivoro"){
        cout<<"homem";}
        else{
        cout<<"vaca";}
    }
    }
}
else{
    if(x2=="inseto"){
        if(x3=="hematofago"){
        cout<<"pulga";}
        else{
        cout<<"lagarta";}
    }
    else{
    if(x2=="anelideo"){
        if(x3=="hematofago"){
        cout<<"sanguessuga";}
        else{
        cout<<"minhoca";}
    }
    }
}








cout<<endl;
}
