#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int num;
    scanf("%i", &num);
    printf("%d", num+rand()%10);

    return 0;

}
