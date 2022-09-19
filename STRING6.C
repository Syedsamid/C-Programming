#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char s1[10],s2[20];
  clrscr();

  printf("String 1:");
  scanf("%s",&s1);

  printf("String 2:");
  scanf("%s",&s2);

  strcat(s1,s2);
  printf("\nConcated string=%s",s1);
getch();
}
