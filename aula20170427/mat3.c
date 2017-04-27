
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
double a, b, l;
printf("Digite um numero e a base para ser calculado o log:  ");
scanf ("%f", &a);
scanf ("%f", &b);
l = log(a)/log(b);
printf ("O log e : %lf\n", l);
return EXIT_SUCCESS;
}
