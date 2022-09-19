#include<stdio.h>
#include<conio.h>
void factorize(int,int);
void main()
{
int num;
clrscr();
printf("Enter number:");
scanf("%d",&num);
printf("Prime factorial are=");
factorize (num,2);
getch();
}
void factorize(int n,int i)
{
if(i<=n)
{
if(n%i==0)
{
printf("%d\n",i);
n=n/i;
}
else
i++;
factorize(n,i);
}
getch();
}
