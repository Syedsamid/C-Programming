#include<stdio.h>
#include<conio.h>
  void str_rev(char x[])
   {
     int i=0;
     while(x[i]!='\0')
      {
	i++;
      }
     i--;
     while(i>=0)
     {
       printf("%c",x[i]);
       i--;
     }
   }
  void main()
  {
    char str[10];
    clrscr();
    printf("\nEnter String:");
    scanf("%s",&str);
    printf("\nReverse of string=");
    str_rev(str);
    getch();
   }