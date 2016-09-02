#include <iostream>
#include <math.h>
#include <iomanip>
#include <time.h>
using namespace std;

int today(int cdia, int cmes, int cano){
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(,&theTime);
    int day = aTime -> tm_mday;
    int month = aTime ->tm_mon + 1;
    int year =aTime -> tm_year = 1900;
}

int date(int dia, int mes, int ano){
    int ds[12] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(ano % 4 && ano%100!=0){
        ds[2] =29;
    }
    if(ano>cano){
        return 0;//ano invalido
    }else if(ano==cano && mes>cmes){
        return 0;//mes invalido
    }
}
int main(){
    //validar data
    int dia, mes, ano;
    cin>>dia;
    cin>>mes;
    cin>>ano;
    date(dia,mes,ano);
    
con

    
}


