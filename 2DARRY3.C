#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],a1[3][3],i,j;
  clrscr();
  printf("Enter elements for Arry A 3*3\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    a1[j][i]=a[i][j];
   }
  }
  printf("Transpose of Matrix are\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    printf("%d\t",a1[i][j]);
   }
   printf("\n");
  }
getch();
}