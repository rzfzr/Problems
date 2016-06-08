#include <iostream>
#include <iomanip>

using namespace std;

int main(){
cout << fixed << setprecision(1);
float n1,n2,n3,n4,exame,me,media= 0;

cin >> n1>>n2>>n3>>n4;
media =(n1*2+n2*3+n3*4+n4)/10;
cout << "Media: " <<  media <<endl;

if(media>=5&&media<=6.9){
    cout <<"Aluno em exame."<<endl;
    cin >> exame;
    cout << "Nota do exame: "<< exame<<endl;
    me= (exame+media)/2;
    if(me>=5){
        cout << "Aluno aprovado."<<endl;
    }else { cout << "Aluno reprovado."<<endl;}
        cout << "Media final: "<<me<<endl;
    }
if(media>=7.0){
    cout << "Aluno aprovado."<<endl;}
if(media<5.0){
    cout << "Aluno reprovado."<<endl;}






}
