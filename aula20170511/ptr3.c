#include <stdio.h>
#include <stdlib.h>
int main()
 {
     int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
     int c, i;
      unsigned char * p;
    p =(unsigned char *)vetor;

     for (i=0; i < sizeof(vetor)  ; i++)

     {

         if(p[i]==255)
            c++;

     }
     printf("%d bytes sao iguais a 1\n", c);


return EXIT_SUCCESS;

}



