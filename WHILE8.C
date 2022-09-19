#include<stdio.h>
#include<conio.h>
void main()
{
  int n,sum=0;
  clrscr();
  printf("Enter number from 1 to 20\n");

  n=1;
  while(n<=20)
  {
  sum=sum+n;
  printf("%d\n",n);
  n++;
  }
  printf("\nSum=%d",sum);
  getch();
  }