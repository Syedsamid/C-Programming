#include<stdio.h>
#include<conio.h>
void main()
{
  int day;
  clrscr();
  printf("Enter day:");
  scanf("\n%d",&day);
  switch (day)
  {
   case 1:printf("Monday");break;
   case 2:printf("Tuesday");break;
   case 3:printf("Wednesday");break;
   case 4:printf("Thusday");break;
   case 5:printf("Friday");break;
   case 6:printf("Saterday");break;
   case 7:printf("Sunday");break;

   default:printf("\nEnter No. from 1 to 7");
}
getch();
}



