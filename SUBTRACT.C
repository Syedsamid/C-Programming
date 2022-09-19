#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,count;
count=1;
while(count<=3)
{
printf("\nEnter two numbers:");
scanf("%d%d", &a,&b);
c=a-b;
printf("\nThe difference=%d",c);
count=count+1;
}
getch();
}