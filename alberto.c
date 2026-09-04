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




#include <stdio.h>

int main() {
    float c, f;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    
    f = c * 9.0 / 5.0 + 32;
    
    printf("Temperatura em Fahrenheit: %.2f\n", f);
    return 0;
}



#include <stdio.h>

int main() {
    float base, altura, area;
    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);
    
    area = base * altura;
    
    printf("Area do retangulo: %.2f\n", area);
    return 0;
}

