#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,x=0;
  clrscr();
  printf("Enter number");
  scanf("%d",&n);

  for(i=1;i<=10;i++)
  {
   x=x+n;
   printf("%d\n",x);
  }
  getch();
}