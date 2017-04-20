
#include <stdio.h>

int main()
{
    int b, p, r, i;
    printf ("Digite a base da potencia e o expoente: ");
    scanf ("%i %i", &b, &p);
    r=1;
    for (i=1; i<=p; i++)
        r=r*b;
    printf ("O resultado da potencia e': %i\n", r);

    return 0;
}
