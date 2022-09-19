#include<stdio.h>
#include<conio.h>
void main()
{
  char x[10],y[10];
  clrscr();

  printf("First string:");
  scanf("%s",&x);

  printf("Second string:");
  scanf("%s",&y);

   if(strcmp(x,y)==0)
   {
    printf("Both are same");
   }
   else
   {
    printf("Both are not equal");
   }
getch();
}
