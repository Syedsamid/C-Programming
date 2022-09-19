#include<stdio.h>
#include<conio.h>
void main()
{
  int n,sum=0;
  clrscr();
  printf("\n1 to 10 numbers\n");
  n=1;
  while(n<=10)
  {
   printf("%d\n",n);
   sum=sum+n;
   n++;
   }
   printf("\nsum=%d",sum);
   getch();
   }