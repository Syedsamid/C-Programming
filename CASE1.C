#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();

  printf("Enter number");
  for(n=1;n<=10;n++)
  {
   printf("\t%d",n*n);
  }
getch();
}