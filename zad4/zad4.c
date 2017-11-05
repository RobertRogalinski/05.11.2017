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
{
  printf("Błedne dane\n" );
return 1;
}

int x=(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a);
switch(x)
 {
case 1: printf("jest to liczba pitagorejska\n" ); break;
case 0 :printf("nie jest to liczba pitagorejska\n" ); break;
}

  return EXIT_SUCCESS;
}
