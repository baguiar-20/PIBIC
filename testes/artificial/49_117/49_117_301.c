#include <stdio.h>
#include <math.h>
int main() {
    int potencia,base,expo,i,cont,x;   
    scanf("%d",&base);    
    scanf("%d",&expo);
    
    if (base%i==0) {
    potencia=pow(base,expo);  
}  
    
for (i=1; i<=potencia; i++) {
if (potencia%i==0) 
cont=cont+1;
x=cont;
}

if (x==0)
printf("potencia prima");
else
printf("nao potencia prima");
    
 
}



