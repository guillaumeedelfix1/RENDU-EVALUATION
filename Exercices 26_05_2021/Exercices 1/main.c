#include <stdio.h>
#include <stdlib.h>

/*(1)*/


static int f3(int nb)
{
    for (int i = 0; i < nb; i++)
        write(1, "bonjour", 7);
    return (0);
}

static void f2(int nb)
{
    for (int i = 0; i < nb; i++)
        write(1, "bonjour", 7);
}

static void f1(void)
{
    write(1, "bonjour", 7);
}

int main(void)
{
    f1();
    f2(2);
    f3(2);
    return (1);
}

