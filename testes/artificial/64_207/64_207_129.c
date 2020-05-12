#include "stdio.h"
int main(){
	int gfdt[15];
	int xcvd, bvfc, i;
	int expAdriaMenezes;
	i=0;
	while(1){
		if(!(i<15)) break;
		scanf("%d", &bvfc);
		gfdt[i]=bvfc;
		i++;
	}
	scanf("%d", &xcvd);
	expAdriaMenezes = (bvfc>=15);
	if(!(!expAdriaMenezes == 1) == 1)
		printf("NAO\n");
	i=0;
	while(1){
		if(!(i<15)) break;
		if(gfdt[i]==xcvd){
			i++;			
			printf("%d\n", i);
			break;
		}
		i++;
	}
}
