#include<stdio.h>
#include<conio.h>
int rec (int);
void main()
{
int a,fact;
clrscr();
printf("Enter number");
scanf("%d",&a);
fact=rec(a);
printf("Factorial value=%d\n",fact);
getch();
}
int rec (int x)
{
int f;
if(x==1)
return(1);
else
f=x*rec(x-1);
return(f);
}