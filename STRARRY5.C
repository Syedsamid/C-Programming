#include<stdio.h>
#include<conio.h>
void main()
{
  char name[5][15];
  int i;
  clrscr();
  for(i=0;i<5;i++)
  {
   printf("Enter number:");
   scanf("%s",&name[i]);
  }
  printf("List of students are\n");
  for(i=0;i<5;i++)
  {
   printf("\n%s",name[i]);
  }
getch();
}