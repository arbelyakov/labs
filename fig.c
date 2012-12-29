#include<stdio.h>

void  fib (long n,  long a,  long b) 
{
	printf("%ld = %ld \n", n, a + b);

	if (n < 500) {
		fib(n + 1, a + b, a);
	}
}





int main() 
{ 
	fib (1,1,0)
	getch ();
}
	
	/*while (n < 500) {
	 	printf("%ld = %ld\n", n, a + b);
	 	n = n + 1;
	 	b1 = b;
	 	b = a + b;
	  	a = b1;
	}*/




