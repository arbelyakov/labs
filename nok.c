#include<stdio.h>

int main()
{
	int n1, n2, i;

	scanf("%d", &n1);
	scanf("%d", &n2);


	for (i = n1; i <= n1 * n2; i++) {
		if (i % n1 == 0) {
			if (i % n2 == 0) {
				break;
			}
		}
	}
	
	printf("%d\n", i);

}