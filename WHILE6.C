#include<stdio.h>
#include<conio.h>
void main()
{
  int no,rem,rev=0;
  clrscr();
  printf("Enter no:");
  scanf("%d",&no);
   while(no!=0)
   {
    rem=no%10;
    rev=(rev*10)+rem;
    no=no/10;
   }
   printf("sum of no=%d",rev);
   getch();
   }
