#include <stdio.h>
main()
{
    int n = 543;
    int p = 5;
    float x = 34.5678;
    printf("A : %d %f\n",n,x);
    printf("B : %4d %10f\n",n,x);
    printf("C : %2d %3f\n",n,x);
    printf("D : %10.3f %10.3e\n",n,x);
    printf("E : %*d\n",p,n);
    printf("f : %*.*f\n",12,5,x);

}
