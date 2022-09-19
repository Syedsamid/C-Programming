#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
clrscr();
printf("Enter two number");
scanf("%d%d",&num1,&num2);
if(num1==num2)
printf("resust %d=%d",num1,num2);
if(num1<num2)
printf("result %d<%d",num1,num2);
else
printf("result %d>%d",num1,num2);
getch();
}
