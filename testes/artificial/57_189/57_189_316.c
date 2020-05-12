#include<stdio.h>

int main(){

  int agnx[20], pmqn[10], yzup[10],wnaw,jxdq=0,oigr=0,otor=0;
  int expAdriaMenezes1;

    while(jxdq<10){
        scanf("%d", &pmqn[jxdq]);
        jxdq++;
    }
    jxdq=0;
    while(jxdq<10){
        scanf("%d", &yzup[jxdq]);
        jxdq++;
    }

    jxdq=0;
    while(jxdq<10){
        agnx[jxdq] = pmqn[jxdq];
        jxdq++;
    }
    jxdq=0;
    while(jxdq<10){
        agnx[jxdq+10] = yzup[jxdq];
        jxdq++;
    }
    jxdq=20;
	oigr=0;
	while(1){
		if(!(oigr<jxdq)) break;
		otor=oigr+1;
		while(1){
		    if(!(otor<jxdq)) break;
			expAdriaMenezes1 = (agnx[oigr]>agnx[otor]);
			if(expAdriaMenezes1 == 1){
				wnaw=agnx[oigr];
                agnx[oigr]=agnx[otor];
                agnx[otor]=wnaw;
				otor++;
			}
 		}
		jxdq++;
	}
    while(jxdq<20){
        printf("%d ",agnx[jxdq]);
        jxdq++;
    }
}
