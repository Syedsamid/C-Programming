#include<stdio.h>
#include<conio.h>
void main()
{
  float bs,gs,da,hra;
  clrscr();
  printf("enter basic salary:");
  scanf("%f", &bs);

  if(bs<50000)
  {
   hra=bs*0.1/100;
   da=bs*0.9/100;
  }
  else
  {
   hra=500;
   da=bs*0.098/100;
  }
  gs=bs+hra+da;
  printf("\nGross salary=Rs%f",gs);
getch();
}