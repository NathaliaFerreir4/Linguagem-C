#include <stdio.h>
#include <string.h>

int main(){
    
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    idade = 20,
    salario = 5800.5;
    genero = 'F';
    altura = 1.63;
    strcpy(nome, "Maria");

    printf("idade =  %d\n", idade);
    printf("Salario = %.21f\n", salario);
    printf("altura = %.21f\n", altura);
    printf("Genero = %c\n", genero);
    printf("nome = %s\n", nome);

    return 0;
}