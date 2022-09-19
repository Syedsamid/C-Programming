#include<stdio.h>
#include<conio.h>
void main()
{
  int a=10,*p;
  clrscr();
  p=&a;
  printf("\n%d stored at %v",a,&a);
  printf("\n%d stored at %v",*p,p);
getch();
}