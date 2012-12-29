#include<stdio.h>
#include<stdlib.h>


int main() {
  int  *mas, a, d, x, p, i;

  scanf("%d", &a);
  
  mas = (int *)malloc(a *sizeof(int));

  printf("\n");

  for (i = 0; i < a; i++) {
    scanf ("%d", & mas[i]);
  }

  printf("\n");

  for(x = 1; x < a; x++) {
    for (i = 0; i <= a - x; i++) {
      if (mas[i] > mas[i + 1]) {
        p = mas[i];
        mas[i] = mas[i + 1];
        mas[i + 1] = p;
      }
    }
  }
  
  for (i = 0 ; i <a; i++) {
    printf ("%d\n", mas[i]);
  }

  printf("\n");

  
  for (i = 0 ; i < a; i++) {
    printf ("%d\n", mas[a - 1 - i]);
  }

  free(mas);
  //getch();
}