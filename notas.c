#include <stdio.h>

int main(){

    double nota1, nota2, nota;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    nota = nota1 + nota2;

    if (nota < 60.00){
        printf("NOTA FINAL = %.1lf", nota);
        printf("\nREPROVADO");
    }else{
        printf("NOTA FINAL = %.1lf", nota);
    }

    return 0;
}