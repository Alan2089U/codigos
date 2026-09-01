#include <stdio.h>
int main(){
    double n1;
    double n2;
    double n3;
    double v;
    double m;
    double v1;
    
    printf("Digite a primeira: ");
    scanf("%lf", &n1);
    printf("Digite a segunda: ");
    scanf("%lf", &n2);
    printf("Digite a terceira: ");
    scanf("%lf", &n3);
    v1 = n1 + n2;
    v = v1 + n3;
    m = v / 3;
    if (m > 10){
        printf("Nota invalida");
    }else{
    printf("A media final deu %0.1lf", m);
    }
    return 0;
}