#include<stdio.h>
#include<conio.h>
  float inch(float c)
  {
   return c*0.394;
  }
  float foot(float c)
  {
   return c/30.48;
  }
  void main()
  {
   float i,cm,f;
   clrscr();
   printf("Enter cm");
   scanf("%f",&cm);
   i=inch(cm);
   f=foot(cm);
   printf("Length in inch=%f\n",inch);
   printf("Length in foot=%f\n",foot);
   getch();
  }


