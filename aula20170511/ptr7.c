
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NCHAR 256

int main(){
    int i, *p;
    char frase[NCHAR];
    int opc;
    long long int
    prinf ("1- Criptografar\n");
    prinf ("2- Descriptografar\n");
    scanf ("%d", &opc); getchar();
    if(opc== 1) {
            for(i=0; i< NCHAR; i++)
            frase[i]= '\0';
             printf ("Digite uma frase: \n");
    fgets (frase, NCHAR, stdin);
     printf ("Criptografando\n");
     p = (long long int *) frase;
     for (i=0; i<sizeof(frase)/ sizeof (long long int); i++)
        printf ("ll%d ", p[i]);

    fgets (frase, NCHAR, stdin);
    return EXIT_SUCCESS;

    }
    if(opc==2){
            return EXIT_SUCCESS;
    }

    return EXIT_FAILURE;
}
