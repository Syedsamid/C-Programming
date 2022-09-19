#include<stdio.h>
#include<conio.h>
void main()
{
  float kg,pound;
  clrscr();

  printf("Enter weight in kg:");
  scanf("%f",&kg);
  pound=kg*2.205;
  printf("Weight in pound=%f",pound);
getch();
}