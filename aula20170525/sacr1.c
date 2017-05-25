#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int dados(){
     int d=rand()%6+1;
     return d;
 }

 int main(){
     int i, s, d1, d2, d3, d4, d5;
     int v=0;
     srand(time(NULL));
     for (i=0; i<3; i++)
     {
         d1=dados();
         d2=dados();
         d3=dados();
         d4=dados();
         d5=dados();
         s=d1+d2+d3+d4+d5;
         printf("Soma do lancamento %d = %d\n", i+1, s);
         if (s>=18 && s<=23){
            v=v+1;
         printf("\nParabens, vc  ja venceu %d vezes\n", v);
         }
     }
        if (v==0)
        printf("Vc perdeu!!!");
        return EXIT_SUCCESS;
 }
