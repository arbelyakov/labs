#include <stdio.h>

int main() {
	int i, n, l = 1; 

	for (i = 3; i > 0; i++) {
		for (n = 2; n <= i; n++) {
		 	if (i % n == 0) {
		 		break;
		 	}
		} 

	  if (n >= i) {
			printf("%3d) %d\n", l, i);
			l++;
		}
		
		if (l > 15) { 
			break;
		}
	}
}