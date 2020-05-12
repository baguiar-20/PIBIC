#include <stdio.h>
#include <stdlib.h>

int main (){
 int n, vet[999], i;
 scanf("%d", &n);
 for(i=1;i<=n;i++){
    scanf("%d",&vet[i]); 
 } 
 for(i=n;i>=1;i-=1){
 printf("\n %d \n", vet[i]);
 }
 return 0;
}
