#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2,sum=0,rem;
  clrscr();
  printf("Enter no:");
  scanf("%d",&num1);
  num2=num1;
   while(num1!=0)
   {
    rem=num1%10;
    sum=sum+(rem*rem*rem);
    num1=num1/10;
   }
   if(num2==sum)
   printf("%d is Armstrong number",num2);
   else
   printf("%d is not Armstrong number",num2);
   getch();
   }

