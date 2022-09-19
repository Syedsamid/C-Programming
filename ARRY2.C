#include<stdio.h>
#include<conio.h>
void main()
{
  int no[10],i,max,min;
  clrscr();
  printf("Enter any 10 number");

  for(i=0;i<10;i++)
  scanf("%d",&no[i]);
  max=no[0];
  min=no[0];

  for(i=1;i<=9;i++)
  {
   if(no[i]>max)
    max=no[i];
   if(no[i]<min)
    min=no[i];
  }
  printf("\nLarger no=%d",max);
  printf("\nSmaller no=%d",min);
  getch();
  }