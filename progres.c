#include<stdio.h>
//#include "math.h"

int main()
{
	int n1, q, n;

	printf("n1 = ");
	scanf("%d", &n1);

	printf("q = ");
	scanf("%d", &q);

	printf("n = ");
	scanf("%d", &n);

	int i, pw = q;
	for(i = 1; i < n; i++) {
		pw = pw * q;
	}
		
	printf("result = %d\n", n1 * ((1 - pw) / (1 - q)));
}