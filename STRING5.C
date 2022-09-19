#include<stdio.h>
#include<conio.h>
void main()
{
  char str[10];
  clrscr();

  printf("String:");
  scanf("%s",&str);

  strrev(str);
  printf("Reverse string=%s",str);
getch();
}