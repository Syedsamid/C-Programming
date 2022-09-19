#include<stdio.h>
#include<conio.h>
void main()
{
  float num1,num2;
  char(ch);
  clrscr();
  printf("Enetr first number:");
  scanf("%f",&num1);
  printf("Enter second number:");
  scanf("%f",&num2);
  printf("Enter choise:");
  scanf("%s",&ch);
  switch(ch)
  {
   case'+':printf("Addition =%f",num1+num2);break;
   case'-':printf("Subtraction =%f",num1-num2);break;
   case'/':printf("Division =%f",num1/num2);break;
   case'*':printf("Multiplaycation =%f",num1*num2);break;
   default:printf("Invalid symbol");
  }
getch();
}