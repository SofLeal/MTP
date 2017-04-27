#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    float P1x, P1y, P2x, P2y, distancia;
    printf("Entre com a coordenada x de p1: ");
    scanf("%f", &P1x);
    printf ("Entre com a coordenada y de p1: ");
    scanf ("%f", &P1y);
    printf ("Entre com a coordenada x de p2: ");
    scanf ("%f", &P2x);
    printf ("Entre com a coordenada y de p2: ");
    scanf ("%f", &P2y);
    distancia = sqrt (pow(P2x-P1x, 2) + pow(P2y-P1y, 2));
    printf ("%f", distancia);
    return EXIT_SUCCESS;

}
