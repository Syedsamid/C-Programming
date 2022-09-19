#include<stdio.h>
#include<conio.h>
void main()
{
  int no,digit,sum=0,count=0;
  clrscr();
  printf("Enter no:");
  scanf("%d",&no);
  while(no>0)
  {
   digit=no%10;
   printf("%d\t",digit);
   sum=sum+digit;
   count++;
   no=no/10;
  }
  printf("\nSum of digit=%d",sum);
  printf("\nCount of digits=%d",count);
  getch();
}