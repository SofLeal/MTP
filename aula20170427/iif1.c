
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int c=0, i;
    float n, prob;
    srand(time(0));
    printf ("Entre com uma probabilidade: ");
    scanf ("%f", &prob);
    for (i=0; i<100; i++)
    {
        n=rand()/(float)RAND_MAX;
        if (n < prob)
            c++;
    }
    printf ("Querido usuario %d sao vezes", c);
    return EXIT_SUCCESS;
}




