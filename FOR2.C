#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  printf("Here are squares and cubes");

  for(n=0;n<=10;n++)
  {
   printf("\n%d",n*n);
   printf("\t%d",n*n*n);
  }
getch();
}