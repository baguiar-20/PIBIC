#include<stdio.h>
#include<stdlib.h>

int main ()
 {
   int i, n;
   int vet[100];

   
   scanf("%d", &n);

   for (i=0; i<n; i++){
      scanf("%d", &vet[i]);
   }


   for (i=n-1; i>=0; i--)
      printf(" %d", vet[i]);

   
   return 0;
}
