#include <stdio.h>
int main(){
int fatorial, numero;
printf("Entre com um numero inteiro: ");
scanf ("%d", &numero);
for(fatorial=1; numero>1;
    fatorial=fatorial*numero, numero--);
    printf("Fatorial: %d\n", fatorial);
    return 0;

}
