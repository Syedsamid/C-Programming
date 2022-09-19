#include<stdio.h>
#include<conio.h>
  int max=100;
  void fun1()
   {
    max=max+25;
    printf("\nmax=%d",max);
   }
  void fun2()
  {
   max=max+50;
   printf("\nmax=%d",max);
  }
  void main()
  {
   max=max-25;
   clrscr();
   fun1();
   fun2();
   max=max+50;
   printf("\nmax=%d",max);
   getch();
  }

