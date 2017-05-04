
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define NCHAR 256
int main()
{
   int i, op;
   char frase[NCHAR];
   printf ("Entre com uma frase: \n");
   fgets (frase, NCHAR, stdin);
   printf ("Digite 1 para frase em maiusculo e 2 para frase em minusculo");
   scanf("%d%", &op);
   if (op==1)
   {

       for(i=0; i< NCHAR; i++)
        frase[i]=toupper(frase[i]);
       for (i=0; i< NCHAR; i++)
       {

           if (frase[i] == 'A')
            frase [i] = '4';
           if (frase[i] == 'E')
            frase [i] = '3';
            if (frase[i] == 'I')
            frase [i] = '1';
            if (frase[i] == 'O')
            frase [i] = '0';
            if (frase[i] == 'S')
            frase [i] = '5';
            if (frase[i] == 'G')
            frase [i] = '6';
       }
   }
   else
    {
    if(op==2)
    {
        for (i=0; i < NCHAR; i++)
            frase[i] = tolower(frase [i]);
            for (i=0; i< NCHAR; i++)
       {

           if (frase[i] == 'a')
            frase [i] = '4';
           if (frase[i] == 'e')
            frase [i] = '3';
            if (frase[i] == 'i')
            frase [i] = '1';
            if (frase[i] == 'o')
            frase [i] = '0';
            if (frase[i] == 's')
            frase [i] = '5';
            if (frase[i] == 'g')
            frase [i] = '6';
       }

    }
   }

   printf("%s", frase);
   return 0;


   }


