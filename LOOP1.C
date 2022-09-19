#include<stdio.h>
#include<conio.h>
void main()
{
  int p,n,count;
  float r,si;
  count=1;
  while(count<=2)
  {
   clrscr();
   printf("Enter value of p,n,and r:");
   scanf("%d%d%f",&p,&n,&r);
   si=p*n*r/100;
   printf("Simple interest =Rs%\nf",si);
   count=count+1;
  }
getch();
}