#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
    char *texto= NULL;
    char c;
    int len=0;
    printf("Digite um texto, e para sair digite '\\'+ENTER: \n");
    do{
        c=getchar();
        len++;
        texto =(char*)realloc(texto, len*sizeof(char));
        texto[len-1]=toupper(c);
    } while (c!= '\\');
    texto[len-1]='\0';
    printf("\n*************************\n\n");
    printf ("%s", texto);
    return 0;
}
