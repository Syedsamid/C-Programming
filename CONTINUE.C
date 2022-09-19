#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  printf("No from 1 to 10\n");
  for(n=1;n<=100;n++)
  {
   if(n%8!=0)
   continue;
   printf("%d\t",n);
  }
getch();
}