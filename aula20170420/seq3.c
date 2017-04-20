#include <stdio.h>
int main()
{
    float A, B, C, D, E, media;
    printf("Informe as notas A B C D E do aluno, que vao de 0-10 ");
    scanf("%f %f %f %f %f", &A,&B,&C,&D,&E);
    media= (2*A+2*B+2*C+3*D+5*E)/14;
    printf("A media do aluno e %g", media );
    return 0;


}
