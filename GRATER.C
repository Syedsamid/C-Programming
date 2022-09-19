#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2;
  clrscr();
  printf("Enter two number");
  scanf("%d%d",&num1,&num2);

  if (num1<num2)
  printf("%d<%d",num1,num2);
  else
  printf("%d>%d",num1,num2);
getch();
}