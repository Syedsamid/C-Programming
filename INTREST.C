#include<stdio.h>
#include<conio.h>
void main()
{
  char name[10];
  float si,p,r,n,tlsi;
  clrscr();

  printf("Enter coustomer name:");
  scanf("%s",&name);
  printf("Enter principle amount:");
  scanf("%f",&p);
  printf("rate of intrest:");
  scanf("%f",&r);
  printf("time period:");
  scanf("%f",&n);

  si=(p*r*n)/100.0;
  tlsi=si+p;

  printf("total simple intreast=%f",si);
  printf("\ntotal principal amount with simple interest=%f",tlsi);
getch();
}


