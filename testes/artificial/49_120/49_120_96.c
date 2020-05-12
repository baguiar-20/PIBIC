#include <stdio.h>

int main(void){
	
	int npwn[10],jyzf[10],lhfh,nfny;

	nfny=0;
    while(1){
        
		if(!(nfny<10)) break;	
	
		scanf("%d",&npwn[nfny]);
		
		nfny++;
	}
	
	nfny=0;
    while(1){
    
		if(!(nfny<10)) break;	
	
		scanf("%d",&jyzf[nfny]);
		
		nfny++;
	}
	
	nfny=0;
    while(1){
       
		if(!(nfny<10)) break;	
	
		lhfh+= npwn[nfny]* jyzf[nfny];
		
		nfny++;
	}
	
	printf("%d",lhfh);
	
	return lhfh;
	
}
