#include<stdio.h>
#include<conio.h>
void main()
{
  int a=7;
  clrscr();
  while(a>=0)
  {
   if (a==3)
   {
    a--;
    continue;
   }
   printf("%d\n",a);
   a--;
  }
getch();
}