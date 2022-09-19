#include<stdio.h>
#include<conio.h>
void main()
{
  int positive,negetive,number;
  clrscr();
  printf("Enter number");
  scanf("%d",&number);
  if(number<0)
  {
   printf("number is negetive");
  }
  else
  {
   printf("number is positive");
  }
getch();
}