#include <stdio.h>
int main() {
int h;
int b;
printf("podaj wysokośc h" );
scanf("%d", &h );
printf("podaj długosc b" );
scanf("%d", &b );

if (h<0)
{printf("Źle dobrana wysokość\n" );
return 1;
}
 else if (b<0)
 {printf("zła dobrana szerokość\n" );
return 1;
}
else
{
  for(int i=1; i<=h; i++)
  {
    putchar('\n');
  for(int i=1; i<=b; i++)
{
  putchar('*');
}

}
    putchar('\n');  }

  return 0;
}
