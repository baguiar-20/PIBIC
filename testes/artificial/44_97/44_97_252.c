#include<stdio.h>

int main(){
    
    int i, n;
    int vetor[20];
    
    scanf("%d",&n);
    
    for (i=1; i<=n; i++)
    {scanf("%d",&vetor[i]);
        
        }
    for (i=n ; i>=1 ;i--)
    {
        printf ("%d ",vetor[i]);
        }
        return 0;
}
