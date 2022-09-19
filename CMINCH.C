#include<stdio.h>
#include<conio.h>
void main()
{
  float inch,cm,foot;
  clrscr();

  printf("Enter cm=");
  scanf("%f",&cm);
  inch=cm*0.394;
  foot=cm/30.48;
  printf("Lengh in inch=%f\n",inch);
  printf("Length in foot=%f\n",foot);
getch();
}