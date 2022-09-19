#include<stdio.h>
#include<conio.h>
void main()
{
  char str[10]="India";
  int i;
  clrscr();
  printf("String=%s",str);
  printf("\nValues stored at each location are\n");
  i=0;
  while(str[i]!='\0')
  {
   printf("str=[%d]=%c\n",i,str[i]);
   i++;
  }
getch();
}

