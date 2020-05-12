#include <stdio.h>

int main()
{
    int eceb[10], dlbd[10], npzp, byni;

    npzp=0;
    byni=0;
    while( 1 )
    {
        if(!( byni<10)) break;
        scanf("%d", &eceb[byni]);
        scanf("%d", &dlbd[byni]);
        npzp = (eceb[byni]*dlbd[byni]) + npzp;
        byni++;
    }

    printf("%d", npzp);
}
