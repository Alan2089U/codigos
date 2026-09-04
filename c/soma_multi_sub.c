#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    
    printf("Soma: %d\n", n1 + n2);
    printf("Subtracao: %d\n", n1 - n2);
    printf("Multiplicacao: %d\n", n1 * n2);
    
    if (n2 != 0) {
        printf("Divisao: %.2f\n", (float)n1 / n2);
    } else {
        printf("Divisao: Erro (divisao por zero)\n");
    }
    
    return 0;
}
