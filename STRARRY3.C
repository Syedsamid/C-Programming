#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[10],str2[10];
  int i,j;
  clrscr();
  printf("First String:");
  scanf("%s",&str1);

  strcpy(str2,str1);   //copy original string
  strrev(str2);       //reverse of string
  if(strcpy(str1,str2)==0)
   {
    printf("%s is palidrome",str1);
   }
  else
  {
   printf("%s is not palidrome",str1);
  }
getch();
}