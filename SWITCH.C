#include<stdio.h>
#include<conio.h>
void main()
{
  int day;
  clrscr();
  printf("Enter day:");
  scanf("%d",&day);
  switch (day)
  {
   case 1:printf("monday");
   break;
   case 2:printf("Tuesday");
   break;
   case 3:printf("Wesnesday");
   break;
   case 4:printf("Thusday");
   break;
   case 5:printf("Friday");
   break;
   case 6:printf("Saturday");
   break;
   case 7:printf("sunday");
   break;
  default:printf("Invalid day");
  }
getch();
}