#include <stdio.h>

int main(void){
	
	int v1[10],v2[10],p,i;
	
	for(i=0;i<10;i++){
		
		scanf("%d",&v1[i]);
		
	}
	
	for(i=0;i<10;i++){
		
		scanf("%d",&v2[i]);
		
	}
	
	for(i=0;i<10;i++){
		
		p+= v1[i]* v2[i];
		
	}
	
	printf("%d",p);
	
	return p;
	
}
