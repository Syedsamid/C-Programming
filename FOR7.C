#include<stdio.h>
#include<conio.h>
void main()
{
  int n,f1=0,f2=1,fib,i;
  clrscr();
  printf("Enter number");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
   if(i==0)
   fib=0;
   else
   {
    fib=f1+f2;
    f2=f1;
    f1=fib;
    printf("\n%d",fib);
   }
  }
getch();
}