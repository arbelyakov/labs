#include<stdio.h>
#include<stdlib.h>


struct f {
  char name[50];
  int number;
} tlf[100];


void fname(void) {
  int i;

  for(i = 0; ; i++) {

    if(tlf[i].number == 0) {
      scanf("%s", tlf[i].name);
      break;
    }
  }
}
  
void fnumber(void) {
  int i;

  for(i = 0; ; i++) {

    if(tlf[i].number == 0) {
      scanf("%d", &tlf[i].number);

      printf("\n");

      break;
    }
  }
}

void del (void) {
  int i;

  scanf ("%d", &i);

  printf ("\n");

  tlf[i-1].number = 0;
  tlf[i-1].name[0] = '\0';
}

void fspisok(int t) {
  int a = 0, y = 1, i;

  for (i = 0; i < t; i++) {
    if (tlf[a].number != 0) {
      printf ("%d) name: %s;", t, tlf[a].name);
      printf (" telephon: %d\n", tlf[a].number);
    }
    a++;
    y++;
  }
}


/////////////////////////////////////////////////////////////////////////////////////////


int  main() {
  printf ("1-name and telephon\n2-delite\n3-spisok\n4-exit\n\n");
  
  int n, a = 0, t = 0;

  while (1) {
    scanf ("%d", &n);

    printf ("\n");
  
    if (n == 1) {
      t++;
      fname();
      fnumber();
    }

    if (n == 2) {
      del();
    }

    if (n == 3) {
      fspisok(t);

      printf ("\n");
    }

    if (n == 4) {
      break;
    }
  } 
}
