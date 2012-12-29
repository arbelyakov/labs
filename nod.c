#include<stdio.h>

int main()
{
  int num, num2; 

  scanf("%d", &num);
  scanf("%d", &num2);

  for (int i = num; i > 0; i--) {
    if (num % i == 0 && num2 % i == 0) {
		  if (i == 1) {
		    printf ("No common divisor!\n");
		  } else {
		    printf ("%d\n", i);
		  }
      break;
    }
  }
}