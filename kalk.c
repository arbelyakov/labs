#include<stdio.h>


int main()
{
	int a;
	
	scanf ("%d", &a);
	
	kalk (a, i, 0);
}



 int  kalk (int a, int b)
{
	
//	scanf ("%c", z(z));
	scanf ("%d", &b);
	


	if (z == '-') {
		printf("result = %d\n", a = a-b); 
	} else if (z == '+') {
		printf("result = %d\n", a = a+b);
	} else if (z == '*') {
		printf("result = %d\n", a = a*b);
	} else if (z == '/') {
		printf("result = %d\n", a = a/b);
	} else return 0;

	return kalk (a, z, b);
}


		
	
	
