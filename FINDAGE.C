#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter current year\n");
scanf("%d",&a);
printf("enter birth year\n");
scanf("%d",&b);
c=a-b;
printf("you are %d",c);
getch();
}