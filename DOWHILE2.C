#include<stdio.h>
#include<conio.h>
void main()
{
  float num;
  char ch;
  do
  {
   clrscr();
   printf("\nEnter number");
   scanf("%f",&num);
   printf("\nsquare=%f",num*num);
   printf("\ncube=%f",num*num*num);
   printf("\npress y to continue...");
   scanf("%s",&ch);
  }
  while(ch=='y' || ch=='Y');
getch();
}