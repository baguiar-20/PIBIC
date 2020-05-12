#include <stdio.h>
#include <stdlib.h>

int main (){
 int nhbg, kwyh[999], gftv;
 scanf("%d", &nhbg);
 gftv=1;
 while (1) {
 if(!(gftv<=nhbg)) break;
 scanf("%d",&kwyh[gftv]);
 gftv++;
 } 
 gftv=nhbg;
 while (1) {
 if(!(gftv>=1)) break;
 printf("\n %d \n", kwyh[gftv]);
 gftv-=1;
}
 return 0;
}
