#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k=0;
  clrscr();
  for(i=1;i<=5;i++,k=0)
  {
   for(j=1;j<=1;j++)
   {
    printf(" ");
   }
  while(k!=2*i-1)
    {
     printf("*");
     ++k;
    }
  printf("\n");
  }
getch();
}