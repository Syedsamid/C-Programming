#include<stdio.h>
#include<conio.h>
void main()
{
  char another;
  int num;
  clrscr();
  do
  {
   printf("Enter a number");
   scanf("%d",&num);
   printf("Square of %d is %d\n",num,num*num);
   printf("Want to enter another number y\n");
   fflush(stdin);
   scanf("%c",&another);
  }
  while(another=='y');
getch();
}