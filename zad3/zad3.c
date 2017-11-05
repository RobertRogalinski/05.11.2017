#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a,b,c ;
printf("Podaj liczbe a");
scanf("%d" , &a);
printf("Podaj liczbe b");
scanf("%d" , &b);
printf("Podaj liczbe c" );
scanf("%d" , &c );

if(a<=0||b<=0||c<=0)
{printf("Błedne dane\n" );
}
if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
{  printf("Są to liczby pitagorejskie\n" );
}
else
printf("nie są to liczby pitagorejskie\n" );
  return EXIT_SUCCESS;
}
