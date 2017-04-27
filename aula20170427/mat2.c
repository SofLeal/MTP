#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    double a, b, c, angulo;
    printf("Entre com o lado B ");
    scanf("%lf", &b);
    printf ("Entre com o lado C ");
    scanf ("%lf", &c);
    printf ("Entre com o angulo entre os lados do triangulo: ");
    scanf ("%lf", &angulo);
    a = sqrt ((b*b) + (c*c)- 2*(b*c)*cos(angulo));
    printf ("%lf", a);
    return EXIT_SUCCESS;

}

