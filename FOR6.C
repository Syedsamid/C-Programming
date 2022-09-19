#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,a=0,b=0,c=0,d=0,e=0;
  clrscr();
  printf("Enter any 10 2digite number\n");

  for(i=1;i<=10;i++)
  {
   scanf("%d",&n);
   if(n>=0 && n<=25)
   a++;
   else if(n>26 && n<=50)
   b++;
   else if(n>51 && n<=75)
   c++;
   else if(n>76 && n<=100)
   d++;
  }
  printf("\n 0-25=%d",a);
  printf("\n 26-50=%d",b);
  printf("\n 51-75=%d",c);
  printf("\n 76-100=%d",d);
  getch();
}