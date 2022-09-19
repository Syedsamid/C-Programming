#include<stdio.h>
#include<conio.h>
  int str_len(char x[])
   {
    int i=0;
    while(x[i]!='\0')
     {
      i++;
     }
    return i;
   }
  void main()
  {
    char str[10];
    int l;
    clrscr();
    printf("String:");
    scanf("%s",&str);
    l=str_len(str);
    printf("\n length=%d",l);
  getch();
  }