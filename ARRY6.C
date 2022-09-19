#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i;
  clrscr();
  printf("Enter elements");
  for(i=0;i<5;i++)
  {
   scanf("%d",&a[i]);
  }
   printf("Display elements");
   for(i=0;i<5;i++)
   {
    printf("\n%d",a[i]);
   }
  getch();
  }
