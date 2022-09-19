#include<stdio.h>
#include<conio.h>
void main()
{
  int no=1;
  clrscr();
  printf("\n Odd no 1 to 10\n");

  while(no<=10)
  {
   if(no%2!=0)
   printf("%d\t",no);
   no++;
  }
getch();
}
