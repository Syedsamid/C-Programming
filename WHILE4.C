#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,sum=0;
  clrscr();
  printf("Enter range");
  scanf("%d",&n);
  i=1;
  while(i<=n)
  {
   if(i%2==0)
   {
    printf("%d\t",i);
    sum=sum+i;
    }
   }
   printf("\nSum of even no=%d",sum);
   getch();
   }