#include<stdio.h>


int main()
{
	int f;
	
	for (f = 0; f <= 300; f = f + 20) {
		printf ("%4d %6.1f\n", f, (5.0/9.0)*(f-32.0));
	}
}
