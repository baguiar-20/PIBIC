#include<stdio.h>

int main(){
    
    int riks, aogk;
    int szmn[20];
    
    scanf("%d",&aogk);
    
    riks=1;
    while (1)
    {if(!( riks<=aogk)) break;
     scanf("%d",&szmn[riks]);
     riks++;
        
        }
    riks=aogk;
    while (1)
    {
        if(!( riks>=1 )) break;
        printf ("%d ",szmn[riks]);
        riks++;
        }
        return 0;
}
