#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NCHAR 256

int main (){
 int i, c=0;
 char frase [NCHAR];
 printf ("Digite uma frase: ");
 fgets (frase, NCHAR, stdin);
 for (i=0; frase[i]!='\0'; i++)
if (isalpha(frase[i]))
    c++;
printf ("O numero de caracteres e: \n%d", c);
return EXIT_SUCCESS;
}

