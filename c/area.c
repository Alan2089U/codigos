#include <stdio.h>
int main(){
    double l = 0;
    double a = 0;
    double area = 0;
    printf("Digite a largura: ");
    scanf("%lf", &l);
    printf("Digite a altura: ");
    scanf("%lf", &a);
    area = l * a;
    printf("A area do retangulo e %0.1lf", area);
    return 0;
}