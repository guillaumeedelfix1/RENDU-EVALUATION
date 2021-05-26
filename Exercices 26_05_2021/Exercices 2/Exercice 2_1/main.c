#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    int tab_int[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int max_int = 0;
    int min_int = 0;


    for (int i = 0; i < 10; i++) {
        if (max_int < tab_int[i])
            max_int = tab_int[i];
        if (min_int > tab_int[i])
            min_int = tab_int[i];
    }
    printf("Max = %d\nMin = %d\n", max_int, min_int);
}
