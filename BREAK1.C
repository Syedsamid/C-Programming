#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  printf("\n No from 1 to 10\n");
  for(n=1;n<=10;n++)
  {
   printf("%d\n",n);
   if(n==4)
   break;
  }
  printf("Loop commited");
getch();
}
