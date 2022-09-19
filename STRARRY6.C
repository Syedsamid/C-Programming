#include<stdio.h>
#include<conio.h>
void main()
{
  char str[10],t;
  int i;
  clrscr();
  printf("Enter string:");
  scanf("%s",&str);
  i=0;
  while(str[i]!='\0')
  {
   i++;
   }
   i--;
   printf("\nReverse String=%s",str);
   while(i>=0)
    {
     printf("%c",str[i]);
    }
getch();
}