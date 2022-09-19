#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  printf("no\tsquare\tcube\n");

  for(n=1;n<=10;n++)
  {
   printf("%d\t%d\t%d\n",n,n*n,n*n*n);
  }
  getch();
  }

