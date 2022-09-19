#include<stdio.h>
#include<conio.h>
void main()
{
  char str[10];
  int i;
  clrscr();
  printf("Ebnter string:");
  scanf("%s",&str);
  i=0;
  while(str[i]!='\0')
  {
   i++;
  }
  i--;
  printf("Reverse of String=");
  while(i>=0)
  {
   printf("%c",str[i]);
  }
getch();
}
