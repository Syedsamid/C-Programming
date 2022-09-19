#include<stdio.h>
#include<conio.h>
void main()
{
  char city[5][15]={"Mumbai","Pune","Nanded","Jalna","Aurangabad"};
  int i;
  clrscr();
  for(i=0;i<5;i++)
   {
    printf("\n%s",city[i]);
   }
  getch();
  }

