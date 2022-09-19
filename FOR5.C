#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,count=0;
  clrscr();
  printf("Enter number to cheach no is prime or not:");
  scanf("%d",&n);

  for(i=2;i<=2;i++)
  {
   if(n%i==0)
   {
   count=1;
   break;
   }
  }
  if (count==0)
  printf("\nIt is prime number");
  else
  printf("\nIt is not a prime number");
  getch();
}