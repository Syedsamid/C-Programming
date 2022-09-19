#include<stdio.h>
int main()
{
  int no[2][3]={5,10,15,20,25},i,j;
  clrscr();
  printf("Arry element are\n");
  for(i=0;i<2;i++)
  {
   for(j=0;j<3;j++)
   {
    printf("%d\t",no[i][j]);
   }
  printf("\n");
  }
}