#include <stdio.h>

int main(){
    int n, i;

    printf("Quantos numeros voce ira digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (i = 0; i < n; i++){

        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nNumeros digitados:\n");
    for (  i = 0; i < n; i++)
    {
        printf("%.1lf\n", vet[i]);
    }
    

    return 0;
}