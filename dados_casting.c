#include <stdio.h>

int main()
{
    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;
    printf("%lf\n", area);

    int a, b, resultado;
    a = 5;
    b = 2;
    resultado = a / b;
    printf("%d\n", resultado);

    double c;
    int d;
    c = 5.0;
    d = c;
    printf("%d\n", d);

    return 0;
}