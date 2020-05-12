#include <stdio.h>


int main(int argc, char *argv[]) {

  int *jdsi = fopen(argv[1], "rb"); // Abre arquivo

  int flsi,gdsr;

    for(; ( fread(&flsi, sizeof(int),1,jdsi) == 1  ) ; )
    {
       printf("%d\n",flsi);
    }

   fclose(jdsi);
   return 0;

}
