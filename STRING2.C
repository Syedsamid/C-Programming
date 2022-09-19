#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str[10];
  int len;

  clrscr();
  printf("Enter string:");
  scanf("%s",&str);

  len=strlen(str);
  printf("\nlength=%d",len);
getch();
}


