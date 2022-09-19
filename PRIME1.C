#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  clrscr();
  printf("Enter number");
  scanf("%d",&no);
  if(no==1 || no==3 || no==5 || no==5 ||no==7)
  {
   printf("%d is prime number",no);
  }
  else
  {
  printf("%d is not prime number",no);
  }
  getch();
}