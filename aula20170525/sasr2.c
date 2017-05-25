#include <stdio.h>
#include <stdlib.h>

void par(int n){
    int i;
    printf ("\nNumeros pares: ");
    for (i=1; i<=n; i++)
        if (i%2==0)
        printf ("%d ", i);
}

void impar(int n){
    int i;
    printf ("\nNumeros impares: ");
    for (i=1; i<=n; i++)
        if (i%2!=0)
        printf ("%d ", i);
}

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    par(n);
    impar(n);
    return EXIT_SUCCESS;
}
