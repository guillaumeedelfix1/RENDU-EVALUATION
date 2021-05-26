#include <stdio.h>
#include <stdlib.h>


    int f1(int nb)
{
    nb++;
    return (nb);
}

void main(void)
{
    int j = 0;

    for (int i = 0; i < 100; i++)
        j = f1(j);
    if (j = 10)
        printf("%d\n", j);
    if (j = 100)
        printf("%d\n", j);
    if (j = 1000)
        printf("%d\n", j);
    if (j = 10000)
        printf("%d\n", j);
    if (j = 100000)
        printf("%d\n", j);
}

