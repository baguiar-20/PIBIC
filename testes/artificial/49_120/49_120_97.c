#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main ()
{
     int i, mult=0, result=0, n[MAX], m[MAX];


     for(i = 0; i < MAX; i++) //LEITURA DA MATRIZ
     {
          //printf("Informe o valor da posição %d do vetor N:\n", i);
          scanf("%d", &n[i]);
     }

       for(i = 0; i < MAX; i++) //LEITURA DA MATRIZ
     {
          //printf("Informe o valor da posição %d do vetor M:\n", i);
          scanf("%d", &m[i]);
     }

     for(i=0;i<MAX;i++)
     {
               mult = n[i]*m[i];
               result = result + mult;
     }

     printf("%d", result);


}
