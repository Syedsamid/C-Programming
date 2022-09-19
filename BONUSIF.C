#include<stdio.h>
#include<conio.h>
void main()
{
  char name[10];
  float bs,bonus;
  clrscr();

  printf("Employe name:");
  scanf("%s",&name);
  printf("Salary:");
  scanf("%f",&bs);
  if(bs<=5000)
   bonus=bs*0.1;
  else
   (bs<=10000);
   bonus=bs*2.0;

  printf("\n Bonus=%f",bonus);
  printf("\n Gross salary=%f",bs+bonus);
getch();
}
