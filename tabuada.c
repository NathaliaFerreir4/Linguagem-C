#include <stdio.h>

int main(){
    int x, i, resultado;

    printf("Deseja a tabuada para qual valor?");
    scanf("%d", &x);

    for ( i = 0; i < 10; i++)
    {
        resultado = x * i;
        printf("%d x %d = %d\n", x, i, resultado);
    }
    return 0;
}