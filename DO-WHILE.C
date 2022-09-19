#include<stdio.h>
int main()
{
  char another;
  int yob,cy,age;
  do
  {
   clrscr();
   printf("\nEnter current year:\n");
   scanf("%d",&cy);
   printf("\nEnter year of birth:\n");
   scanf("%d",&yob);
   age=cy-yob;
   printf("\nYour current age is = %dyears old\n",age);
   printf("\nWant to find somebody's age:\n");
   scanf("%c",&another);
  }
  while(another=='y');
}