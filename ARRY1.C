#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],b[10],i;
  clrscr();
  printf("Enter 10 element of array A:");
  for(i=0;i<=9;i++)
  scanf("%d",&a[i]);

  printf("Display copied Array are\n:");
  for(i=0;i<10;i++)
  {
  b[i]=a[i];
  printf("%d\t",b[i]);
  }
  getch();
  }