#include <stdio.h>
#include <stdlib.h>

float Vin = 0.0, 
      Vled = 0.0,
      Iled = 0.0,
      R = 0.0;

int main(int argc, char *argv[]){

    printf("LED CALC v1.0\n\n");
    printf("Autor: Nathalia Ribeiro\n\n");

    printf("Digite o valor de Vin(em Volts)");
    scanf("%f", &Vin);
    printf("Digite o valor de Vin(em Volts)");
    scanf("%f", &Vled);
    printf("Digite o valor de Vin(em Volts)");
    scanf("%f", &Iled);

    R = (Vin-Vled)/Iled;

    printf("Vin = %.2f\n\n",Vin);
    printf("Vled = %.2f\n\n",Vled);
    printf("Iled = %.2f\n\n",Iled);
    printf("O resistor para o LED tem o valor de %.2f Ohms\n\n",R);

    system("PAUSE");
    return 0;
}