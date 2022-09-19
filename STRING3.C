#include<stdio.h>
#include<conio.h>
void main()
{
  char x[10],y[10];
  clrscr();

  printf("Enter string:");
  scanf("%s",&x);

  strcpy(y,x);
  printf("\nCopied string=%s",y);
getch();
}