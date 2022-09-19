#include<stdio.h>
#include<conio.h>
void main()
{
  int year;
  clrscr();

  printf("Enter year:");
  scanf("%d",&year);
  if(year%4==0)
   printf("Is a leap year");
  else
   printf("Not a leap year");
getch();
}