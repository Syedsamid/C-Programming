#include<stdio.h>
#include<conio.h>
void main()
{
  int a=20,b=10,*p1,*p2;
  clrscr();
  p1=&a,p2=&b;
  printf("\nAddition=%d",*p1 + *p2);
  printf("\nSubtraction=%d",*p1 - *p2);
  printf("\nMultiplecation=%d",*p1 * *p2);
  printf("\nDivision=%d",*p1 / *p2);

  printf("\nIncrement of a=%d",++*p1);
  printf("\nDecrement of b=%d",--*p2);
getch();
}