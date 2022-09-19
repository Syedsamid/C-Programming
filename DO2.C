#include<stdio.h>
#include<conio.h>
void main()
{
  char another;
  float num1,num2,div;
  do
  {
   clrscr();
   printf("Enter two numbers:");
   scanf("%f%f",&num1,&num2);
   div=num1/num2;
   printf("division  is %f",div);
   printf("\nwant to enter another number y");
   scanf("%c",&another);
  }
  while(another=='y');
getch();
}


