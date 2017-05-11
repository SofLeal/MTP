#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000
int main()
{
    srand(time(NULL));
    int i, c = 0 , numero;
    int vetor[N];
    unsigned char * p;
     for( i = 0; i <  N ; i++) vetor [i] = rand ();
    p =(unsigned char *)vetor;
    printf ("Querido usuario, escolha um numero entre 0 e 255\n\n");
    scanf ("%d", &numero);
     for (i = 0; i < sizeof(vetor)  ; i++)
        if(p[i]== numero){
            c++;
            printf("Em %p, temos %d\n", p+i, p[i]);
            }

     printf("%d bytes sao %d entre %p e %p\n", c, numero, p, p+sizeof(vetor));
    return EXIT_SUCCESS;
}
