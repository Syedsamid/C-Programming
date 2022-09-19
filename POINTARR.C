#include<stdio.h>
#include<conio.h>
void main()
{
  int no[5]={5,10,15,20,25},*p,i;
  clrscr();
  p=&no[0];
  printf("\nArry Elements are\n");
  for(i=0;i<=5;i++)
  {
   printf("\n%dstored at %u",*p,p);
   p++;
  }
  p=&no[i];
  printf("\nArry in reverse order\n");
  for(i=1;i<=5;i++)
  {
   printf("\n%d stored at %u",*p,p);
   p--;
  }
getch();
}