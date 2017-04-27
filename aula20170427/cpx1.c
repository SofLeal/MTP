
#include <stdio.h>
#include <complex.h>
#include <stdlib.h>

int main () {
    double complex A, B, Z;
    double rA, rB, iA, iB;
    printf ("Entre com real A: ");
    scanf("%lf", &rA);
    printf ("Entre com real B: ");
    scanf("%lf", &rB);
    printf ("Entre com imaginario A: ");
    scanf("%lf", &iA);
    printf ("Entre com imaginario B: ");
    scanf("%lf", &iB);
    A= rA+ I*iA;
    B= rB+ I*iB;
    Z= A+B;
    printf ("A soma e' %lf + I*lf\n", creal(Z), cimag(Z));
    printf ("Ou igual a %lf<lf rad\n", cabs(Z), carg(Z));


    return EXIT_SUCCESS;
}
