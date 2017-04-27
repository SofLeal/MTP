

#include <stdio.h>
#include <complex.h>
#include <stdlib.h>

int main () {
    double complex A,  Z;
    double rA, rB, iA;
    printf ("Entre com real A: ");
    scanf("%lf", &rA);
    printf ("Entre com imaginario A: ");
    scanf("%lf", &iA);
    A= rA+ I*iA;

    Z= conj(A);
    printf ("A soma e' %lf + I*%lf\n", creal(Z), cimag(Z));
    printf ("Ou igual a %lf<%lf rad\n", cabs(Z), carg(Z));


    return EXIT_SUCCESS;
}
