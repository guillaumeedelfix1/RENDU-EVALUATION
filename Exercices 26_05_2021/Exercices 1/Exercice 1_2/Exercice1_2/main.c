#include <stdio.h>
#include <stdlib.h>


int n=5;
main()
{
   void fct (int p) ;
   int n=3 ;
   fct(n) ;
}
void fct(int p)
{
    printf ("%d %d, n, p") ;
}
/*Le programme affiche "11473904 11485712, n, p" lors de son run*/
