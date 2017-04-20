#include <stdio.h>
int main(){
    char palavra[256];
    scanf("%s",&palavra);
    int i = 0;
    while(palavra[i]!='\0')
    {
        i++;
    }
    printf("A palavra tem %d caracteres", i);
    return 0;



}

