#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[15],str2[10];
  int i,j;
  clrscr();
  printf("First string:");
  scanf("%s",&str1);
  printf("Second string:");
  scanf("%s",&str2);
  i=0;
  while(str1[i]!='\0')
   {
    i++;
   }
    j=0;
  while(str2[j]!='\0')
   {
    str1[i]=str2[j];
     i++;
     j++;
   }
  str1[i]='\0';
  printf("Concated string=%s",str1);
getch();
}
