#include<stdio.h>
#include<conio.h>
void main()
{
int day;
clrscr();
printf("Enter day\n");
scanf("%d",&day);
if(day==1)
printf("Monday");
else if(day==2)
printf("Tuesday");
else if(day==3)
printf("Wednesday");
else if(day==4)
printf("Thusday");
else if(day==5)
printf("Friday");
else if(day==6)
printf("Saturday");
else if(day==7)
printf("Sunday");
else
printf("Please enter the number from 1 to 7");
getch();
}