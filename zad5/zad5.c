#include <stdio.h>

int main() {
  int a,b;
  printf("Podaj a");
  scanf("%d" , &a  );
  printf("Podaj b" );
  scanf("%d" , &b);

  a>b ? printf("a>b\n") : printf("a<b\n");

  return 0;
}
