#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define NCHAR 256
int main()
{
   int i;
   char frase[NCHAR];
   printf ("Entre com uma frase: \n");
   fgets (frase, NCHAR, stdin);
   frase [strlen (frase)-1]= '\0';
   for(i=0; i <NCHAR; i++)
    frase[i]= toupper(frase[i]);
   printf("Tamanho da string: %u\n", strlen(frase));

    if (strncmp(frase, "BOM DIA", 7)== 0)


    printf("Bom dia pra voce tambem\n");
    else
        printf("Voce quis dizer : &s?",frase);
    return 0;
}







