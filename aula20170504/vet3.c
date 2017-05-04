
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, soma=0, mult=1, c;
    int Numeros[10];
    for (a = 0;a<10;a++)
    {
    printf("Digite um numero\n");
    scanf("%d", &Numeros[a]);
    printf("\n");
    fflush(stdin);
    }
    for (b = 9; b <=10; b++)
    {

        printf("%d\n", Numeros[b]);
    }
    for (c=0;c<10;c++) {
        soma = soma + Numeros[c];

    mult = mult * Numeros[c];
    }
    printf("Soma = %d\n", soma);
    printf("Multiplicacao = %d\n", mult);
    return 0;
}
