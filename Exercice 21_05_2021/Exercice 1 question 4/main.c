#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*Exercice 1 (4):*/
    int n=10,p=5,q=10,r;
    r = n == (p=q);
    printf("A : n = %d p = %d q = %d r = %d\n",n,p,q,r);
    n = p = q = 5;
    n += p +=q;
    printf("B : n = %d p = %d q = %d r = %d\n",n,p,q,r);
    q = n <p ? n++ : p++ ;
    printf("C : n = %d p = q %d = %d\n",n,p,q);
    q = n > p ? n++ : p++ ;
    printf("D : n = %d p = %d q = %d\n",n,p,q);

/*Resultat
A : n = 10 p = 10 q = 10 r = 1
B : n = 15 p =10 q = 5 r = 1
C : n = 15 p = q 11 = 10
D : n = 16 p = 11 q = 15*/





}
