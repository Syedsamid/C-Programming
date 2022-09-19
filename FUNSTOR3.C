#include<stdio.h>
#include<conio.h>
  void demo()
  {
   static int a=0;
   a=a+1;
   printf("A=%d\n",a);
  }
  void main()
  {
   int i;
   clrscr();
   for(i=1;i<5;i++)
    {
     demo();
    }
   getch();
  }
