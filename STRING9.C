#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[10],str2[10];
  int i;
  clrscr();
  printf("Enter string:");
  scanf("%s",&str1);
  i=0;
  while(str1[i]!='\0')
   {
     str2[i]=str1[i];
     i++;
   }
  str2[i]='\0';
  printf("\nCopied string=%d",str2);
getch();
}
