#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

	char apdh[200];
	int dygr, ctsl, irbp;
	
	scanf("%s", apdh);
	
	do{
		irbp = 0;
		ctsl = 0;
		dygr=0;
		while(1){
		
			if(!(dygr<strlen(apdh))) break;		
			if (apdh[dygr] == '+' || apdh[dygr] == '-' || apdh[dygr] == '*' || apdh[dygr] == '/')
				ctsl++;
			else if (apdh[dygr] == '(' || apdh[dygr] == ')' || apdh[dygr] == '[' || apdh[dygr] == ']')
				continue;
			else
				irbp++;		
			dygr++;
		}
		
		if(!(irbp == ctsl+1))
			printf("NAO\n");
		else
			printf("SIM\n");
	
		scanf("%s", apdh);
	}while(strcmp(apdh, "END"));



	return 0;
}
