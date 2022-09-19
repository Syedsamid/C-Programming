#include<stdio.h>
#include<conio.h>
  void fun1()                            //local varible(auto)
  {
   int x=10;
   clrscr();
   printf("\nx=%d",x);
  }
  void fun2()
   {
    int x=100;
    printf("\nx=%d",x);
   }
  void main()
  {
   int x=1000;
   fun1();
   fun2();
   printf("\nx=%d",x);
   getch();
  }