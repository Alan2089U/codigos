#include <stdio.h>
int main(){
    int n1;
    int n2;
    int a;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    a = n1;
    n1 = n2;
    n2 = a;
    printf(" Primeiro numero apos a troca de valores: %d", n1);
    printf(" Segundo numero apos a troca de valores: %d", n2);
}