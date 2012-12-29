#include<stdio.h>
#include<stdlib.h>


int main() {
  int  *mas, a = 0, d, x, p, i;
  
  mas = (int *)malloc(a*sizeof(int));

  printf("\n");

  for (i = 0; ; i++) {
    a++;
    mas = (int *)realloc(mas, a*sizeof(int));
    scanf ("%d", &mas[i]);
    if (mas [i] == 0) {
      break;
    }
  }

  printf("\n");

  for(x = 1; x < a; x++) {
    for (i = 0; i <= a - x; i++)
    {
      if (mas[i] > mas[i + 1]) {
        p = mas[i];
        mas[i] = mas[i + 1];
        mas[i + 1] = p;
      }
    }
  }
  
  for (i = 0 ; i < a; i++) {
    printf ("%d\n", mas[i]);
  }

  printf("\n");

  for (i = 0 ; i < a; i++) {
      printf ("%d\n", mas[a - 1 - i]);
  }

  free(mas);
  //getch();
}