#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,total;
clrscr();
printf("enter marks of three subject");
scanf("%d%d%d",&a,&b,&c);
(total=a+b+c);
if(total>=100)
{
printf("congragulation you are promoted");
}
else
{
printf("sorry you are detained");
}
getch();
}
