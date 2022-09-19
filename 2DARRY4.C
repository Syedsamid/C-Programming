#include<stdio.h>
#include<conio.h>
void main()
{
  int no[2][3],i,j;
  clrscr();
  printf("Enter Element for Arry A 2*3\n");
  for(i=0;i<2;i++)
   {
     for(j=0;j<3;j++)
     {
       scanf("%d",&no[i][j]);
     }
   }
  printf("Elements of Arry are\n");
  for(i=0;i<2;i++)
   {
     for(j=0;j<3;j++)
     {
      printf("No[%d][%d]=%d\n",i,j,no[i][j]);
     }
    printf("\n");
   }
getch();
}

