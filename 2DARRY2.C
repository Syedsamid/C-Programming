#include<stdio.h>
#include<conio.h>
void main()
{
  int arr1[5],arr2[5],i,j;
  clrscr();
  printf("\nEnter 5 element of arry:\n");

  for(i=0;i<=4;i++)
  scanf("%d",&arr1[i]);

  for(i=0,j=4;i<=4;i++,j--)
  arr2[j]=arr1[i];
  printf("Elements in reverse order:\n");

  for(i=0;i<=4;i++)
  printf("\n%d\t",arr2[i]);
getch();
}