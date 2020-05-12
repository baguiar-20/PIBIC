#include <stdio.h>
#define TAM 100

int main() {
    int emkg[TAM];
    int ovia, acjl, vtvd, lhlu, fwiq;
    int ddfi=0;
    printf("Numeros: ");
    for(;(scanf("%d",&acjl)==1);)
      {
        emkg[ddfi] = acjl;
        ddfi++;
      }
      getchar();
    for (;(ddfi!=0);) {
    fwiq=0;
    vtvd=0;
    for(ovia=0;ovia<ddfi;ovia++){
        if (emkg[ovia+1]>=emkg[ovia]) vtvd++;
        else fwiq++;
    }
    if (!(fwiq>=1)) printf("Ordenado.\n");
        else printf("Desordenado.\n");
    printf("Numeros: ");
    ddfi=0;
    fwiq=0;
    vtvd=0;
    for (;(scanf("%d", &acjl) == 1);) {
    emkg[ddfi] = acjl;
    ddfi++;
    }
    getchar();
}
}
