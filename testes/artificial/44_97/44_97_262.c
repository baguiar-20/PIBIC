#include <stdio.h>

int main()
{
	int n, i,  vet[1000];
	scanf ("%d", &n);
	for (i=1;i<=n;i++) {
		scanf ("%d", &vet[i]);
	}
	for (i=n;i>=1;i--) {
		printf ("%d ", vet[i]);
	}
		
	return 0;
}

