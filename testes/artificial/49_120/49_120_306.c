#include<stdio.h>
void main()
{
    int a[10],b[10],i,soma;
    for(i=0;i<10;i++)
    {
            scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
            scanf("%d",&b[i]);
    }
    soma=0;
    for(i=0;i<10;i++)
    {
         soma = soma + (a[i]*b[i]);
    }
    printf("%d",soma);
}
