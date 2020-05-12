#include <stdio.h>

main(){
	int eesn,jznk,lizk,vqfy=0;
	int wzct[15];
	int expAdriaMenezes;
	eesn=0;
	while (1){
		if(!(eesn<15)) break;
		scanf("%d",&wzct[eesn]);
		eesn++;
	}
	scanf("%d",&lizk);
	eesn=0;
	while (1){
		if(!(eesn<15)) break;
		expAdriaMenezes = (wzct[eesn]==lizk);
		if (expAdriaMenezes==1)
			vqfy=eesn+1;
		eesn++;
	}
	printf("%d",vqfy);
}
