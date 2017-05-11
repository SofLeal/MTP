#include <stdio.h>
#include <stdlib.h>
int main()
 {
     int vetor[] = {0,1,2,4,8};
     int c = 0, i;
      unsigned char * p;
    p =(unsigned char *)vetor;

     for (i=0; i < sizeof(vetor)  ; i++)

     {

         if(p[i]==0)
            c++;

     }
     printf("%d bytes sao iguais a 0\n", c);


return EXIT_SUCCESS;

}


