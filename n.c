#include<stdio.h>
#include<stdlib.h>

struct p
{
  char *name;
  char *a ;
  /* data */
};


int main() {

  int i, h=0;

  struct p s;
  
  s.a = (char *)malloc(1*sizeof(int));

  for (i = 0; ; i++) {
    h++;
    s.a = (char *)realloc(s.a, h*sizeof(int));
    scanf ("%s", &s.a[i]);
    if (s.a [i] == nol) {
      break;
    }
  }
}