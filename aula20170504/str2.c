#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NCHAR 256

int main(){
    int i, j=0;
    char frase[NCHAR], aux[NCHAR];
    printf("Digite uma frase: \n");
    fgets(frase, NCHAR, stdin);
    for (i=0; frase[i]; i++)
        frase[i]=toupper(frase[i]);
    if (frase[0]!= ' ')
    {
        aux[j]=frase[0];
        j++;
    }
    for (i=0; frase[i]; i++)
    {
        if (frase[i]== ' ' && frase[i+1] != ' ')
        {
            aux[j]=frase[i+1];
            j++;
        }
    }
    printf ("\nA mensagem secreta e': %s\n", aux);
    return 0;
}
