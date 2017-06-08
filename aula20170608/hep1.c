#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media(float *vetor, int qtd){
    int i;
    float s=0.f;
    for (i=0; i<qtd; i++)
            s=s+vetor[i];
    return s/qtd;
}

float desvio(float *vetor, int qtd){
    int i;
    float m=media(vetor, qtd), soma=0.f;
    for (i=0; i<qtd; i++)
        soma+=pow(vetor[i]-m, 2);
        return sqrt((1.f/(qtd-1))*soma);
}

int main(){
    float *v;
    int q, i;
    printf("Quantos numeros deseja entrar: ");
    scanf("%d", &q);
    v=(float *)malloc(q*sizeof(float));
    for (i=0; i<q; i++){
        printf("Elemento [%d]: ", i);
        scanf("%f", &(v[i]));
    }
    printf("Media= %f\n", media(v, q));
    printf("Desvio= %f\n", desvio(v, q));
    free(v);
    return EXIT_SUCCESS;
}
