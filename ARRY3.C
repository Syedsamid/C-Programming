#include<stdio.h>
#include<conio.h>
#define max 10
void main()
{
  int no[max],i,j,temp;
  clrscr();

  printf("Enter any 10 number:");
  for(i=0;i<max;i++)
  scanf("%d",&no[i]);

  printf("\nscorted arry\n");
  for(i=0;i<max;i++)
  {
    for(j=i+1;j<max;j++)
    {
      if (no[i]>no[j])
      {
       temp=no[i];
       no[i]=no[j];
       no[j]=temp;
      }
    }
   printf("%d\t",no[i]);
  }
getch();
}