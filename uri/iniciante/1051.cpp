#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {
    float salario = 0.00;
    scanf("%f", &salario);

    if(salario <= 2000.00){
        printf("Isento\n");
    }else{
        if((salario >2000.00) && (salario <= 3000.00)){
            float aux = salario - 2000.00;
            aux = aux*0.08;
            printf("R$ %.2f\n", aux);
        }else{
            if((salario > 3000.00) && (salario <= 4500.00)){
                float aux = salario - 3000.00;
                aux = 80.00 + (aux*0.18);
                printf("R$ %.2f\n", aux);
            }else{
                float aux = salario - 4500.00;
                aux = 350.00 + (aux*0.28);
                printf("R$ %.2f\n", aux);
            }
        }
    }


    return 0;
}