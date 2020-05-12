#include <stdio.h>

int main()
{
    int A[10], B[10], p, i;

    p=0;
    for(i=0; i<10; i++)
    {
        scanf("%d", &A[i]);
        scanf("%d", &B[i]);
        p = (A[i]*B[i]) + p;
    }

    printf("%d", p);
}
