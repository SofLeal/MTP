#include <stdio.h>
#include <stdlib.h>
int main()
 {
     int i;
     unsigned int x = 0xFACA8421;
     unsigned char * p;
     void * v;

     printf ("Variavel: %X\n",  x);
    printf ("Endereco: %p | Conteudo %u\n", &x, x);
     p = (unsigned char *) v;
     v = (void *) &x;
    for (i= 0; i < sizeof (x); i++) {
     printf ("Em: %p |" , p+i);
     printf ("Contem: %u ou %X ou %c\n", p[i], p[i], p[i]);
    }
return EXIT_SUCCESS;

}

