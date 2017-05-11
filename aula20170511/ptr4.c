
#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, y, s;
    printf ("Digite 2 numeros reais: \n");
    scanf ("%f %f", &x, &y);
    unsigned char *p;
    printf("Endereco do numero x: %p|Conteudo: %.0f\n", &x, x);
    printf("Endereco do numero y: %p|Conteudo: %.0f\n", &y, y);
    s=x+y;
    printf("Endereco da soma: %p|Conteudo: %.0f\n", &s, s);
    return EXIT_SUCCESS;
}
