#include<stdio.h>
#include<conio.h>
void main()
{
  char name[1];
  float bill,ds,nbill;
  clrscr();

  printf("Name and bill\n=");
  scanf("%s%f",&name,&bill);

  if(bill>=100000)
   ds=bill*0.1;
  else
   ds=bill*0.05;

  nbill=bill-ds;
  printf("Total discount in percentage=%f",ds);
  printf("\nTotal bill with discount=%f",nbill);
getch();
}