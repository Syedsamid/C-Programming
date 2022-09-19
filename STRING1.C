#include<stdio.h>
#include<conio.h>
void main()
{
  char name[10];
  clrscr();

  printf("Enter name:");
  scanf("%s",&name);

  printf("\nWelcom %s",name);
getch();
}