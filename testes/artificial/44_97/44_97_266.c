#include <stdio.h>


int main(){
    int uhgy[10] , uqhi , oexi;	
	
	scanf("%d", &uqhi);
	
	oexi = 1;
	while(1){
		if(!( oexi <= uqhi)) break;
		scanf("%d",&uhgy[oexi]);
		oexi++;
	}
	
	
	oexi = uqhi;
	while(1){
		if(!( oexi >= 1)) break;
		printf("%d ", uhgy[oexi]);
		oexi--;
	}
	   	
return 0;
}
