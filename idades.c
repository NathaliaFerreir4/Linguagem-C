#include <stdio.h>

int main(){

    char nome1[50], nome2[50];
    double media, idade1, idade2;

    printf("Nome da primeira pessoa: ");
    scanf("%s", &nome1);
    printf("Idade da primeira pessoa: ");
    scanf("%lf", &idade1);
    printf("Nome da segunda pessoa: ");
    scanf("%s", &nome2);
    printf("Idade da segunda pessoa: ");
    scanf("%lf", &idade2);

    media = (idade1 + idade2) / 2.0;

    printf("A idade media de %s e %s e de %.1lf anos", nome1, nome2, media);

    return 0;

}