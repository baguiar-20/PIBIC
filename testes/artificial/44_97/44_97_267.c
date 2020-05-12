#include <stdio.h>


int main(){
    int list[10] , n , i;	
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
		scanf("%d",&list[i]);
		
	
	for(i = n; i >= 1; i--)
	   printf("%d ", list[i]);
	   	
return 0;
}
