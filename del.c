#include <stdio.h>
#include <math.h>


int main() {
	int num, i; 
	
  scanf("%d", &num);
	
  for (i = 1; i < num; i++) {
		if (num % i == 0) {
			printf("%d\n  %d\n", i, num / i);
      if (i < sqrt(num)) break;
		}
	}
}
