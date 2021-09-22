#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int n;
	int A[n];
	int i;
	printf("Give a number\n");
	scanf("%d", &n);
	
	A[0] = 3;
	for(i = 0; i < n; i++) {
		printf("%d\n", A[i]);
	}
	
	return 0;
}
