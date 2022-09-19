#include<stdio.h>
#include<conio.h>
void main()
{
  int no1,no2,no3;
  clrscr();
  printf("Enter Three no:");
  scanf("%d%d%d",&no1,&no2,&no3);
  if(no1>no2)
  {
   if(no1>no3)
   printf("%d is maximum",no1);
   else
   printf("%d is maximum",no3);
  }
  else
  {
   if(no2>no3)
   printf("%d is maximum",no2);
   else
   printf("%d is maximum",no3);
   }
 getch();
 }
