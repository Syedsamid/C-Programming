#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("enter your age");
scanf("%d",&age);
if (age>=18)
{
printf("congrasulation you can vote");
}
else
{
printf("sorry try next time");
}
getch();
}
