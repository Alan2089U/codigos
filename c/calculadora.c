#include <stdio.h>
int main(){
    double n1 = 0;
    double n2 = 0;
    double r;
    int o;
    printf("Digite um numero: ");
    scanf("%lf", &n1);
    printf("Escolha o operador (1./, 2.*, 3.+, 4.-)");
    scanf("%d", &o);
    printf("Digite outro numero: ");
    scanf("%lf", &n2);
    if (o == 1){
        r = n1 / n2;
    }else if(o == 2){
        r = n1 * n2;
    }else if(o == 3){
        r = n1 + n2;
    }else if(o == 4){
        r = n1 - n2;
    }else{
        printf("Esse sinal nao existe.");
    }
    printf("O resultado e: %lf", r);
    return 0;
}