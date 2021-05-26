#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int taille = 50;
    int tab_int[taille];
    int max_int = 0;
    int min_int = 0;

    for (int i = 0; i < taille; i++)
        tab_int[i] = i;
    for (int i = 0; i < taille ; i++) {
        if (max_int < tab_int[i])
            max_int = tab_int[i];
        if (min_int > tab_int[i])
            min_int = tab_int[i];
    }
    printf("Max = %d\nMin = %d\n", max_int, min_int);
    }

