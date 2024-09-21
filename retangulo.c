#include <stdio.h>
#include <math.h>

int main(){
    double base, altura, area, perimetro, diagonal, raiz;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);
    
    area = base * altura;
    perimetro = (base * 2) + (altura * 2);
    raiz = (base * base) + (altura * altura);
    diagonal = sqrt(raiz);

    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}