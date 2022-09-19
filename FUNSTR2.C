#include<stdio.h>
#include<conio.h>

  void str_cpy(char y[],char x[])
   {
    int i=0;
    while(x[i]!='\0')
     {
       y[i]=x[i];
       i++;
     }
    y[i]='\0';
   }
  void main()
   {
    char str1[10],str2[10];
    int l;
    clrscr();
    printf("String:");
    scanf("%s",&str1);
    str_cpy(str2,str1);
    printf("\nCopy string=%s",str2);
    getch();
   }